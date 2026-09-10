-- =============================================================================
-- Migration 001 — Initial schema
--
-- Design principles applied vs original:
--   - No computed values stored (age, gross_pay, net_pay, overtime_pay derived at runtime)
--   - Single DB, single table for all employees — status column replaces PreviousEmployees.accdb
--   - Money stored as INTEGER cents — avoids floating-point rounding in payroll math
--   - Dates stored as TEXT ISO 8601 (YYYY-MM-DD) — SQLite has no native date type
--   - Enums enforced via CHECK constraints — SQLite has no ENUM type
--   - Foreign keys declared — must enable per-connection with PRAGMA foreign_keys = ON
--   - Benefits normalized to one row per employee per benefit type (vs 6 columns)
--   - Tax withholdings live on paystubs, not on the employee — they vary per pay period
--   - Paystub history replaces the original's single overwritten computed-pay columns
-- =============================================================================

PRAGMA foreign_keys = ON;

-- -----------------------------------------------------------------------------
-- schema_version
-- Tracks which migrations have been applied. App checks this on startup and
-- runs any pending migration files in order.
-- -----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS schema_version (
    version     INTEGER PRIMARY KEY,
    applied_at  TEXT NOT NULL DEFAULT (datetime('now'))
);


-- -----------------------------------------------------------------------------
-- employees
-- Single source of truth for all employees — active and former.
-- Replaces: EmployeeInfo (identity/contact/employment columns) + entire Previous table.
--
-- status values:
--   'active'     — currently employed
--   'terminated' — let go by employer
--   'quit'       — resigned
--   'retired'    — retired
--   'deceased'   — passed away
--
-- position values:
--   'admin'      — can access HR screens, run payroll, add/remove employees
--   'employee'   — can view own paystubs and benefits only
--
-- password_hash: store a bcrypt/argon2 hash, never plaintext.
--   For this project scope, a SHA-256 hex string is acceptable as a step up
--   from the original plaintext — note it in the README if skipping full bcrypt.
--
-- ssn: sensitive PII. In production, encrypt at rest. Marked UNIQUE — no two
--   employees share an SSN.
--
-- termination_date: NULL when status = 'active', required otherwise.
-- -----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS employees (
    id                  INTEGER PRIMARY KEY,         -- auto-assigned (SQLite rowid alias)
    ssn                 TEXT    NOT NULL UNIQUE,
    password_hash       TEXT    NOT NULL,
    first_name          TEXT    NOT NULL,
    last_name           TEXT    NOT NULL,
    date_of_birth       TEXT    NOT NULL,            -- ISO 8601: YYYY-MM-DD
    gender              TEXT,
    address             TEXT,
    city                TEXT,
    state               TEXT,                        -- residential state abbrev: "NY", "NJ", "CT"
    zip                 TEXT,
    email               TEXT,
    phone               TEXT,
    position            TEXT    NOT NULL DEFAULT 'employee'
                                CHECK(position IN ('admin', 'employee')),
    status              TEXT    NOT NULL DEFAULT 'active'
                                CHECK(status IN ('active', 'terminated', 'quit', 'retired', 'deceased')),
    hire_date           TEXT    NOT NULL,            -- ISO 8601: YYYY-MM-DD
    termination_date    TEXT,                        -- ISO 8601; NULL while active
    CONSTRAINT chk_termination_date CHECK (
        (status = 'active'   AND termination_date IS NULL) OR
        (status != 'active'  AND termination_date IS NOT NULL)
    )
);


-- -----------------------------------------------------------------------------
-- compensation
-- Pay configuration per employee — the SOURCE inputs for payroll calculation.
-- One row per employee (UNIQUE on employee_id).
-- Replaces: PayType, HourlyPay, SalaryPay, AppliedTaxState from EmployeeInfo.
--
-- pay_type values:
--   'hourly_full'  — full-time hourly (eligible for all benefits)
--   'hourly_part'  — part-time hourly (limited benefit eligibility)
--   'salary'       — fixed weekly salary
--
-- hourly_rate_cents: NULL for salary employees.
-- salary_weekly_cents: NULL for hourly employees.
-- tax_state: two-letter abbrev of state whose tax table applies — "NY", "NJ", "CT".
--   Separate from employees.state (residential) — an edge case in the original
--   that this makes explicit.
-- retirement_401k_cents: fixed per-period contribution amount (as in original).
-- -----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS compensation (
    id                      INTEGER PRIMARY KEY,
    employee_id             INTEGER NOT NULL UNIQUE REFERENCES employees(id),
    pay_type                TEXT    NOT NULL
                                    CHECK(pay_type IN ('hourly_full', 'hourly_part', 'salary')),
    hourly_rate_cents       INTEGER,                 -- NULL for salary; e.g. 3000 = $30.00/hr
    salary_weekly_cents     INTEGER,                 -- NULL for hourly; e.g. 50000 = $500.00/wk
    tax_state               TEXT    NOT NULL,        -- "NY", "NJ", "CT"
    retirement_401k_cents   INTEGER NOT NULL DEFAULT 0,
    CONSTRAINT chk_pay_rate CHECK (
        (pay_type = 'salary'       AND salary_weekly_cents IS NOT NULL AND hourly_rate_cents IS NULL) OR
        (pay_type != 'salary'      AND hourly_rate_cents IS NOT NULL AND salary_weekly_cents IS NULL)
    )
);


-- -----------------------------------------------------------------------------
-- benefits
-- One row per employee per benefit type — replaces the 6 *Coverage/*Cost columns.
-- UNIQUE(employee_id, benefit_type) enforces one election per benefit per employee.
-- Replaces: HealthCoverage, DentalCoverage, VisionCoverage, HealthCost, DentalCost,
--           VisionCost from EmployeeInfo.
--
-- benefit_type: 'health', 'dental', 'vision'
--
-- tier values (maps directly from original free-text values):
--   'premium'    — "Premium Package" — enrolled, cost applies
--   'waived'     — "None/Purchase Later" — eligible but not enrolled, no cost
--   'ineligible' — "Can't Purchase" — part-time threshold not met, cannot enroll
--
-- cost_per_period_cents: 0 when tier is 'waived' or 'ineligible'.
-- -----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS benefits (
    id                      INTEGER PRIMARY KEY,
    employee_id             INTEGER NOT NULL REFERENCES employees(id),
    benefit_type            TEXT    NOT NULL CHECK(benefit_type IN ('health', 'dental', 'vision')),
    tier                    TEXT    NOT NULL CHECK(tier IN ('premium', 'waived', 'ineligible')),
    cost_per_period_cents   INTEGER NOT NULL DEFAULT 0,
    UNIQUE(employee_id, benefit_type)
);


-- -----------------------------------------------------------------------------
-- paystubs
-- Immutable historical record of each pay run per employee.
-- Replaces: Hours, OvertimeHours, OvertimePay, Weeklygrosspay, Netpay,
--           FederalTax, NYTax, NJTax, CTTax, SSAWithholding from EmployeeInfo.
--
-- All monetary fields in cents.
-- All values are the OUTPUTS of a pay calculation — snapshots at time of run.
-- Rows are never updated after insert (append-only ledger).
--
-- period_start / period_end: ISO 8601 dates bounding the pay period.
-- hours_regular / hours_overtime: 0 for salary employees.
-- gross_pay_cents: computed at run time — not stored on the employee.
-- net_pay_cents: gross - all deductions — computed at run time.
-- -----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS paystubs (
    id                          INTEGER PRIMARY KEY,
    employee_id                 INTEGER NOT NULL REFERENCES employees(id),
    period_start                TEXT    NOT NULL,    -- ISO 8601: YYYY-MM-DD
    period_end                  TEXT    NOT NULL,    -- ISO 8601: YYYY-MM-DD
    hours_regular               INTEGER NOT NULL DEFAULT 0,
    hours_overtime              INTEGER NOT NULL DEFAULT 0,
    gross_pay_cents             INTEGER NOT NULL,
    federal_tax_cents           INTEGER NOT NULL DEFAULT 0,
    state_tax_cents             INTEGER NOT NULL DEFAULT 0,
    fica_cents                  INTEGER NOT NULL DEFAULT 0,   -- SSA + Medicare
    health_deduction_cents      INTEGER NOT NULL DEFAULT 0,
    dental_deduction_cents      INTEGER NOT NULL DEFAULT 0,
    vision_deduction_cents      INTEGER NOT NULL DEFAULT 0,
    retirement_401k_cents       INTEGER NOT NULL DEFAULT 0,
    net_pay_cents               INTEGER NOT NULL,
    created_at                  TEXT    NOT NULL DEFAULT (datetime('now'))
);


-- -----------------------------------------------------------------------------
-- Seed: record this migration as applied
-- -----------------------------------------------------------------------------
INSERT INTO schema_version (version) VALUES (1);

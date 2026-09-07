-- =============================================================================
-- Original Payrolls Schema — reverse-engineered from .accdb files
-- Source: Payroll_InfoDone.accdb + PreviousEmployees.accdb
-- NOTE: this is the AS-IS design, not a target. See docs/db_design.md for
--       the normalized redesign.
-- =============================================================================


-- =============================================================================
-- FILE: Payroll_InfoDone.accdb
-- TABLE: EmployeeInfo
--
-- The primary "database." One god-table for all active employees.
-- Every screen in the original app read/wrote directly to this table:
--   Login screen        → matched Password + ID
--   HrView              → displayed most columns
--   AddEmployee         → inserted a new row (all 38 columns at once)
--   UpdateEmployee      → updated individual columns in-place
--   removeEmployee      → deleted the row (no soft delete — gone forever)
--   GrossIncome screen  → read/wrote Hours, OvertimeHours, computed pay cols
--   Benefits screen     → read/wrote *Coverage + *Cost columns
--   ViewPaystub         → read computed pay cols (Netpay, Weeklygrosspay, etc.)
-- =============================================================================

CREATE TABLE EmployeeInfo (

    -- -------------------------------------------------------------------------
    -- Identity / Auth
    -- These two columns were used as the login credential pair.
    -- Password stored plaintext — no hashing.
    -- SSN used as a secondary identifier in some screens, not truly as auth.
    -- -------------------------------------------------------------------------
    ID          INTEGER NOT NULL,   -- primary key; manually assigned by admin
    Password    TEXT,               -- plaintext login password
    SSN         TEXT,               -- social security number; Text(255) in original (massive overkill)

    -- -------------------------------------------------------------------------
    -- Personal info
    -- Age is DERIVED from DateofBirth — stored redundantly (goes stale).
    -- Gender stored as free text ("male"/"female" in practice).
    -- -------------------------------------------------------------------------
    Firstname       TEXT,
    Lastname        TEXT,
    DateofBirth     TEXT,           -- stored as DateTime in Access; used to display DOB, not to compute Age
    Age             INTEGER,        -- COMPUTED from DateofBirth — never updated automatically, just stale
    Gender          TEXT,

    -- -------------------------------------------------------------------------
    -- Contact / Address
    -- All stored as Memo/Hyperlink(255) in Access — equivalent to TEXT.
    -- No normalization: city, state, zip all live on the employee row.
    -- AppliedTaxState is a SECOND state field — used to determine which tax
    -- column to apply (NYTax vs NJTax vs CTTax). Redundant with State in practice.
    -- -------------------------------------------------------------------------
    Address1    TEXT,
    City        TEXT,
    State       TEXT,               -- residential state ("NY", "NJ", etc.)
    Zipcode     TEXT,
    Email       TEXT,
    PhoneNumber TEXT,

    -- -------------------------------------------------------------------------
    -- Employment
    -- Position: "Admin" vs "Employee" — effectively a role/permission level.
    -- PayType: "Full time" / "Part time" / "Salary" — drives which pay calc runs.
    -- HireDate: used for display only; no tenure calculation seen in original.
    -- -------------------------------------------------------------------------
    Position    TEXT,               -- "Admin" or "Employee"
    PayType     TEXT,               -- "Full time", "Part time", "Salary"
    HireDate    TEXT,

    -- -------------------------------------------------------------------------
    -- Pay rates (inputs to calculation)
    -- HourlyPay: base rate for hourly employees
    -- SalaryPay: weekly salary amount for salaried employees
    -- These are the SOURCE values — the only ones that should be stored.
    -- -------------------------------------------------------------------------
    HourlyPay   REAL,               -- currency in Access; hourly rate
    SalaryPay   REAL,               -- currency; fixed weekly salary

    -- -------------------------------------------------------------------------
    -- Pay period inputs
    -- Set each pay period by admin before running payroll.
    -- Hours + OvertimeHours are inputs; OvertimePay is COMPUTED from them.
    -- -------------------------------------------------------------------------
    Hours           INTEGER,        -- regular hours worked this period
    OvertimeHours   INTEGER,        -- overtime hours worked this period
    OvertimePay     REAL,           -- COMPUTED: OvertimeHours * (HourlyPay * 1.5) — stored, not derived

    -- -------------------------------------------------------------------------
    -- Computed pay outputs (all DERIVED — should not be stored)
    -- These were written back to the DB after the GrossIncome screen calculated them.
    -- Storing them means the value is only valid for the last run — no history.
    -- -------------------------------------------------------------------------
    Weeklygrosspay  REAL,           -- gross pay before deductions
    Netpay          REAL,           -- gross - taxes - benefits

    -- -------------------------------------------------------------------------
    -- Tax withholdings (outputs of tax calculation)
    -- One column per state — rigid, doesn't scale.
    -- AppliedTaxState drives which column is used for the current employee.
    -- SSAWithholding: Social Security / Medicare (FICA).
    -- -------------------------------------------------------------------------
    AppliedTaxState TEXT,           -- "New York", "New Jersey", "Connecticut"
    FederalTax      REAL,
    NYTax           REAL,           -- New York state tax
    NJTax           REAL,           -- New Jersey state tax
    CTTax           REAL,           -- Connecticut state tax
    SSAWithholding  REAL,           -- FICA (Social Security + Medicare)

    -- -------------------------------------------------------------------------
    -- Benefits enrollment + costs
    -- Coverage columns: "Premium Package", "None/Purchase Later", "Can't Purchase"
    --   "Can't Purchase" = ineligible (part-time threshold not met, etc.)
    -- Cost columns: dollar amount deducted per pay period for that benefit.
    -- 401K: contribution amount per period (not a percentage — raw dollar).
    -- -------------------------------------------------------------------------
    HealthCoverage  TEXT,           -- "Premium Package" / "None/Purchase Later" / "Can't Purchase"
    DentalCoverage  TEXT,
    VisionCoverage  TEXT,
    HealthCost      REAL,
    DentalCost      REAL,
    VisionCost      REAL,
    [401K]          REAL            -- retirement contribution per period
);


-- =============================================================================
-- FILE: PreviousEmployees.accdb
-- TABLE: Previous
--
-- Soft-delete workaround — when an employee was "removed," a new row was
-- inserted here manually, then the row deleted from EmployeeInfo.
-- No foreign key to EmployeeInfo.ID — just an ID field copied by hand.
-- No pay/benefits data carried over — record is identity-only.
-- DOH = Date of Hire (same as HireDate in EmployeeInfo).
-- Status: "Terminated", "Retired", "Deceased", "Quit"
-- =============================================================================

CREATE TABLE Previous (
    ID          INTEGER,            -- same ID as EmployeeInfo.ID — no FK enforced
    FirstName   TEXT,
    LastName    TEXT,
    DOH         TEXT,               -- Date of Hire — copied from EmployeeInfo.HireDate
    Status      TEXT                -- "Terminated" / "Retired" / "Deceased" / "Quit"
);

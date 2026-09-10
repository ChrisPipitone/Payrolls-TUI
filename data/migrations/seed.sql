-- =============================================================================
-- Seed data — development only
-- Passwords are plaintext stored as hash field until hashing is implemented.
-- Dev password for all users: "password123"
-- =============================================================================

PRAGMA foreign_keys = ON;

-- -----------------------------------------------------------------------------
-- Employees
-- id 1 = admin, ids 2-5 = regular employees, id 6 = terminated
-- -----------------------------------------------------------------------------
INSERT INTO employees VALUES
  (1,  '111-22-3333', 'password123', 'Jose',    'Olaya',     '2001-11-29', 'male',   '105 Bolognesi Ave', 'Staten Island', 'NY', '10301', 'jose@example.com',    '777-777-7777', 'admin',    'active',     '2021-11-30', NULL),
  (2,  '112-88-8882', 'password123', 'Lorena',  'MacPherson', '2000-02-09', 'female', '78 Arthur Kill Rd', 'Staten Island', 'NY', '10305', 'lorena@example.com',  '888-888-8888', 'employee', 'active',     '2021-11-30', NULL),
  (3,  '888-88-8888', 'password123', 'Ivan',    'Avalos',     '1980-11-30', 'male',   '87 Jesus St',       'New York City', 'NY', '11021', 'ivan@example.com',    '666-666-6666', 'employee', 'active',     '2021-11-30', NULL),
  (4,  '111-44-4444', 'password123', 'Diana',   'Kizzy',      '1987-09-17', 'female', '90 Road St',        'Little Ferry',  'NJ', '07643', 'diana@example.com',   '999-999-9999', 'employee', 'active',     '2021-11-30', NULL),
  (5,  '555-55-5555', 'password123', 'Marcus',  'Webb',       '1995-03-14', 'male',   '12 Harbor Blvd',    'Newark',        'NJ', '07102', 'marcus@example.com',  '555-123-4567', 'employee', 'active',     '2022-03-01', NULL),
  (6,  '999-11-2222', 'password123', 'Jessica', 'James',      '1990-06-21', 'female', '55 Maple Ave',      'Hoboken',       'NJ', '07030', 'jessica@example.com', '201-555-9900', 'employee', 'terminated', '2021-12-13', '2023-01-15');

-- -----------------------------------------------------------------------------
-- Compensation
-- hourly_rate_cents: e.g. 3000 = $30.00/hr
-- salary_weekly_cents: e.g. 50000 = $500.00/wk
-- -----------------------------------------------------------------------------
INSERT INTO compensation VALUES
  (1, 1, 'salary',      NULL, 50000, 'NY', 2150),   -- Jose:   $500/wk salary, $21.50 401k
  (2, 2, 'hourly_full', 3000, NULL,  'NY', 0),       -- Lorena: $30.00/hr full-time
  (3, 3, 'hourly_part', 2000, NULL,  'NY', 0),       -- Ivan:   $20.00/hr part-time
  (4, 4, 'hourly_full', 2500, NULL,  'NJ', 4784),    -- Diana:  $25.00/hr full-time, $47.84 401k
  (5, 5, 'hourly_full', 2200, NULL,  'NJ', 0),       -- Marcus: $22.00/hr full-time
  (6, 6, 'hourly_full', 1800, NULL,  'NJ', 0);       -- Jessica (terminated)

-- -----------------------------------------------------------------------------
-- Benefits
-- One row per employee per benefit type (health, dental, vision)
-- cost_per_period_cents: e.g. 2563 = $25.63/period
-- -----------------------------------------------------------------------------
INSERT INTO benefits VALUES
  -- Jose (admin, salary — full benefits)
  (1,  1, 'health', 'premium',    5563),
  (2,  1, 'dental', 'premium',    2500),
  (3,  1, 'vision', 'waived',     0),

  -- Lorena (full-time hourly — full benefits eligible)
  (4,  2, 'health', 'premium',    5563),
  (5,  2, 'dental', 'waived',     0),
  (6,  2, 'vision', 'premium',    0),

  -- Ivan (part-time — ineligible for all)
  (7,  3, 'health', 'ineligible', 0),
  (8,  3, 'dental', 'ineligible', 0),
  (9,  3, 'vision', 'ineligible', 0),

  -- Diana (full-time — full benefits)
  (10, 4, 'health', 'premium',    5563),
  (11, 4, 'dental', 'premium',    2500),
  (12, 4, 'vision', 'premium',    0),

  -- Marcus (full-time — partial elections)
  (13, 5, 'health', 'premium',    5563),
  (14, 5, 'dental', 'waived',     0),
  (15, 5, 'vision', 'waived',     0),

  -- Jessica (terminated — kept for history)
  (16, 6, 'health', 'premium',    5563),
  (17, 6, 'dental', 'waived',     0),
  (18, 6, 'vision', 'waived',     0);

-- -----------------------------------------------------------------------------
-- Paystubs — two pay periods per active employee for history testing
-- period: weekly. All values in cents.
-- -----------------------------------------------------------------------------
INSERT INTO paystubs
  (employee_id, period_start, period_end, hours_regular, hours_overtime,
   gross_pay_cents, federal_tax_cents, state_tax_cents, fica_cents,
   health_deduction_cents, dental_deduction_cents, vision_deduction_cents,
   retirement_401k_cents, net_pay_cents)
VALUES
  -- Jose (salary $500/wk)
  (1, '2026-08-25', '2026-08-31', 0, 0, 50000, 5000, 2000, 3100, 5563, 2500, 0, 2150, 31687),
  (1, '2026-09-01', '2026-09-07', 0, 0, 50000, 5000, 2000, 3100, 5563, 2500, 0, 2150, 31687),

  -- Lorena (40hrs @ $30/hr = $1200 gross)
  (2, '2026-08-25', '2026-08-31', 40, 0, 120000, 12000, 4800, 7440,  5563, 0, 0, 0, 90197),
  (2, '2026-09-01', '2026-09-07', 40, 2, 129000, 12900, 5160, 7998,  5563, 0, 0, 0, 97379),

  -- Ivan (20hrs @ $20/hr = $400 gross)
  (3, '2026-08-25', '2026-08-31', 20, 0, 40000, 4000, 1600, 2480, 0, 0, 0, 0, 31920),
  (3, '2026-09-01', '2026-09-07', 20, 0, 40000, 4000, 1600, 2480, 0, 0, 0, 0, 31920),

  -- Diana (40hrs @ $25/hr = $1000 gross)
  (4, '2026-08-25', '2026-08-31', 40, 0, 100000, 10000, 5800, 6200, 5563, 2500, 0, 4784, 65153),
  (4, '2026-09-01', '2026-09-07', 40, 4, 115000, 11500, 6670, 7130, 5563, 2500, 0, 4784, 76853),

  -- Marcus (40hrs @ $22/hr = $880 gross)
  (5, '2026-08-25', '2026-08-31', 40, 0, 88000, 8800, 5104, 5456, 5563, 0, 0, 0, 63077),
  (5, '2026-09-01', '2026-09-07', 40, 0, 88000, 8800, 5104, 5456, 5563, 0, 0, 0, 63077);

#pragma once

#include <cstdint>
#include <string>

// ---------------------------------------------------------------------------
// Enums — map to CHECK-constrained TEXT columns in the schema
// ---------------------------------------------------------------------------

enum class EmployeePosition : std::uint8_t { admin, employee, hr };

enum class EmployeeStatus : std::uint8_t {
  active,
  terminated,
  quit,
  retired,
  deceased
};

enum class PayType : std::uint8_t { hourly_full, hourly_part, salary };

enum class BenefitType : std::uint8_t { health, dental, vision };

enum class BenefitTier : std::uint8_t { premium, waived, ineligible };

// ---------------------------------------------------------------------------
// Domain structs — plain data, no logic, 1:1 with table rows
// All monetary values in cents (INTEGER). All dates ISO 8601 TEXT.
// ---------------------------------------------------------------------------

struct Employee {
  int id = 0;
  std::string ssn;
  std::string password_hash;
  std::string first_name;
  std::string last_name;
  std::string date_of_birth; // YYYY-MM-DD
  std::string gender;
  std::string address;
  std::string city;
  std::string state;
  std::string zip;
  std::string email;
  std::string phone;
  EmployeePosition position = EmployeePosition::employee;
  EmployeeStatus status = EmployeeStatus::active;
  std::string hire_date;        // YYYY-MM-DD
  std::string termination_date; // YYYY-MM-DD; empty if active
};

struct Compensation {
  int id = 0;
  int employee_id = 0;
  PayType pay_type = PayType::hourly_full;
  int hourly_rate_cents = 0;   // 0 if salary
  int salary_weekly_cents = 0; // 0 if hourly
  std::string tax_state;       // "NY", "NJ", "CT"
  int retirement_401k_cents = 0;
};

struct Benefit {
  int id = 0;
  int employee_id = 0;
  BenefitType benefit_type = BenefitType::health;
  BenefitTier tier = BenefitTier::waived;
  int cost_per_period_cents = 0;
};

struct Paystub {
  int id = 0;
  int employee_id = 0;
  std::string period_start; // YYYY-MM-DD
  std::string period_end;   // YYYY-MM-DD
  int hours_regular = 0;
  int hours_overtime = 0;
  int gross_pay_cents = 0;
  int federal_tax_cents = 0;
  int state_tax_cents = 0;
  int fica_cents = 0;
  int health_deduction_cents = 0;
  int dental_deduction_cents = 0;
  int vision_deduction_cents = 0;
  int retirement_401k_cents = 0;
  int net_pay_cents = 0;
  std::string created_at;
};

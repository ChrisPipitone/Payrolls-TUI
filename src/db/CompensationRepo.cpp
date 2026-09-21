#include "payrolls/db/CompensationRepo.h"

CompensationRepo::CompensationRepo(SQLite::Database& db) : db_(db) {}

Compensation CompensationRepo::from_row(SQLite::Statement& q) {
  Compensation c;
  c.id = q.getColumn("id");
  c.employee_id = q.getColumn("employee_id");
  c.pay_type = pay_type_from_string(q.getColumn("pay_type").getText());
  c.hourly_rate_cents = q.getColumn("hourly_rate_cents").isNull()
                            ? 0
                            : q.getColumn("hourly_rate_cents").getInt();
  c.salary_weekly_cents = q.getColumn("salary_weekly_cents").isNull()
                               ? 0
                               : q.getColumn("salary_weekly_cents").getInt();
  c.tax_state = q.getColumn("tax_state").getText();
  c.retirement_401k_cents = q.getColumn("retirement_401k_cents");
  return c;
}

PayType CompensationRepo::pay_type_from_string(std::string_view s) {
  if (s == "hourly_part") return PayType::hourly_part;
  if (s == "salary") return PayType::salary;
  return PayType::hourly_full;
}

std::string CompensationRepo::pay_type_to_string(PayType t) {
  switch (t) {
    case PayType::hourly_part:
      return "hourly_part";
    case PayType::salary:
      return "salary";
    case PayType::hourly_full:
      return "hourly_full";
  }
  return "hourly_full";
}

std::optional<Compensation> CompensationRepo::get_by_employee(
    int employee_id) {
  SQLite::Statement query(db_,
                           "SELECT * FROM compensation WHERE employee_id = ?");
  query.bind(1, employee_id);

  if (query.executeStep()) {
    return from_row(query);
  }
  return std::nullopt;
}

void CompensationRepo::upsert(const Compensation& c) {
  SQLite::Statement statement(
      db_, "INSERT INTO compensation (employee_id, pay_type, "
           "hourly_rate_cents, salary_weekly_cents, tax_state, "
           "retirement_401k_cents) VALUES (?,?,?,?,?,?) "
           "ON CONFLICT(employee_id) DO UPDATE SET "
           "pay_type = excluded.pay_type, "
           "hourly_rate_cents = excluded.hourly_rate_cents, "
           "salary_weekly_cents = excluded.salary_weekly_cents, "
           "tax_state = excluded.tax_state, "
           "retirement_401k_cents = excluded.retirement_401k_cents");

  statement.bind(1, c.employee_id);
  statement.bind(2, pay_type_to_string(c.pay_type));
  if (c.pay_type == PayType::salary) {
    statement.bind(3); // hourly_rate_cents = NULL
    statement.bind(4, c.salary_weekly_cents);
  } else {
    statement.bind(3, c.hourly_rate_cents);
    statement.bind(4); // salary_weekly_cents = NULL
  }
  statement.bind(5, c.tax_state);
  statement.bind(6, c.retirement_401k_cents);

  statement.exec();
}

#include "payrolls/db/PaystubRepo.h"

PaystubRepo::PaystubRepo(SQLite::Database& db) : db_(db) {}

Paystub PaystubRepo::from_row(SQLite::Statement& q) {
  Paystub p;
  p.id = q.getColumn("id");
  p.employee_id = q.getColumn("employee_id");
  p.period_start = q.getColumn("period_start").getText();
  p.period_end = q.getColumn("period_end").getText();
  p.hours_regular = q.getColumn("hours_regular");
  p.hours_overtime = q.getColumn("hours_overtime");
  p.gross_pay_cents = q.getColumn("gross_pay_cents");
  p.federal_tax_cents = q.getColumn("federal_tax_cents");
  p.state_tax_cents = q.getColumn("state_tax_cents");
  p.fica_cents = q.getColumn("fica_cents");
  p.health_deduction_cents = q.getColumn("health_deduction_cents");
  p.dental_deduction_cents = q.getColumn("dental_deduction_cents");
  p.vision_deduction_cents = q.getColumn("vision_deduction_cents");
  p.retirement_401k_cents = q.getColumn("retirement_401k_cents");
  p.net_pay_cents = q.getColumn("net_pay_cents");
  p.created_at = q.getColumn("created_at").getText();
  return p;
}

std::vector<Paystub> PaystubRepo::get_by_employee(int employee_id) {
  SQLite::Statement query(
      db_,
      "SELECT * FROM paystubs WHERE employee_id = ? ORDER BY period_start DESC");
  query.bind(1, employee_id);

  std::vector<Paystub> stubs;
  while (query.executeStep()) {
    stubs.push_back(from_row(query));
  }
  return stubs;
}

std::optional<Paystub> PaystubRepo::get_latest(int employee_id) {
  SQLite::Statement query(db_,
                           "SELECT * FROM paystubs WHERE employee_id = ? "
                           "ORDER BY period_start DESC LIMIT 1");
  query.bind(1, employee_id);

  if (query.executeStep()) {
    return from_row(query);
  }
  return std::nullopt;
}

void PaystubRepo::insert(const Paystub& p) {
  SQLite::Statement statement(
      db_, "INSERT INTO paystubs (employee_id, period_start, period_end, "
           "hours_regular, hours_overtime, gross_pay_cents, "
           "federal_tax_cents, state_tax_cents, fica_cents, "
           "health_deduction_cents, dental_deduction_cents, "
           "vision_deduction_cents, retirement_401k_cents, net_pay_cents) "
           "VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?)");

  statement.bind(1, p.employee_id);
  statement.bind(2, p.period_start);
  statement.bind(3, p.period_end);
  statement.bind(4, p.hours_regular);
  statement.bind(5, p.hours_overtime);
  statement.bind(6, p.gross_pay_cents);
  statement.bind(7, p.federal_tax_cents);
  statement.bind(8, p.state_tax_cents);
  statement.bind(9, p.fica_cents);
  statement.bind(10, p.health_deduction_cents);
  statement.bind(11, p.dental_deduction_cents);
  statement.bind(12, p.vision_deduction_cents);
  statement.bind(13, p.retirement_401k_cents);
  statement.bind(14, p.net_pay_cents);

  statement.exec();
}

#include "payrolls/db/EmployeeRepo.h"
#include "payrolls/db/models.h"

#include <ctime>

std::string today_iso8601() {
  std::time_t t = std::time(nullptr);
  std::tm* tm = std::localtime(&t);
  char buf[11];
  std::strftime(buf, sizeof(buf), "%Y-%m-%d", tm);
  return buf;
}

EmployeeRepo::EmployeeRepo(SQLite::Database& db) : db_(db) {}

Employee EmployeeRepo::from_row(SQLite::Statement& q) {
  Employee e;
  e.id = q.getColumn("id");
  e.ssn = q.getColumn("ssn").getText();
  e.password_hash = q.getColumn("password_hash").getText();
  e.first_name = q.getColumn("first_name").getText();
  e.last_name = q.getColumn("last_name").getText();
  e.date_of_birth = q.getColumn("date_of_birth").getText();
  e.gender = q.getColumn("gender").getText();
  e.address = q.getColumn("address").getText();
  e.city = q.getColumn("city").getText();
  e.state = q.getColumn("state").getText();
  e.zip = q.getColumn("zip").getText();
  e.email = q.getColumn("email").getText();
  e.phone = q.getColumn("phone").getText();
  e.position = position_from_string(q.getColumn("position").getText());
  e.status = status_from_string(q.getColumn("status").getText());
  e.hire_date = q.getColumn("hire_date").getText();
  e.termination_date = q.getColumn("termination_date").getText();
  return e;
}

EmployeePosition EmployeeRepo::position_from_string(std::string_view s) {
  if (s == "admin") return EmployeePosition::admin;
  return EmployeePosition::employee;
}

EmployeeStatus EmployeeRepo::status_from_string(std::string_view s) {
  if (s == "terminated") return EmployeeStatus::terminated;
  if (s == "quit") return EmployeeStatus::quit;
  if (s == "retired") return EmployeeStatus::retired;
  if (s == "deceased") return EmployeeStatus::deceased;
  return EmployeeStatus::active;
}

std::string EmployeeRepo::position_to_string(EmployeePosition p) {
  return p == EmployeePosition::admin ? "admin" : "employee";
}

std::string EmployeeRepo::status_to_string(EmployeeStatus s) {
  switch (s) {
    case EmployeeStatus::terminated:
      return "terminated";
    case EmployeeStatus::quit:
      return "quit";
    case EmployeeStatus::retired:
      return "retired";
    case EmployeeStatus::deceased:
      return "deceased";
    case EmployeeStatus::active:
      return "active";
  }
  return "active";
}

std::vector<Employee> EmployeeRepo::get_all_active() {

  SQLite::Statement query(db_, "SELECT * FROM employees WHERE status = ?");
  query.bind(1, "active");

  std::vector<Employee> all_active;
  while (query.executeStep()) {
    all_active.push_back(from_row(query));
  }
  return all_active;
}

std::optional<Employee> EmployeeRepo::get_by_id(int id) {

  SQLite::Statement query(db_, "SELECT * FROM employees WHERE id = ?");
  query.bind(1, id);

  if (query.executeStep()) {
    return from_row(query);
  }
  return std::nullopt;
}

void EmployeeRepo::insert(const Employee& e) {
  SQLite::Statement statement(
      db_, "INSERT INTO employees "
           "(ssn, password_hash, first_name, last_name, date_of_birth, gender, "
           "address, city, state, zip, email, phone, position, status, "
           "hire_date, termination_date) "
           "VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");

  statement.bind(1, e.ssn);
  statement.bind(2, e.password_hash);
  statement.bind(3, e.first_name);
  statement.bind(4, e.last_name);
  statement.bind(5, e.date_of_birth);
  statement.bind(6, e.gender);
  statement.bind(7, e.address);
  statement.bind(8, e.city);
  statement.bind(9, e.state);
  statement.bind(10, e.zip);
  statement.bind(11, e.email);
  statement.bind(12, e.phone);
  statement.bind(13, position_to_string(e.position));
  statement.bind(14, status_to_string(e.status));
  statement.bind(15, e.hire_date);
  if (e.status == EmployeeStatus::active) {
    statement.bind(16);
  } else {
    statement.bind(16, e.termination_date);
  }

  statement.exec();
}

void EmployeeRepo::update(const Employee& e) {
  SQLite::Statement statement(
      db_, "UPDATE employees SET "
           "ssn = ?, password_hash = ?, first_name = ?, last_name = ?, "
           "date_of_birth = ?, gender = ?, address = ?, city = ?, state = ?, "
           "zip = ?, email = ?, phone = ?, position = ?, status = ?, "
           "hire_date = ?, termination_date = ? "
           "WHERE id = ?");

  statement.bind(1, e.ssn);
  statement.bind(2, e.password_hash);
  statement.bind(3, e.first_name);
  statement.bind(4, e.last_name);
  statement.bind(5, e.date_of_birth);
  statement.bind(6, e.gender);
  statement.bind(7, e.address);
  statement.bind(8, e.city);
  statement.bind(9, e.state);
  statement.bind(10, e.zip);
  statement.bind(11, e.email);
  statement.bind(12, e.phone);
  statement.bind(13, position_to_string(e.position));
  statement.bind(14, status_to_string(e.status));
  statement.bind(15, e.hire_date);
  if (e.status == EmployeeStatus::active) {
    statement.bind(16);
  } else {
    statement.bind(16, e.termination_date);
  }
  statement.bind(17, e.id);

  statement.exec();
}

void EmployeeRepo::set_status(int id, EmployeeStatus status) {
  SQLite::Statement statement(
      db_,
      "UPDATE employees SET status = ?, termination_date = ? WHERE id = ?");

  statement.bind(1, status_to_string(status));
  if (status == EmployeeStatus::active) {
    statement.bind(2);
  } else {
    statement.bind(2, today_iso8601());
  }
  statement.bind(3, id);

  statement.exec();
}

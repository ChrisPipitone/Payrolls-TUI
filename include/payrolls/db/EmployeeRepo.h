#pragma once

#include <optional>
#include <string_view>
#include <vector>

#include <SQLiteCpp/SQLiteCpp.h>

#include "payrolls/db/models.h"

class EmployeeRepo {
public:
  explicit EmployeeRepo(SQLite::Database& db);

  [[nodiscard]] std::vector<Employee> get_all_active();
  [[nodiscard]] std::optional<Employee> get_by_id(int id);

  void insert(const Employee& e);
  void update(const Employee& e);
  void set_status(int id, EmployeeStatus status);

private:
  SQLite::Database& db_;

  static Employee from_row(SQLite::Statement& q);
  static EmployeePosition position_from_string(std::string_view s);
  static EmployeeStatus status_from_string(std::string_view s);
  static std::string position_to_string(EmployeePosition p);
  static std::string status_to_string(EmployeeStatus s);
};

#pragma once

#include "payrolls/ui/Section.h"

struct MenuOption {
  std::string_view name;
  std::string_view desc;
};
class EmployeeInfoSection : public Section {
 public:
  EmployeeInfoSection(WINDOW* parent) : Section(parent) { title_ = "Information"; }
};

class EmployeePayrollSection : public Section {
 public:
  EmployeePayrollSection(WINDOW* parent) : Section(parent) { title_ = "Payroll"; }
};

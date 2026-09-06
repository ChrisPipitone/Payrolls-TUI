#pragma once

#include "payrolls/ui/Section.h"

class EmployeeInfoSection : public Section {
public:
  EmployeeInfoSection(WINDOW* parent) : Section(parent) {
    title_ = "Information";
  }
};

class EmployeePayrollSection : public Section {
public:
  EmployeePayrollSection(WINDOW* parent) : Section(parent) {
    title_ = "Payroll";
  }
};

#pragma once

#include <memory>

#include "payrolls/ui/ScrollList.h"
#include "payrolls/ui/Section.h"

class EmployeeInfoSection : public Section {
public:
  EmployeeInfoSection(WINDOW* parent);
  ~EmployeeInfoSection() override;
  EmployeeInfoSection(const EmployeeInfoSection&) = delete;
  EmployeeInfoSection& operator=(const EmployeeInfoSection&) = delete;
  EmployeeInfoSection(EmployeeInfoSection&&) = delete;
  EmployeeInfoSection& operator=(EmployeeInfoSection&&) = delete;

private:
  void draw_section() override;
  bool handle_key(int key) override;

  WINDOW* list_win_ = nullptr;
  std::unique_ptr<ScrollList> list_;
};

class EmployeePayrollSection : public Section {
public:
  EmployeePayrollSection(WINDOW* parent) : Section(parent) {
    title_ = "Payroll";
  }
};

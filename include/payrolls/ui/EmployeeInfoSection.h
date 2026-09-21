#pragma once

#include <memory>
#include <string>

#include "payrolls/db/models.h"
#include "payrolls/ui/ScrollList.h"
#include "payrolls/ui/Section.h"

class EmployeeInfoSection : public Section {
public:
  EmployeeInfoSection(WINDOW* parent, const Employee& employee);
  ~EmployeeInfoSection() override = default;
  EmployeeInfoSection(const EmployeeInfoSection&) = delete;
  EmployeeInfoSection& operator=(const EmployeeInfoSection&) = delete;
  EmployeeInfoSection(EmployeeInfoSection&&) = delete;
  EmployeeInfoSection& operator=(EmployeeInfoSection&&) = delete;

private:
  void draw_section() override;
  bool handle_key(int key) override;

  static std::string position_to_display(EmployeePosition p);
  static std::string status_to_display(EmployeeStatus s);

  Employee employee_;
  std::unique_ptr<ScrollList> list_;
};

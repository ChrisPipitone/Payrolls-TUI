#pragma once

#include <memory>
#include <optional>
#include <string>

#include "payrolls/db/models.h"
#include "payrolls/ui/ScrollList.h"
#include "payrolls/ui/Section.h"

class EmployeePayrollSection : public Section {
public:
  EmployeePayrollSection(WINDOW* parent, const Compensation& compensation,
                          const std::optional<Paystub>& latest_paystub);
  ~EmployeePayrollSection() override = default;
  EmployeePayrollSection(const EmployeePayrollSection&) = delete;
  EmployeePayrollSection& operator=(const EmployeePayrollSection&) = delete;
  EmployeePayrollSection(EmployeePayrollSection&&) = delete;
  EmployeePayrollSection& operator=(EmployeePayrollSection&&) = delete;

private:
  void draw_section() override;
  bool handle_key(int key) override;

  static std::string pay_type_to_display(PayType t);
  static std::string format_cents(int cents);

  Compensation compensation_;
  std::optional<Paystub> latest_paystub_;
  std::unique_ptr<ScrollList> list_;
};

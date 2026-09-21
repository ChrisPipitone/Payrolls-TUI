#include "payrolls/ui/EmployeePayrollSection.h"

#include <cstdio>

EmployeePayrollSection::EmployeePayrollSection(
    WINDOW* parent, const Compensation& compensation,
    const std::optional<Paystub>& latest_paystub)
    : Section(parent), compensation_(compensation),
      latest_paystub_(latest_paystub) {
  title_ = "Payroll";
}

std::string EmployeePayrollSection::pay_type_to_display(PayType t) {
  switch (t) {
    case PayType::hourly_full:
      return "Hourly (Full-Time)";
    case PayType::hourly_part:
      return "Hourly (Part-Time)";
    case PayType::salary:
      return "Salary";
  }
  return "Salary";
}

std::string EmployeePayrollSection::format_cents(int cents) {
  char buf[16];
  std::snprintf(buf, sizeof(buf), "$%.2f", cents / 100.0);
  return buf;
}

void EmployeePayrollSection::draw_section() {
  constexpr int kContentTop = 3;
  constexpr int kBottomMargin = 1;
  constexpr int kSideMargin = 1;
  if (!list_) {
    const int h = getmaxy(section_win_) - kContentTop - kBottomMargin;
    const int w = getmaxx(section_win_) - 2 * kSideMargin;
    list_ = std::make_unique<ScrollList>(section_win_, h, w, kContentTop,
                                          kSideMargin);

    std::vector<std::string> rows = {
        "Pay Type: " + pay_type_to_display(compensation_.pay_type),
        compensation_.pay_type == PayType::salary
            ? "Weekly Rate: " + format_cents(compensation_.salary_weekly_cents)
            : "Hourly Rate: " + format_cents(compensation_.hourly_rate_cents),
        "Tax State: " + compensation_.tax_state,
        "401k: " + format_cents(compensation_.retirement_401k_cents),
    };

    if (latest_paystub_) {
      rows.emplace_back("Last Period: " + latest_paystub_->period_start +
                         " - " + latest_paystub_->period_end);
      rows.emplace_back("Net Pay: " +
                         format_cents(latest_paystub_->net_pay_cents));
    } else {
      rows.emplace_back("No paystubs yet");
    }

    list_->set_items(std::move(rows));
  }

  list_->render();
}

bool EmployeePayrollSection::handle_key(int key) {
  if (!list_) return false;
  return list_->handle_key(key);
}

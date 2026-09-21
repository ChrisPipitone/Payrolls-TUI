#include "payrolls/ui/EmployeeBenefitSection.h"

#include <cstdio>

EmployeeBenefitsSection::EmployeeBenefitsSection(
    WINDOW* parent, const std::vector<Benefit>& benefits)
    : Section(parent), benefits_(benefits) {
  title_ = "Benefits";
}

EmployeeBenefitsSection::~EmployeeBenefitsSection() {
  list_.reset();
  if (list_win_) delwin(list_win_);
}

std::string EmployeeBenefitsSection::benefit_type_to_display(BenefitType t) {
  switch (t) {
    case BenefitType::dental:
      return "Dental";
    case BenefitType::vision:
      return "Vision";
    case BenefitType::health:
      return "Health";
  }
  return "Health";
}

std::string EmployeeBenefitsSection::benefit_tier_to_display(BenefitTier t) {
  switch (t) {
    case BenefitTier::waived:
      return "Waived";
    case BenefitTier::ineligible:
      return "Ineligible";
    case BenefitTier::premium:
      return "Premium";
  }
  return "Waived";
}

std::string EmployeeBenefitsSection::format_cents(int cents) {
  char buf[16];
  std::snprintf(buf, sizeof(buf), "$%.2f", cents / 100.0);
  return buf;
}

void EmployeeBenefitsSection::draw_section() {
  constexpr int kContentTop = 3;
  constexpr int kBottomMargin = 1;
  constexpr int kSideMargin = 1;
  if (!list_) {
    const int h = getmaxy(section_win_) - kContentTop - kBottomMargin;
    const int w = getmaxx(section_win_) - 2 * kSideMargin;
    list_win_ = derwin(section_win_, h, w, kContentTop, kSideMargin);
    list_ = std::make_unique<ScrollList>(list_win_);

    std::vector<std::string> rows;
    rows.reserve(benefits_.size());
    for (const auto& b : benefits_) {
      rows.push_back(benefit_type_to_display(b.benefit_type) + ": " +
                      benefit_tier_to_display(b.tier) + " (" +
                      format_cents(b.cost_per_period_cents) + ")");
    }
    list_->set_items(std::move(rows));
  }

  list_->render();
}

bool EmployeeBenefitsSection::handle_key(int key) {
  if (!list_) return false;
  return list_->handle_key(key);
}

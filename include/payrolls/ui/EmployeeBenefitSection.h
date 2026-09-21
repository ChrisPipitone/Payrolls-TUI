#pragma once

#include <memory>
#include <string>
#include <vector>

#include "payrolls/db/models.h"
#include "payrolls/ui/ScrollList.h"
#include "payrolls/ui/Section.h"

class EmployeeBenefitsSection : public Section {
public:
  EmployeeBenefitsSection(WINDOW* parent, const std::vector<Benefit>& benefits);
  ~EmployeeBenefitsSection() override;
  EmployeeBenefitsSection(const EmployeeBenefitsSection&) = delete;
  EmployeeBenefitsSection& operator=(const EmployeeBenefitsSection&) = delete;
  EmployeeBenefitsSection(EmployeeBenefitsSection&&) = delete;
  EmployeeBenefitsSection& operator=(EmployeeBenefitsSection&&) = delete;

private:
  void draw_section() override;
  bool handle_key(int key) override;

  static std::string benefit_type_to_display(BenefitType t);
  static std::string benefit_tier_to_display(BenefitTier t);
  static std::string format_cents(int cents);

  std::vector<Benefit> benefits_;
  WINDOW* list_win_ = nullptr;
  std::unique_ptr<ScrollList> list_;
};

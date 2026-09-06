#pragma once
#include <menu.h>

#include <array>
#include <string_view>
#include <vector>

#include "payrolls/ui/Section.h"

class EmployeeBenefitsSection : public Section {
 public:
  EmployeeBenefitsSection(WINDOW* parent);
  ~EmployeeBenefitsSection();
  EmployeeBenefitsSection(const EmployeeBenefitsSection&) = delete;
  EmployeeBenefitsSection& operator=(const EmployeeBenefitsSection&) = delete;

 private:
  MENU* menu_ = nullptr;
  WINDOW* menu_sub_win_ = nullptr;
  std::vector<ITEM*> menu_items_;
  static constexpr std::array<std::string_view, 2> kOptions = {"Request HR", "Request Admin"};
  void setup_menu();
  void draw_section() override;
  bool handle_key(int key) override;
};

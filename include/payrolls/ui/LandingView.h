#pragma once

#include <array>

#include "payrolls/db/Database.h"
#include "payrolls/ui/View.h"

#include <menu.h>

struct LandingOption {
  std::string_view name;
  std::string_view desc;
};

class LandingView : public View {
public:
  explicit LandingView(Database& db);
  ~LandingView() override;
  LandingView(const LandingView&) = delete;
  LandingView& operator=(const LandingView&) = delete;
  LandingView(LandingView&&) = delete;
  LandingView& operator=(LandingView&&) = delete;

private:
  Database& db_;
  MENU* main_menu_ = nullptr;
  WINDOW* menu_sub_win_ = nullptr;
  std::vector<ITEM*> menu_items_;
  [[nodiscard]] const std::vector<KeyHint>& hints() const override;
  void draw_view() override;
  void handle_key(int key) override;
  static constexpr std::array<LandingOption, 4> kOptions = {{
      {"Employee", "- Basic Employee View"},
      {"HR", "- HR View"},
      {"Manager", "- Manager View"},
      {"Exit", ""},
  }};
};

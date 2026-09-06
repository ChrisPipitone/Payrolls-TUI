#pragma once
#include <menu.h>

#include <array>

#include "payrolls/ui/View.h"

struct MainMenuOption {
  std::string_view name;
  std::string_view desc;
};

class MainMenuView : public View {
public:
  MainMenuView();
  ~MainMenuView() override;

private:
  MENU* main_menu_ = nullptr;
  WINDOW* menu_sub_win_ = nullptr;
  std::vector<ITEM*> menu_items_;
  const std::vector<KeyHint>& hints() const override;
  void draw_view() override;
  void handle_key(int key) override;
  static constexpr std::array<MainMenuOption, 4> kOptions = {{
      {"Employee", "- Basic Employee View"},
      {"HR", "- HR View"},
      {"Manager", "- Manager View"},
      {"Exit", ""},
  }};
};

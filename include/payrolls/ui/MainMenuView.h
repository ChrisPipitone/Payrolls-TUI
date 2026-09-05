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
  ~MainMenuView();

  void draw_view() override;
  void handle_key(int key) override;

 private:
  MENU* main_menu = nullptr;
  WINDOW* menu_sub_win = nullptr;
  const std::vector<KeyHint>& hints() const override;
  std::vector<ITEM*> menu_items;
  static constexpr std::array<MainMenuOption, 4> kOptions = {{
      {"Employee", "- Basic Employee View"},
      {"HR", "- HR View"},
      {"Manager", "- Manager View"},
      {"Exit", ""},
  }};
};

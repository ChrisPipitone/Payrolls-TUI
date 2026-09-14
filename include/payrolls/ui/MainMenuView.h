#pragma once

#include <array>

#include "payrolls/db/Database.h"
#include "payrolls/ui/View.h"

#include <menu.h>

struct MainMenuOption {
  std::string_view name;
  std::string_view desc;
};

class MainMenuView : public View {
public:
  explicit MainMenuView(Database& db);
  ~MainMenuView() override;
  MainMenuView(const MainMenuView&) = delete;
  MainMenuView& operator=(const MainMenuView&) = delete;
  MainMenuView(MainMenuView&&) = delete;
  MainMenuView& operator=(MainMenuView&&) = delete;

private:
  Database& db_;
  MENU* main_menu_ = nullptr;
  WINDOW* menu_sub_win_ = nullptr;
  std::vector<ITEM*> menu_items_;
  [[nodiscard]] const std::vector<KeyHint>& hints() const override;
  void draw_view() override;
  void handle_key(int key) override;
  static constexpr std::array<MainMenuOption, 4> kOptions = {{
      {"Employee", "- Basic Employee View"},
      {"HR", "- HR View"},
      {"Manager", "- Manager View"},
      {"Exit", ""},
  }};
};

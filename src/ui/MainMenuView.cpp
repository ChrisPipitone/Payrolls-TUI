
#include "payrolls/ui/MainMenuView.h"

#include <menu.h>

#include "payrolls/ui/App.h"
#include "payrolls/ui/EmployeeView.h"
#include "payrolls/ui/utils.h"

MainMenuView::MainMenuView() : menu_items_(kOptions.size() + 1, nullptr) {
  title_ = "Main Menu";

  for (size_t i = 0; i < kOptions.size(); i++) {
    menu_items_[i] = new_item(kOptions[i].name.data(), kOptions[i].desc.data());
  }
  main_menu_ = new_menu(menu_items_.data());

  set_menu_win(main_menu_, view_win_);
  set_menu_mark(main_menu_, " * ");

  int menu_h = 0, menu_w = 0;
  scale_menu(main_menu_, &menu_h, &menu_w);

  int win_h = getmaxy(view_win_);
  int win_w = getmaxx(view_win_);
  const int kContentTop = 3;
  const int kContentH = (win_h - 4) - kContentTop;
  int start_y = kContentTop + (kContentH - menu_h) / 2;
  int start_x = (win_w - menu_w) / 2;
  menu_sub_win_ = derwin(view_win_, menu_h, menu_w, start_y, start_x);
  set_menu_sub(main_menu_, menu_sub_win_);

  post_menu(main_menu_);
}

MainMenuView::~MainMenuView() {
  unpost_menu(main_menu_);
  free_menu(main_menu_);
  delwin(menu_sub_win_);
  for (auto* item : menu_items_)
    if (item) free_item(item);
}

const std::vector<KeyHint>& MainMenuView::hints() const {
  static const std::vector<KeyHint> kHints = {{"q", "Exit"}};
  return kHints;
}

void MainMenuView::draw_view() { wnoutrefresh(menu_sub_win_); }

void MainMenuView::handle_key(int key) {
  handle_menu_nav(main_menu_, key);

  if (key == '\n' || key == KEY_ENTER) {
    int idx = item_index(current_item(main_menu_));
    if (idx == 0) App::Get().navigate_to<EmployeeView>();
    if (idx == 3) App::Get().stop();
  }
}

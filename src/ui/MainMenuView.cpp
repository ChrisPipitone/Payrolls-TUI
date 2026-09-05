
#include "payrolls/ui/MainMenuView.h"

#include <menu.h>

#include "payrolls/ui/App.h"
#include "payrolls/ui/EmployeeView.h"
#include "payrolls/ui/utils.h"

MainMenuView::MainMenuView() : menu_items(kOptions.size() + 1, nullptr) {
  title = "Main Menu";

  // Fill main_menu with ITEM* with name and desc of kOptions
  for (size_t i = 0; i < kOptions.size(); i++) {
    menu_items[i] = new_item(kOptions[i].name.data(), kOptions[i].desc.data());
  }
  main_menu = new_menu(menu_items.data());

  // Set menu to main window and sub window
  set_menu_win(main_menu, view_win);

  // Mark must be set before scale_menu so width includes mark chars
  set_menu_mark(main_menu, " * ");

  // Center Menu in Window
  int menu_h, menu_w;
  scale_menu(main_menu, &menu_h, &menu_w);

  int win_h = getmaxy(view_win);
  int win_w = getmaxx(view_win);
  const int content_top = 3;
  const int content_h = (win_h - 4) - content_top;
  int start_y = content_top + (content_h - menu_h) / 2;
  int start_x = (win_w - menu_w) / 2;
  menu_sub_win = derwin(view_win, menu_h, menu_w, start_y, start_x);
  set_menu_sub(main_menu, menu_sub_win);

  post_menu(main_menu);
}

MainMenuView::~MainMenuView() {
  unpost_menu(main_menu);
  free_menu(main_menu);
  delwin(menu_sub_win);
  for (auto* item : menu_items)
    if (item) free_item(item);
  // window is destoried by parent dtor
}

const std::vector<KeyHint>& MainMenuView::hints() const {
  static const std::vector<KeyHint> h = {{"q", "Exit"}};
  return h;
}

void MainMenuView::draw_view() { wnoutrefresh(menu_sub_win); }

void MainMenuView::handle_key(int key) {
  handle_menu_nav(main_menu, key);

  if (key == '\n' || key == KEY_ENTER) {
    int idx = item_index(current_item(main_menu));
    if (idx == 0) App::Get().navigate_to<EmployeeView>();
    if (idx == 3) App::Get().stop();
  }
}


#include "payrolls/ui/EmployeeBenefitSection.h"

#include "payrolls/ui/utils.h"

EmployeeBenefitsSection::EmployeeBenefitsSection(WINDOW* parent) : Section(parent) {
  title = "Benefits";
  menu_items.resize(kOptions.size() + 1, nullptr);
}

void EmployeeBenefitsSection::setup_menu() {
  // Fill menu with ITEM* with name and desc of kOptions
  for (size_t i = 0; i < kOptions.size(); i++) {
    menu_items[i] = new_item(kOptions[i].data(), "");
  }
  menu = new_menu(menu_items.data());

  // Set menu to main window and sub window
  set_menu_win(menu, section_win);

  // Mark must be set before scale_menu so width includes mark chars
  set_menu_mark(menu, " * ");

  // Center Menu in Window
  int menu_h, menu_w;
  scale_menu(menu, &menu_h, &menu_w);

  int win_h = getmaxy(section_win);
  int win_w = getmaxx(section_win);
  const int content_top = 3;
  const int content_h = (win_h - 4) - content_top;
  int start_y = content_top + (content_h - menu_h) / 2;
  int start_x = (win_w - menu_w) / 2;
  menu_sub_win = derwin(section_win, menu_h, menu_w, start_y, start_x);
  set_menu_sub(menu, menu_sub_win);

  post_menu(menu);
}

EmployeeBenefitsSection::~EmployeeBenefitsSection() {
  if (menu) {
    unpost_menu(menu);
    free_menu(menu);
  }

  if (menu_sub_win) delwin(menu_sub_win);

  for (auto* item : menu_items)
    if (item) free_item(item);
  // window is destoried by parent dtor
}

void EmployeeBenefitsSection::draw_section() {
  if (!menu) {
    setup_menu();
  }
};

bool EmployeeBenefitsSection::handle_key(int key) {
  if (!menu) {
    return false;
  }

  // menu selection moved
  if (handle_menu_nav(menu, key)) return true;

  if (key == '\n' || key == KEY_ENTER) {
    int idx = item_index(current_item(menu));
    // we will do something with menu selection
    return true;
  }
  return false;
}

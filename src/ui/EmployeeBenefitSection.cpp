
#include "payrolls/ui/EmployeeBenefitSection.h"

#include "payrolls/ui/utils.h"

EmployeeBenefitsSection::EmployeeBenefitsSection(WINDOW* parent)
    : Section(parent) {
  title_ = "Benefits";
  menu_items_.resize(kOptions.size() + 1, nullptr);
}

void EmployeeBenefitsSection::setup_menu() {
  for (size_t i = 0; i < kOptions.size(); i++) {
    menu_items_[i] = new_item(kOptions[i].data(), "");
  }
  menu_ = new_menu(menu_items_.data());

  set_menu_win(menu_, section_win_);
  set_menu_mark(menu_, " * ");

  int menu_h = 0, menu_w = 0;
  scale_menu(menu_, &menu_h, &menu_w);

  int win_h = getmaxy(section_win_);
  int win_w = getmaxx(section_win_);
  const int kContentTop = 3;
  const int kContentH = (win_h - 4) - kContentTop;
  int start_y = kContentTop + (kContentH - menu_h) / 2;
  int start_x = (win_w - menu_w) / 2;
  menu_sub_win_ = derwin(section_win_, menu_h, menu_w, start_y, start_x);
  set_menu_sub(menu_, menu_sub_win_);

  post_menu(menu_);
}

EmployeeBenefitsSection::~EmployeeBenefitsSection() {
  if (menu_) {
    unpost_menu(menu_);
    free_menu(menu_);
  }

  if (menu_sub_win_) delwin(menu_sub_win_);

  for (auto* item : menu_items_)
    if (item) free_item(item);
}

void EmployeeBenefitsSection::draw_section() {
  if (!menu_) {
    setup_menu();
  }
}

bool EmployeeBenefitsSection::handle_key(int key) {
  if (!menu_) {
    return false;
  }

  if (handle_menu_nav(menu_, key)) return true;

  if (key == '\n' || key == KEY_ENTER) {
    // int idx = item_index(current_item(menu_));
    //  we will do something with menu selection
    return true;
  }
  return false;
}

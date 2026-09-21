#include "payrolls/ui/ScrollList.h"

#include "payrolls/ui/utils.h"

ScrollList::ScrollList(WINDOW* parent, int h, int w, int y, int x)
    : win_(derwin(parent, h, w, y, x)) {}

ScrollList::~ScrollList() {
  if (menu_) {
    unpost_menu(menu_);
    free_menu(menu_);
  }

  for (auto* item : menu_items_)
    if (item) free_item(item);

  if (win_) delwin(win_);
}

void ScrollList::set_items(std::vector<std::string> lines) {
  items_ = std::move(lines);
}

void ScrollList::render() {
  if (items_.empty()) return;
  if (!menu_) setup_menu();
}

bool ScrollList::handle_key(int key) {
  if (!menu_) return false;
  if (handle_menu_nav(menu_, key)) return true;
  return false;
}

void ScrollList::setup_menu() {
  if (items_.empty()) return;

  menu_items_.resize(items_.size() + 1, nullptr);
  for (size_t i = 0; i < items_.size(); i++) {
    menu_items_[i] = new_item(items_[i].data(), "");
  }

  menu_ = new_menu(menu_items_.data());

  set_menu_win(menu_, win_);
  set_menu_sub(menu_, win_);
  set_menu_mark(menu_, " * ");

  post_menu(menu_);
}

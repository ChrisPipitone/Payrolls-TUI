#pragma once

#include <menu.h>

#include <string>
#include <vector>

class ScrollList {
public:
  explicit ScrollList(WINDOW* win);
  ~ScrollList();
  ScrollList(const ScrollList&) = delete;
  ScrollList& operator=(const ScrollList&) = delete;
  ScrollList(ScrollList&&) = delete;
  ScrollList& operator=(ScrollList&&) = delete;

  void set_items(std::vector<std::string> lines);
  void render();
  bool handle_key(int key);

private:
  void setup_menu();

  WINDOW* win_;
  MENU* menu_ = nullptr;
  std::vector<ITEM*> menu_items_;
  std::vector<std::string> items_;
};

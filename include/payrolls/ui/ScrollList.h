#pragma once

#include <menu.h>

#include <string>
#include <vector>

class ScrollList {
public:
  ScrollList(WINDOW* parent, int h, int w, int y, int x);
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

  WINDOW* win_ = nullptr;
  MENU* menu_ = nullptr;
  std::vector<ITEM*> menu_items_;
  std::vector<std::string> items_;
};

#pragma once
#include <ncurses.h>

#include <string_view>

#include "payrolls/ui/Events.h"
#include "payrolls/ui/Rect.h"

class Section {
 public:
  Section(WINDOW* parent);
  virtual ~Section();
  Section(const Section&) = delete;
  Section& operator=(const Section&) = delete;

  void on_render();
  void on_event(KeyEvent& e);
  virtual void on_update() {};
  virtual void draw_section() {};
  virtual bool handle_key(int) { return false; };

  Rect& get_rect();
  void set_focused(bool b);
  void set_rect(const Rect& r);

 protected:
  void draw_border();
  Rect rect_ = {0, 0, 0, 0};
  WINDOW* parent_ = nullptr;
  WINDOW* section_win = nullptr;
  bool focused_ = false;
  std::string_view title = "";
};

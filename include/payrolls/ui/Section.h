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

  const Rect& get_rect() const;
  void set_focused(bool b);
  void set_rect(const Rect& r);

 protected:
  WINDOW* section_win_ = nullptr;
  std::string_view title_ = "";
  void draw_border();
  virtual void on_update() {};
  virtual void draw_section() {};
  virtual bool handle_key(int) { return false; };

 private:
  WINDOW* parent_ = nullptr;
  bool focused_ = false;
  Rect rect_ = {0, 0, 0, 0};
};

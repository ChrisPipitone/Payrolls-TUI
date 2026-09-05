#pragma once
#include <panel.h>

#include <string_view>
#include <vector>

#include "payrolls/ui/Events.h"
#include "payrolls/ui/Layout.h"

struct KeyHint {
  std::string_view key;
  std::string_view action;
};

class View {
  friend class App;

 public:
  View();
  virtual ~View();
  View(const View&) = delete;             // no copy constructor
  View& operator=(const View&) = delete;  // no copy assign
  View(View&&) = delete;                  // no move constructor
  View& operator=(View&&) = delete;       // no move assignment

  void on_render();
  void on_event(KeyEvent& e);
  void draw_hints();
  virtual void on_update() {};
  virtual void draw_view() {};
  virtual void handle_key(int) {};

 protected:
  WINDOW* view_win;
  LayoutNode root_node;
  virtual const std::vector<KeyHint>& hints() const = 0;
  Section* focused_ = nullptr;
  bool change_focused_section(Dir direction);
  Rect content_rect() const;
  std::string_view title = "";

 private:
  PANEL* panel = nullptr;
  WINDOW* hint_der_win;
};

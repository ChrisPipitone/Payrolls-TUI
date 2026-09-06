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
  View(const View&) = delete;
  View& operator=(const View&) = delete;
  View(View&&) = delete;
  View& operator=(View&&) = delete;

  void on_render();
  void on_event(KeyEvent& e);
  void draw_hints();

protected:
  WINDOW* view_win_;
  LayoutNode root_node_;
  Section* focused_ = nullptr;
  std::string_view title_ = "";
  virtual const std::vector<KeyHint>& hints() const = 0;

  bool change_focused_section(Dir direction);
  Rect content_rect() const;
  virtual void on_update() {};
  virtual void draw_view() {};
  virtual void handle_key(int) {};

private:
  PANEL* panel_ = nullptr;
  WINDOW* hint_der_win_;
};

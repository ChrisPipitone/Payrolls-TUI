#pragma once

#include <memory>
#include <vector>

#include "payrolls/db/Database.h"
#include "payrolls/ui/Events.h"
#include "payrolls/ui/View.h"
#include "payrolls/ui/utils.h"

class App {
public:
  static App& Get();
  App(const App&) = delete;
  App& operator=(const App&) = delete;
  App(App&&) = delete;
  App& operator=(App&&) = delete;

  void run();
  void stop();
  void init(Database& db);
  void raise_event(KeyEvent& e);

  template <typename TView> void navigate_to() {
    static_assert(std::is_base_of_v<View, TView>,
                  "TView must derive from View");

    if (!view_stack_.empty()) {
      hide_panel(view_stack_.back()->panel_);
      view_stack_.pop_back();
    }

    auto view = std::make_unique<TView>();
    show_panel(view->panel_);
    view_stack_.push_back(std::move(view));
  }

private:
  App();
  ~App() = default;
  NcursesGuard ncurses_guard_;
  Database* db_ = nullptr;
  bool is_running_ = false;
  std::vector<std::unique_ptr<View>> view_stack_;
};

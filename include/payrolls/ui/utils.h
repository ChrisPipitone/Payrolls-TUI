#pragma once
#include <menu.h>

#include <string_view>

struct NcursesGuard {
  NcursesGuard() { initscr(); }
  ~NcursesGuard() { endwin(); }
  NcursesGuard(const NcursesGuard&) = delete;
  NcursesGuard& operator=(const NcursesGuard&) = delete;
  NcursesGuard(NcursesGuard&&) = delete;
  NcursesGuard& operator=(NcursesGuard&&) = delete;
};

inline bool handle_menu_nav(MENU* menu, int c) {
  if (c == KEY_DOWN || c == 'j')
    menu_driver(menu, REQ_DOWN_ITEM);
  else if (c == KEY_UP || c == 'k')
    menu_driver(menu, REQ_UP_ITEM);
  else if (c == KEY_LEFT || c == 'h')
    menu_driver(menu, REQ_LEFT_ITEM);
  else if (c == KEY_RIGHT || c == 'l')
    menu_driver(menu, REQ_RIGHT_ITEM);
  else
    return false;

  return true;
}
inline void print_in_middle(WINDOW* win, int starty, int startx, int width,
                            std::string_view str, chtype color) {
  int x = 0, y = 0;

  if (win == nullptr) win = stdscr;
  getyx(win, y, x);
  if (startx != 0) x = startx;
  if (starty != 0) y = starty;
  if (width == 0) width = 80;

  int length = static_cast<int>(str.length());
  x = startx + (width - length) / 2;
  wattron(win, color);
  mvwprintw(win, y, x, "%.*s", static_cast<int>(str.size()), str.data());
  wattroff(win, color);
}

inline WINDOW* centered_win(int h, int w) {
  int rows = 0, cols = 0;
  getmaxyx(stdscr, rows, cols);
  return newwin(h, w, (rows - h) / 2, (cols - w) / 2);
}

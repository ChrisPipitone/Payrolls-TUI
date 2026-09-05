#include "payrolls/ui/Section.h"

#include "payrolls/ui/utils.h"

Section::Section(WINDOW* parent) : parent_(parent) {}
Section::~Section() {
  if (section_win) delwin(section_win);
}

void Section::on_render() {
  if (!section_win) return;

  int w = getmaxx(section_win);
  print_in_middle(section_win, 1, 0, w, title.data(), COLOR_PAIR(1));

  draw_border();
  draw_section();
}

void Section::on_event(KeyEvent& e) {
  // maybe do something
  if (handle_key(e.key)) e.accept();
}

void Section::set_rect(const Rect& r) {
  if (section_win) delwin(section_win);
  section_win = derwin(parent_, r.h, r.w, r.y, r.x);
  rect_ = r;
}

void Section::set_focused(bool b) { focused_ = b; }

Rect& Section::get_rect() { return rect_; }

void Section::draw_border() {
  if (!section_win) return;
  if (!focused_) {
    box(section_win, 0, 0);
    return;
  }
  wattron(section_win, COLOR_PAIR(2) | A_BOLD);
  box(section_win, 0, 0);
  wattroff(section_win, COLOR_PAIR(2) | A_BOLD);
}

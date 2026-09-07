#include "payrolls/ui/Section.h"

#include "payrolls/ui/utils.h"

Section::Section(WINDOW* parent) : parent_(parent) {}
Section::~Section() {
  if (section_win_) delwin(section_win_);
}

void Section::on_render() {
  if (!section_win_) return;

  const int w = getmaxx(section_win_);
  print_in_middle(section_win_, 1, 0, w, title_, COLOR_PAIR(1));

  draw_border();
  draw_section();
}

void Section::on_event(KeyEvent& e) {
  if (handle_key(e.key)) e.accept();
}

void Section::set_rect(const Rect& r) {
  if (section_win_) delwin(section_win_);
  section_win_ = derwin(parent_, r.h, r.w, r.y, r.x);
  rect_ = r;
}

void Section::set_focused(bool b) { focused_ = b; }

const Rect& Section::get_rect() const { return rect_; }

void Section::draw_border() {
  if (!section_win_) return;
  if (!focused_) {
    box(section_win_, 0, 0);
    return;
  }
  wattron(section_win_, COLOR_PAIR(2) | A_BOLD);
  box(section_win_, 0, 0);
  wattroff(section_win_, COLOR_PAIR(2) | A_BOLD);
}

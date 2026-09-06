#include "payrolls/ui/View.h"

#include <climits>
#include <cstdlib>

#include "payrolls/ui/App.h"
#include "payrolls/ui/Layout.h"
#include "payrolls/ui/utils.h"

View::View()
    : view_win_(newwin(LINES, COLS, 0, 0)), panel_(new_panel(view_win_)),
      hint_der_win_(derwin(view_win_, 3, COLS - 2, LINES - 4, 1)) {
  hide_panel(panel_);
  keypad(view_win_, TRUE);
}

View::~View() {
  delwin(hint_der_win_);
  del_panel(panel_);
  delwin(view_win_);
}

void View::draw_hints() {
  werase(hint_der_win_);
  box(hint_der_win_, 0, 0);
  int x = 1;
  for (const auto& hint : hints()) {
    mvwprintw(hint_der_win_, 1, x, "[%.*s] %.*s",
              static_cast<int>(hint.key.size()), hint.key.data(),
              static_cast<int>(hint.action.size()), hint.action.data());
    x += 4 + static_cast<int>(hint.key.size()) +
         static_cast<int>(hint.action.size());
  }
  wnoutrefresh(hint_der_win_);
}

void View::on_render() {
  box(view_win_, 0, 0);
  int w = getmaxx(view_win_);
  print_in_middle(view_win_, 1, 0, w, title_, COLOR_PAIR(1));
  mvwaddch(view_win_, 2, 0, ACS_LTEE);
  mvwhline(view_win_, 2, 1, ACS_HLINE, w - 2);
  mvwaddch(view_win_, 2, w - 1, ACS_RTEE);

  if (!root_node_.children.empty()) {
    for_each_section(root_node_, [](Section& s) { s.on_render(); });
  }

  draw_view();

  draw_hints();
  wnoutrefresh(view_win_);
}

void View::on_event(KeyEvent& e) {
  if (e.key == 'q') {
    e.accept();
    App::Get().stop();
  }

  if (!root_node_.children.empty()) {
    switch (e.key) {
      case 'H':
        change_focused_section(Dir::Left);
        return;
      case 'J':
        change_focused_section(Dir::Down);
        return;
      case 'K':
        change_focused_section(Dir::Up);
        return;
      case 'L':
        change_focused_section(Dir::Right);
        return;
      default:
        break;
    }
    if (focused_) focused_->on_event(e);
  }

  if (!e.consumed) {
    handle_key(e.key);
    e.accept();
  }
  // TODO:  error handling?
}

bool View::change_focused_section(Dir direction) {
  // Focus is chosen by comparing Section rects geometrically.
  // Precondition: rects do not overlap. Holds by construction — assign_rects
  // partitions.

  if (!focused_) return false;

  const bool kHorizontal =
      (direction == Dir::Left) || (direction == Dir::Right);
  // ncurses grows x rightward and y downward, so Right/Down are the positive
  // directions
  const bool kIsForward = (direction == Dir::Right || direction == Dir::Down);

  const Rect& focused_rect = focused_->get_rect();
  Section* best_section = nullptr;
  // Worse than any real score, so the first surviving candidate wins
  std::pair best_score(INT_MAX, INT_MAX);

  // Applied to every leaf in the layout tree
  auto visit = [&](Section& s) {
    if (&s == focused_) return;

    const Rect& candidate_rect = s.get_rect();
    // A zero-area rect is invisible but would still take focus and swallow
    // every key
    if (candidate_rect.h <= 0 || candidate_rect.w <= 0) return;

    // How far the candidate's center sits off mine, perpendicular to travel.
    // Breaks gap ties: among equally near rects, the straightest ahead wins.
    // Held at 2x (2*start + extent) — y + h/2 truncates the half-row and ties
    // falsely.
    int rect_center_deviation = 0;

    // Space between my leading wall and the candidate's trailing wall
    int gap = 0;

    if (kHorizontal) {
      // Reject rects the beam misses — no shared rows means it is diagonal, not
      // beside me
      if (!(candidate_rect.y < focused_rect.y + focused_rect.h &&
            focused_rect.y < candidate_rect.y + candidate_rect.h))
        return;

      if (kIsForward)
        gap = candidate_rect.x - (focused_rect.x + focused_rect.w);
      else
        gap = focused_rect.x - (candidate_rect.x + candidate_rect.w);

      rect_center_deviation =
          std::abs((2 * candidate_rect.y + candidate_rect.h) -
                   (2 * focused_rect.y + focused_rect.h));
    } else {
      // Reject rects the beam misses — no shared cols means it is diagonal, not
      // beside me
      if (!(candidate_rect.x < focused_rect.x + focused_rect.w &&
            focused_rect.x < candidate_rect.x + candidate_rect.w))
        return;

      if (kIsForward)
        gap = candidate_rect.y - (focused_rect.y + focused_rect.h);
      else
        gap = focused_rect.y - (candidate_rect.y + candidate_rect.h);

      rect_center_deviation =
          std::abs((2 * candidate_rect.x + candidate_rect.w) -
                   (2 * focused_rect.x + focused_rect.w));
    }

    // Negative gap means the candidate is behind me, or overlapping me. Overlap
    // is out of scope for View:Section — stacked UI belongs in View:Panels.
    if (gap < 0) return;

    // Exact ties go to whichever section traversal reached first —
    // deterministic, arbitrary.
    const std::pair kScore(gap, rect_center_deviation);
    if (kScore < best_score) {
      best_score = kScore;
      best_section = &s;
    }
  };

  for_each_section(root_node_, visit);
  if (!best_section) return false;

  // is there a better way to enforce this?
  // that only one section can be focused = true
  // at one time? is that worth it?
  focused_->set_focused(false);
  focused_ = best_section;
  focused_->set_focused(true);
  return true;
}

Rect View::content_rect() const { return {LINES - 7, COLS - 2, 3, 1}; }

#include "payrolls/ui/EmployeeInfoSection.h"

EmployeeInfoSection::EmployeeInfoSection(WINDOW* parent) : Section(parent) {
  title_ = "Information";
}

EmployeeInfoSection::~EmployeeInfoSection() {
  list_.reset();
  if (list_win_) delwin(list_win_);
}

void EmployeeInfoSection::draw_section() {
  constexpr int kContentTop = 3;
  constexpr int kBottomMargin = 1;
  constexpr int kSideMargin = 1;
  if (!list_) {
    const int h = getmaxy(section_win_) - kContentTop - kBottomMargin;
    const int w = getmaxx(section_win_) - 2 * kSideMargin;
    list_win_ = derwin(section_win_, h, w, kContentTop, kSideMargin);
    list_ = std::make_unique<ScrollList>(list_win_);
    list_->set_items({"test", "test2", "test3"});
  }

  list_->render();
}

bool EmployeeInfoSection::handle_key(int key) {
  if (!list_) return false;
  return list_->handle_key(key);
}

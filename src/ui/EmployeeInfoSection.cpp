#include "payrolls/ui/EmployeeInfoSection.h"

EmployeeInfoSection::EmployeeInfoSection(WINDOW* parent,
                                          const Employee& employee)
    : Section(parent), employee_(employee) {
  title_ = "Information";
}

EmployeeInfoSection::~EmployeeInfoSection() {
  list_.reset();
  if (list_win_) delwin(list_win_);
}

std::string EmployeeInfoSection::position_to_display(EmployeePosition p) {
  switch (p) {
    case EmployeePosition::admin:
      return "Admin";
    case EmployeePosition::hr:
      return "HR";
    case EmployeePosition::employee:
      return "Employee";
  }
  return "Employee";
}

std::string EmployeeInfoSection::status_to_display(EmployeeStatus s) {
  switch (s) {
    case EmployeeStatus::terminated:
      return "Terminated";
    case EmployeeStatus::quit:
      return "Quit";
    case EmployeeStatus::retired:
      return "Retired";
    case EmployeeStatus::deceased:
      return "Deceased";
    case EmployeeStatus::active:
      return "Active";
  }
  return "Active";
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
    list_->set_items({
        "First Name: " + employee_.first_name,
        "Last Name: " + employee_.last_name,
        "Email: " + employee_.email,
        "Phone: " + employee_.phone,
        "Address: " + employee_.address,
        "City: " + employee_.city,
        "State: " + employee_.state,
        "Zip: " + employee_.zip,
        "DOB: " + employee_.date_of_birth,
        "Position: " + position_to_display(employee_.position),
        "Status: " + status_to_display(employee_.status),
        "Hire Date: " + employee_.hire_date,
        "Termination Date: " + employee_.termination_date,
    });
  }

  list_->render();
}

bool EmployeeInfoSection::handle_key(int key) {
  if (!list_) return false;
  return list_->handle_key(key);
}

#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/EmployeeBenefitSection.h"
#include "payrolls/ui/EmployeeInfoSection.h"
#include "payrolls/ui/Layout.h"

EmployeeView::EmployeeView(EmployeeRepo emp_repo) : emp_repo_(emp_repo) {
  title_ = "Employee View";
  // build sections
  root_node_.axis = Axis::Row;

  LayoutNode& left = root_node_.add_split(1, Axis::Col);

  left.add_leaf(3, std::make_unique<EmployeeInfoSection>(view_win_));
  left.add_leaf(1, std::make_unique<EmployeeBenefitsSection>(view_win_));
  root_node_.add_leaf(1, std::make_unique<EmployeePayrollSection>(view_win_));

  assign_rects(root_node_, content_rect());

  focused_ = get_first_leaf(root_node_);
  focused_->set_focused(true);

  if (auto emp = emp_repo_.get_by_id(1)) employee_ = std::move(*emp);
}

const std::vector<KeyHint>& EmployeeView::hints() const {
  static const std::vector<KeyHint> kHints = {{"q", "Exit"},
                                              {"H", "Focus Left"},
                                              {"L", "Focus Right"},
                                              {"J", "Focus Down"},
                                              {"K", "Focus Up"}};
  return kHints;
}

#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/EmployeeBenefitSection.h"
#include "payrolls/ui/EmployeeInfoSection.h"
#include "payrolls/ui/Layout.h"

EmployeeView::EmployeeView() {
  title = "Employee View";
  // build sections
  root_node.axis = Axis::Row;

  LayoutNode& left = root_node.add_split(1, Axis::Col);

  left.add_leaf(3, std::make_unique<EmployeeInfoSection>(view_win));
  left.add_leaf(1, std::make_unique<EmployeeBenefitsSection>(view_win));
  root_node.add_leaf(1, std::make_unique<EmployeePayrollSection>(view_win));

  assign_rects(root_node, content_rect());

  // set start focus, should this be more systemized?
  focused_ = get_first_leaf(root_node);
  focused_->set_focused(true);
}

const std::vector<KeyHint>& EmployeeView::hints() const {
  static const std::vector<KeyHint> h = {{"q", "Exit"},
                                         {"H", "Focus Left"},
                                         {"L", "Focus Right"},
                                         {"J", "Focus Down"},
                                         {"K", "Focus Up"}};
  return h;
}

#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/BenefitsRequestSection.h"
#include "payrolls/ui/EmployeeBenefitSection.h"
#include "payrolls/ui/EmployeeInfoSection.h"
#include "payrolls/ui/EmployeePayrollSection.h"
#include "payrolls/ui/Layout.h"

EmployeeView::EmployeeView(EmployeeRepo emp_repo,
                           CompensationRepo compensation_repo,
                           PaystubRepo paystub_repo,
                           BenefitsRepo benefits_repo)
    : emp_repo_(emp_repo), compensation_repo_(compensation_repo),
      paystub_repo_(paystub_repo), benefits_repo_(benefits_repo) {
  title_ = "Employee View";

  if (auto emp = emp_repo_.get_by_id(1)) employee_ = std::move(*emp);

  Compensation compensation;
  if (auto comp = compensation_repo_.get_by_employee(employee_.id))
    compensation = std::move(*comp);
  const std::optional<Paystub> latest_paystub =
      paystub_repo_.get_latest(employee_.id);
  const std::vector<Benefit> benefits =
      benefits_repo_.get_by_employee(employee_.id);

  // build sections
  root_node_.axis = Axis::Row;

  LayoutNode& left = root_node_.add_split(1, Axis::Col);

  left.add_leaf(3, std::make_unique<EmployeeInfoSection>(view_win_, employee_));

  LayoutNode& benefits_row = left.add_split(1, Axis::Row);
  benefits_row.add_leaf(
      2, std::make_unique<EmployeeBenefitsSection>(view_win_, benefits));
  benefits_row.add_leaf(1, std::make_unique<BenefitsRequestSection>(view_win_));

  root_node_.add_leaf(1, std::make_unique<EmployeePayrollSection>(
                              view_win_, compensation, latest_paystub));

  assign_rects(root_node_, content_rect());

  focused_ = get_first_leaf(root_node_);
  focused_->set_focused(true);
}

const std::vector<KeyHint>& EmployeeView::hints() const {
  static const std::vector<KeyHint> kHints = {{"q", "Exit"},
                                              {"H", "Focus Left"},
                                              {"L", "Focus Right"},
                                              {"J", "Focus Down"},
                                              {"K", "Focus Up"}};
  return kHints;
}

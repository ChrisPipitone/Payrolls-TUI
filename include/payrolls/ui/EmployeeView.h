#pragma once
#include <vector>

#include "payrolls/db/CompensationRepo.h"
#include "payrolls/db/EmployeeRepo.h"
#include "payrolls/db/PaystubRepo.h"
#include "payrolls/db/models.h"
#include "payrolls/ui/View.h"

class EmployeeView : public View {
public:
  EmployeeView(EmployeeRepo emp_repo, CompensationRepo compensation_repo,
               PaystubRepo paystub_repo);

private:
  EmployeeRepo emp_repo_;
  CompensationRepo compensation_repo_;
  PaystubRepo paystub_repo_;
  Employee employee_;
  [[nodiscard]] const std::vector<KeyHint>& hints() const override;
};

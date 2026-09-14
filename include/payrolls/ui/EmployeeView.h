#pragma once
#include <vector>

#include "payrolls/db/EmployeeRepo.h"
#include "payrolls/db/models.h"
#include "payrolls/ui/View.h"

class EmployeeView : public View {
public:
  explicit EmployeeView(EmployeeRepo emp_repo);

private:
  EmployeeRepo emp_repo_;
  Employee employee_;
  [[nodiscard]] const std::vector<KeyHint>& hints() const override;
};

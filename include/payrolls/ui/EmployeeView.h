#pragma once
#include <string>
#include <vector>

#include "payrolls/ui/View.h"

struct Employee {
  int id;
  std::string first_name;
};

struct EmployeeViewState {
  Employee curr_employee;
};

class EmployeeView : public View {
public:
  EmployeeView();

private:
  EmployeeViewState state;
  [[nodiscard]] const std::vector<KeyHint>& hints() const override;
};

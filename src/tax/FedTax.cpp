#include "payrolls/tax/FedTax.h"
#include <cmath>

double FedTax::FedTaxRate(double grossIncome) {
  if (grossIncome <= 9950) {
    return round((grossIncome * 0.10) * 100.0) / 100.0;
  } else if (grossIncome >= 9951 && grossIncome <= 40525) {
    return round((995 + grossIncome * 0.12) * 100.0) / 100.0;
  } else if (grossIncome >= 40526 && grossIncome <= 86375) {
    return round((4664 + grossIncome * 0.22) * 100.0) / 100.0;
  } else if (grossIncome >= 86376 && grossIncome <= 164925) {
    return round((14751 + grossIncome * 0.24) * 100.0) / 100.0;
  } else if (grossIncome >= 164926 && grossIncome <= 209425) {
    return round((33603 + grossIncome * 0.32) * 100.0) / 100.0;
  } else if (grossIncome >= 209425 && grossIncome <= 523600) {
    return round((47843 + grossIncome * 0.35) * 100.0) / 100.0;
  } else {
    return round((157804.25 + grossIncome * 0.37) * 100.0) / 100.0;
  }
}
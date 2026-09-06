#include "payrolls/tax/CTTax.h"
#include <cmath>

double CTTax::CTTaxRate(double grossIncome) {
  if (grossIncome <= 10000) {
    return round((grossIncome * 0.03) * 100.0) / 100.0;
  } else if (grossIncome >= 10001 && grossIncome <= 50000) {
    return round((grossIncome * 0.05) * 100.0) / 100.0;
  } else if (grossIncome >= 50001 && grossIncome <= 100000) {
    return round((grossIncome * 0.055) * 100.0) / 100.0;
  } else if (grossIncome >= 100001 && grossIncome <= 200000) {
    return round((grossIncome * 0.06) * 100.0) / 100.0;
  } else if (grossIncome >= 200001 && grossIncome <= 250000) {
    return round((grossIncome * 0.065) * 100.0) / 100.0;
  } else if (grossIncome >= 250001 && grossIncome <= 500000) {
    return round((grossIncome * 0.069) * 100.0) / 100.0;
  } else {
    return round((grossIncome * 0.0669) * 100.0) / 100.0;
  }
}
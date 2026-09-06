#include "payrolls/tax/NJTax.h"
#include <cmath>

double NJTax::NJTaxRate(double grossIncome) {
  if (grossIncome < 20000) {
    return round((grossIncome * 0.014) * 100.0) / 100.0;
  } else if (grossIncome >= 20000 && grossIncome < 35000) {
    return round(((grossIncome * 0.0175) - 70) * 100.0) / 100.0;
  } else if (grossIncome >= 35000 && grossIncome < 40000) {
    return round(((grossIncome * 0.035) - 682.50) * 100.0) / 100.0;
  } else if (grossIncome >= 40000 && grossIncome < 75000) {
    return round(((grossIncome * 0.05525) - 1492.50) * 100.0) / 100.0;
  } else if (grossIncome >= 75000 && grossIncome < 500000) {
    return round(((grossIncome * 0.0637) - 2126.25) * 100.0) / 100.0;
  } else if (grossIncome >= 500000 && grossIncome < 5000000) {
    return round(((grossIncome * 0.0897) - 15126.25) * 100.0) / 100.0;
  } else {
    return round(((grossIncome * 0.1075) - 104126.25) * 100.0) / 100.0;
  }
}
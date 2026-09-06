#include "GrossIncome.h"
#include <cmath>
using namespace std;

int GrossIncome::calculateOvertimeHour(int hour, System::String ^ type) {
  if (type == "Part time") {
    if (hour > 30) {
      return hour - 30;
    } else {
      return 0;
    }
  } else {
    if (hour > 40) {
      return hour - 40;
    } else {
      return 0;
    }
  }
}

double GrossIncome::CalculateOvertimePay(int overtimeHour, double hourlyWage) {
  return round((hourlyWage * 1.5 * overtimeHour) * 100.0) / 100.0;
}

double GrossIncome::CalculateGrossIncome(int hour, double overtimePay,
                                         double hourlyWage,
                                         System::String ^ type) {
  if (type == "Part time") {
    if (hour <= 30) {
      return round((hourlyWage * hour) * 100.0) / 100.0;
    } else {
      return round(((hourlyWage * 30) + overtimePay) * 100.0) / 100.0;
    }
  } else {
    if (hour <= 40) {
      return round((hourlyWage * hour) * 100.0) / 100.0;
    } else {
      return round(((hourlyWage * 40) + overtimePay) * 100.0) / 100.0;
    }
  }
}
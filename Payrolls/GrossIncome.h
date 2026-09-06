#ifndef GrossIncome_H
#define GrossIncome_H

class GrossIncome {
public:
  int calculateOvertimeHour(int hour, System::String ^ type);
  double CalculateOvertimePay(int overtimeHour, double hourlyWage);
  double CalculateGrossIncome(int hour, double overtimePay, double hourlyWage,
                              System::String ^ type);
};

#endif #pragma once
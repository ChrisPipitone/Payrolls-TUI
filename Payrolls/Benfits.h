#pragma once

using namespace System;

ref class Benfits {
public:
  double CalculateSSAWithholding(double salary);
  double CalculateHealthCoverage(double salary, String ^ package);
  double CalculateDentalCoverage(double salary, String ^ package);
  double CalculateVisionCoverage(double salary, String ^ package);
  double CalculateHealthBenfits(double salary);
  double Calculate401k(double salary);

private:
  String ^ premium = "Premium Package";
  String ^ gold = "Gold Package";
  String ^ silver = "Silver Package";
};

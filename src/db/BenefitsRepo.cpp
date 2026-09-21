#include "payrolls/db/BenefitsRepo.h"

BenefitsRepo::BenefitsRepo(SQLite::Database& db) : db_(db) {}

Benefit BenefitsRepo::from_row(SQLite::Statement& q) {
  Benefit b;
  b.id = q.getColumn("id");
  b.employee_id = q.getColumn("employee_id");
  b.benefit_type = type_from_string(q.getColumn("benefit_type").getText());
  b.tier = tier_from_string(q.getColumn("tier").getText());
  b.cost_per_period_cents = q.getColumn("cost_per_period_cents");
  return b;
}

BenefitType BenefitsRepo::type_from_string(std::string_view s) {
  if (s == "dental") return BenefitType::dental;
  if (s == "vision") return BenefitType::vision;
  return BenefitType::health;
}

BenefitTier BenefitsRepo::tier_from_string(std::string_view s) {
  if (s == "premium") return BenefitTier::premium;
  if (s == "ineligible") return BenefitTier::ineligible;
  return BenefitTier::waived;
}

std::string BenefitsRepo::type_to_string(BenefitType t) {
  switch (t) {
    case BenefitType::dental:
      return "dental";
    case BenefitType::vision:
      return "vision";
    case BenefitType::health:
      return "health";
  }
  return "health";
}

std::string BenefitsRepo::tier_to_string(BenefitTier t) {
  switch (t) {
    case BenefitTier::premium:
      return "premium";
    case BenefitTier::ineligible:
      return "ineligible";
    case BenefitTier::waived:
      return "waived";
  }
  return "waived";
}

std::vector<Benefit> BenefitsRepo::get_by_employee(int employee_id) {
  SQLite::Statement query(db_, "SELECT * FROM benefits WHERE employee_id = ?");
  query.bind(1, employee_id);

  std::vector<Benefit> benefits;
  while (query.executeStep()) {
    benefits.push_back(from_row(query));
  }
  return benefits;
}

void BenefitsRepo::upsert(const Benefit& b) {
  SQLite::Statement statement(
      db_, "INSERT INTO benefits (employee_id, benefit_type, tier, "
           "cost_per_period_cents) VALUES (?,?,?,?) "
           "ON CONFLICT(employee_id, benefit_type) DO UPDATE SET "
           "tier = excluded.tier, "
           "cost_per_period_cents = excluded.cost_per_period_cents");

  statement.bind(1, b.employee_id);
  statement.bind(2, type_to_string(b.benefit_type));
  statement.bind(3, tier_to_string(b.tier));
  statement.bind(4, b.cost_per_period_cents);

  statement.exec();
}

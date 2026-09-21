#pragma once

#include <string_view>
#include <vector>

#include <SQLiteCpp/SQLiteCpp.h>

#include "payrolls/db/models.h"

class BenefitsRepo {
public:
    explicit BenefitsRepo(SQLite::Database& db);

    [[nodiscard]] std::vector<Benefit> get_by_employee(int employee_id);

    void upsert(const Benefit& b);

private:
    SQLite::Database& db_;

    static Benefit from_row(SQLite::Statement& q);
    static BenefitType type_from_string(std::string_view s);
    static BenefitTier tier_from_string(std::string_view s);
    static std::string type_to_string(BenefitType t);
    static std::string tier_to_string(BenefitTier t);
};

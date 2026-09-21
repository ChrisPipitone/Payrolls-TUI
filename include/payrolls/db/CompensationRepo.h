#pragma once

#include <optional>
#include <string_view>

#include <SQLiteCpp/SQLiteCpp.h>

#include "payrolls/db/models.h"

class CompensationRepo {
public:
    explicit CompensationRepo(SQLite::Database& db);

    [[nodiscard]] std::optional<Compensation> get_by_employee(int employee_id);

    void upsert(const Compensation& c);

private:
    SQLite::Database& db_;

    static Compensation from_row(SQLite::Statement& q);
    static PayType pay_type_from_string(std::string_view s);
    static std::string pay_type_to_string(PayType t);
};

#pragma once

#include <optional>
#include <vector>

#include <SQLiteCpp/SQLiteCpp.h>

#include "payrolls/db/models.h"

class PaystubRepo {
public:
    explicit PaystubRepo(SQLite::Database& db);

    [[nodiscard]] std::vector<Paystub>    get_by_employee(int employee_id);
    [[nodiscard]] std::optional<Paystub>  get_latest(int employee_id);

    void insert(const Paystub& p);

private:
    SQLite::Database& db_;

    static Paystub from_row(SQLite::Statement& q);
};

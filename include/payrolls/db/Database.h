#pragma once

#include <SQLiteCpp/SQLiteCpp.h>
#include <filesystem>
#include <string>

class Database {
public:
  explicit Database(const std::string& path);

  SQLite::Database& connection();

private:
  void run_migrations();
  std::filesystem::path kMigrationsDir_ = "data/migrations/";
  SQLite::Database db_;
};

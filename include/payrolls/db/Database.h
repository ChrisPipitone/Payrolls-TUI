#pragma once

#include <SQLiteCpp/SQLiteCpp.h>
#include <filesystem>
#include <string>

class Database {
public:
  Database(const std::string& path);

  template <typename TRepo> TRepo make_repo() { return TRepo(db_); }

private:
  void run_migrations();
  std::filesystem::path kMigrationsDir_ = "data/migrations/";
  SQLite::Database db_;
};

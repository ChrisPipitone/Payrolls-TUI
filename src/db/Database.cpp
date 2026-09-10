#include "payrolls/db/Database.h"
#include <filesystem>
#include <fstream>

Database::Database(const std::string& path)
    : db_(path, SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE) {
  // run_migrations();
}

SQLite::Database& Database::connection() { return db_; }

// draft function that I may or may not end up actually implementing
// don't really need migrations for a project of this level
void Database::run_migrations() {

  // Create `schema_version` table if it doesn't exist
  if (!db_.tableExists("schema_version")) {
    // create table
  }

  // Read highest applied version from `schema_version`

  // For each `.sql` file in `data/migrations/` not yet applied (by version
  // number):
  std::vector<std::filesystem::path> migrations;
  for (const auto& f : std::filesystem::directory_iterator(kMigrationsDir_)) {
    if (f.path().extension() == ".sql") migrations.push_back(f.path());
  }
  std::sort(migrations.begin(), migrations.end());

  // Execute its contents inside a transaction

  // Insert its version into `schema_version` on success
}

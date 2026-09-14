#include "payrolls/db/Database.h"
#include "payrolls/ui/App.h"
#include "payrolls/ui/LandingView.h"

int main() {
  Database db("payrolls.db");
  App::Get().init(db);
  App::Get().navigate_to<LandingView>(db);
  App::Get().run();
}

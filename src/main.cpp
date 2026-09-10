#include "payrolls/db/Database.h"
#include "payrolls/ui/App.h"
#include "payrolls/ui/MainMenuView.h"

int main() {
  Database db("~/.local/share/payrolls/payrolls.db");
  App::Get().init(db);
  App::Get().navigate_to<MainMenuView>();
  App::Get().run();
}

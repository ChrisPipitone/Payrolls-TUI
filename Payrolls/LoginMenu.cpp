#include "LoginMenu.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

    void
    main(array<String ^> ^ args) {
      Application::EnableVisualStyles();
      Application::SetCompatibleTextRenderingDefault(false);
      Payrolls::LoginMenu form;
      Application::Run(% form);
    }
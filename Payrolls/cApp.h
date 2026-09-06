#pragma once
#include "cApp.h"
#include "wx/wx.h"
class cApp : public wxApp {
public:
  cApp();
  ~cApp();

private:
  cApp* m_frame1 = nullptr;

public:
  virtual bool OnInit();
};
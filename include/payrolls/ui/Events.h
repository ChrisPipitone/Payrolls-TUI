#pragma once

struct KeyEvent {
  int key;
  bool consumed = false;
  void accept() { consumed = true; }
};

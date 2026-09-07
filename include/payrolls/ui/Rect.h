#pragma once

#include <cstdint>

struct Rect {
  int h, w, y, x;
};

enum class Axis : std::uint8_t { Row, Col };

#ifndef BOARD_H
#define BOARD_H

#include "Corner.hpp"
#include "Property.hpp"
#include "Special.hpp"
#include "Tax.hpp"

class Board {
public:
  Property *properties;
  Special *specials;
  Tax *taxes;
  Corner *corners;
  Board(Property *properties, Special *specials, Tax *taxes, Corner *corners);
};

#endif

#include "../models/Board.hpp"

Board::Board(Property *properties, Special *specials, Tax *taxes,
             Corner *corners) {
  this->properties = properties;
  this->specials = specials;
  this->taxes = taxes;
  this->corners = corners;
}




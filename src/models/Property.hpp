#ifndef PROPERTY_H
#define PROPERTY_H

#include "Building.hpp"
#include <SDL2/SDL_render.h>

class Property {
public:
  int value;
  Building buildings;
  double multiplier;
  double interest;
  bool mortgaged;
  int buyBack = value + (value * interest);
};

#endif

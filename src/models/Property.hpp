#ifndef PROPERTY_H
#define PROPERTY_H

#include "Building.hpp"
#include <SDL2/SDL_render.h>

class Property {
public:
  Building buildings;
  double multiplier;
  static void renderPropertyRow(SDL_Renderer *renderer, int direction);
};

#endif

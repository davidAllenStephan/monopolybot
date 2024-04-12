#include "../models/Property.hpp"
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <algorithm>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

#define PROPERTY_CARD_WIDTH std::min(SCREEN_WIDTH, SCREEN_HEIGHT) / 16
#define PROPERTY_CARD_HEIGHT std::min(SCREEN_WIDTH, SCREEN_HEIGHT) / 12

SDL_Rect createPropertyCard(int x, int y) {
  SDL_Rect squareRect;
  squareRect.w = PROPERTY_CARD_WIDTH;
  squareRect.h = PROPERTY_CARD_HEIGHT;
  squareRect.x = x;
  squareRect.y = y;
  return squareRect;
}

void Property::renderPropertyRow(SDL_Renderer *renderer, int direction) {
  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
    }
    SDL_Rect propertyCard = createPropertyCard((i * PROPERTY_CARD_WIDTH), 0);
    SDL_RenderFillRect(renderer, &propertyCard);
    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0xFF, 0xFF);
  }
}

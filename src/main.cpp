#include "csv/CsvManager.h"
#include "models/Corner.hpp"
#include "models/Property.hpp"
#include "models/Special.hpp"
#include "models/Tax.hpp"
#include <SDL.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_surface.h>
#include <iostream>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

using namespace std;

int main(int argc, char *argv[]) {

  CsvManager cm;
  list<Property> properties = cm.objectify(argv[1]);

  list<Property>::iterator it;

  for (it = properties.begin(); it != properties.end(); it++) {
    cout << it->title << endl;
  }

  Special *specials = new Special();
  Tax *taxes = new Tax();
  Corner *corners = new Corner();

  /**
  SDL_Rect squareRect;
  squareRect.w = std::min(SCREEN_WIDTH, SCREEN_HEIGHT) / 16;
  squareRect.h = std::min(SCREEN_WIDTH, SCREEN_HEIGHT) / 12;
  squareRect.x = SCREEN_WIDTH / 4 - squareRect.w / 2;
  squareRect.y = SCREEN_HEIGHT / 2 - squareRect.h / 2;

  Uint32 buffer[SCREEN_WIDTH][SCREEN_HEIGHT];
  SDL_Window *window = nullptr;
  SDL_Renderer *renderer = nullptr;
  bool appIsRunning = true;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "SDL could not be initialized: " << SDL_GetError();
  } else {
    std::cout << "SDL video system is ready to go\n";
  }

  window = SDL_CreateWindow("monopoly", SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                            SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

  if (window == NULL) {
    printf("Could not create window: %s\n", SDL_GetError());
    return 1;
  }

  renderer = SDL_CreateRenderer(
      window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

  if (renderer == NULL) {
    printf("Could not create renderer: %s\n", SDL_GetError());
    return 1;
  }

  while (appIsRunning) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        appIsRunning = false;
      }
    }
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(renderer);
    Property::renderPropertyRow(renderer);
    SDL_RenderPresent(renderer);
  }

  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  std::cout << "exiting..." << std::endl;
  SDL_Quit();
  **/

  return 0;
}

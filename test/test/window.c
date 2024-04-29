#include "include.h"

int render() {

    // create SDL window
    SDL_Window* window = SDL_CreateWindow("Red square moving",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        800, 800, SDL_WINDOW_SHOWN);

    // create render 
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



}
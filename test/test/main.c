#include "include.h"

int main(int argc, char* argv[]) {

    //rendering
    SDL_Window* window = SDL_CreateWindow("Red square moving",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        800, 800, SDL_WINDOW_SHOWN);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



    //init valeur
    int x = 100;
    int y = 100;
    int size = 20;
    int dx = 15;
    int dy = 15;

    bool game = true;

    while (game = true)
    {

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderClear(renderer);

        SDL_Rect redSquare = { x, y, size, size };
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(renderer, &redSquare);


        x += dx;
        Sleep(50);


        if (x <= 0 || x + size >= 800) {
            game = false;
        }


        SDL_RenderPresent(renderer);

        SDL_Delay(10);

    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
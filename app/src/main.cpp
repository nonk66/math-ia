#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char** args) {
    SDL_Surface* winSurface = NULL;
    SDL_Window* window = NULL;

    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cout << 'Error initializing SDL: ' << SDL.GetError() << endl;
        system('pause');
        return 1;
    }

    window=SDL_CreateWindow('Example', SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 820, SDL_WINDOW_SHOWN);

    if (!winSurface) {
        std::cout << 'Error getting surface: ' << SDL.GetError() << endl;
        system('pause');
        return 1;
    }

    SDL_FillRect(winSurface, NULL, SDL_MapRGB(winSurface->format, 255, 255, 255));

    SDL_UpdateWindowSurface(window);

    system('pause');

    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}
#include "init.h"
#include "common.h"

extern App app;

void initSDL()
{
    int renderFlags, windowFlags;

    renderFlags = SDL_RENDERER_ACCELERATED;

    windowFlags = 0;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("Failed to setup sdl %s", SDL_GetError());
        exit(1);
    }

    app.window = SDL_CreateWindow("Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, windowFlags);

    if (!app.window)
    {
        printf("Failed to create window %s", SDL_GetError());
        exit(1);
    }

    app.renderer = SDL_CreateRenderer(app.window, -1, renderFlags);

    if (!app.renderer)
    {
        printf("Failed to create renderer %s", SDL_GetError());
        exit(1);
    }

}

void cleanup()
{
    SDL_DestroyRenderer(app.renderer);

    SDL_DestroyWindow(app.window);

    SDL_Quit();
}

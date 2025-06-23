#include "draw.h"
#include "common.h"

extern App app;

void prepareScreen()
{
    SDL_SetRenderDrawColor(app.renderer, 96, 128, 255, 255);
    SDL_RenderClear(app.renderer);
}

void presentScreen()
{
    SDL_RenderPresent(app.renderer);
}

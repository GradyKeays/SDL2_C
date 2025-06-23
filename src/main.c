// src/main.c
#define SDL_MAIN_HANDLED
#include "common.h"
#include "draw.h"
#include "init.h"
#include "input.h"


App app;

int main(int argc, char* argv[]) {
    memset(&app, 0, sizeof(App));

    initSDL();

    atexit(cleanup);

    while (1)
    {
        prepareScreen();

        doInput();

        presentScreen();

        SDL_Delay(16);
    }
    

    return 0;
}

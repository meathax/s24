#include <SDL.h>
#include <verilated.h>

#include "Vtb_analog.h"

double sc_time_stamp() { return 0.0; }

int main(int argc, char** argv) {
    VerilatedContext context;
    context.commandArgs(argc, argv);
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO) != 0) return 2;
    SDL_Window* window = SDL_CreateWindow(
        "System 24 analogue-control regression",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        640, 360, SDL_WINDOW_SHOWN);
    if (!window) { SDL_Quit(); return 3; }
    Vtb_analog model{&context};
    SDL_Event event;
    while (!context.gotFinish()) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                SDL_DestroyWindow(window); SDL_Quit(); return 4;
            }
        }
        model.eval();
        context.timeInc(1);
    }
    model.final();
    SDL_Delay(750);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

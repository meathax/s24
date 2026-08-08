#define SDL_MAIN_HANDLED
#include <SDL.h>
#include "Vtb_siliconre_3155242.h"
#include "verilated.h"

double sc_time_stamp() { return 0.0; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO) != 0) return 2;
    SDL_Window* window = SDL_CreateWindow(
        "System 24 SiliconRE 315-5242 oracle",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 360,
        SDL_WINDOW_SHOWN);
    if (!window) { SDL_Quit(); return 3; }

    VerilatedContext* context = new VerilatedContext;
    context->commandArgs(argc, argv);
    Vtb_siliconre_3155242* top = new Vtb_siliconre_3155242{context};
    bool quit = false;
    while (!context->gotFinish() && !quit) {
        SDL_Event event;
        while (SDL_PollEvent(&event))
            if (event.type == SDL_QUIT) quit = true;
        top->eval();
        context->timeInc(1);
    }
    top->final();
    delete top;
    delete context;
    SDL_DestroyWindow(window);
    SDL_Quit();
    return quit ? 4 : 0;
}

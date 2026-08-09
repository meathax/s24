#include <SDL.h>
#include <verilated.h>
#include <verilated_save.h>

#include <cstdio>
#include <filesystem>
#include <string>

#include "Vtb_tile_ownership.h"

namespace fs = std::filesystem;

double sc_time_stamp() {
    return 0.0;
}

namespace {
std::string plusarg_value(int argc, char** argv, const char* prefix) {
    const std::string key(prefix);
    for (int i = 1; i < argc; ++i) {
        const std::string arg(argv[i]);
        if (arg.rfind(key, 0) == 0) return arg.substr(key.size());
    }
    return {};
}

bool save_checkpoint(VerilatedContext& context,
                     Vtb_tile_ownership& model,
                     const std::string& path) {
    const fs::path checkpoint(path);
    std::error_code error;
    if (checkpoint.has_parent_path())
        fs::create_directories(checkpoint.parent_path(), error);
    if (error) return false;

    VerilatedSave stream;
    stream.open(path.c_str());
    if (!stream.isOpen()) return false;
    stream << &context << model;
    stream.close();

    if (!fs::is_regular_file(checkpoint, error) ||
            fs::file_size(checkpoint, error) == 0) return false;
    std::fprintf(stderr, "Saved full-state checkpoint: %s\n", path.c_str());
    return true;
}
}

int main(int argc, char** argv) {
    VerilatedContext context;
    context.commandArgs(argc, argv);

    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO) != 0) return 2;

    SDL_Window* window = SDL_CreateWindow(
        "System 24 tile ownership regression",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        640, 360, SDL_WINDOW_SHOWN);
    if (!window) {
        SDL_Quit();
        return 3;
    }

    Vtb_tile_ownership model{&context};
    const std::string save_path = plusarg_value(argc, argv, "+SAVE=");
    SDL_Event event;
    int result = 0;
    while (!context.gotFinish()) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                result = 4;
                context.gotFinish(true);
            }
        }
        model.clk = !model.clk;
        model.eval();
        context.timeInc(1);
    }

    if (save_path.empty() || !save_checkpoint(context, model, save_path))
        result = result ? result : 5;
    if (model.test_failed) result = result ? result : 10;
    model.final();

    SDL_Delay(750);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return result;
}

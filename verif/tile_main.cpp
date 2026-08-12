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

    Vtb_tile_ownership model{&context};
    const std::string save_path = plusarg_value(argc, argv, "+SAVE=");
    int result = 0;
    while (!context.gotFinish()) {
        model.clk = !model.clk;
        model.eval();
        context.timeInc(1);
    }

    if (save_path.empty() || !save_checkpoint(context, model, save_path))
        result = result ? result : 5;
    if (model.test_failed) result = result ? result : 10;
    model.final();

    return result;
}

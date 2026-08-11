#include <verilated.h>
#include <cstdio>

#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

#include "Vtb_sprite_crkdown_list.h"

double sc_time_stamp() {
    return 0.0;
}

int main(int argc, char** argv) {
#ifdef _WIN32
    if (_set_fmode(_O_BINARY) != 0) return 1;
#endif
    VerilatedContext context;
    context.commandArgs(argc, argv);

    Vtb_sprite_crkdown_list model{&context};
    int result = 0;
    while (!context.gotFinish()) {
        model.clk = !model.clk;
        model.eval();
        context.timeInc(1);
    }

    model.final();
    return result;
}

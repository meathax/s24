#include <verilated.h>

#include "Vtb_sprite_bank_ownership.h"

double sc_time_stamp() {
    return 0.0;
}

int main(int argc, char** argv) {
    VerilatedContext context;
    context.commandArgs(argc, argv);

    Vtb_sprite_bank_ownership model{&context};
    while (!context.gotFinish()) {
        model.eval();
        context.timeInc(1);
    }
    model.final();
    return 0;
}

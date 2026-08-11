#include <verilated.h>

#include "Vtb_analog.h"

double sc_time_stamp() { return 0.0; }

int main(int argc, char** argv) {
    VerilatedContext context;
    context.commandArgs(argc, argv);
    Vtb_analog model{&context};
    while (!context.gotFinish()) {
        model.eval();
        context.timeInc(1);
    }
    model.final();
    return 0;
}

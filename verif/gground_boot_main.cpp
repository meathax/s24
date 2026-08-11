#include <memory>

#include "Vtb_gground_boot.h"
#include "verilated.h"

double sc_time_stamp() { return 0.0; }

int main(int argc, char** argv) {
    Verilated::debug(0);
    const std::unique_ptr<VerilatedContext> context{new VerilatedContext};
    context->threads(1);
    context->commandArgs(argc, argv);

    // Randomized DUT state is intentionally unconstrained before the first
    // synchronous reset clocks.  Disable assertion evaluation before model
    // construction; tb_gground_boot re-enables it before accepting any
    // external transaction or collecting functional evidence.
    context->assertOn(false);
    const std::unique_ptr<Vtb_gground_boot> top{
        new Vtb_gground_boot{context.get(), ""}};

    while (VL_LIKELY(!context->gotFinish())) {
        top->eval();
        if (!top->eventsPending()) break;
        context->time(top->nextTimeSlot());
    }

    top->final();
    context->statsPrintSummary();
    return 0;
}

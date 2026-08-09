// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sprite_crkdown_list__pch.h"

Vtb_sprite_crkdown_list__Syms::Vtb_sprite_crkdown_list__Syms(VerilatedContext* contextp, const char* namep, Vtb_sprite_crkdown_list* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(4734);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
}

Vtb_sprite_crkdown_list__Syms::~Vtb_sprite_crkdown_list__Syms() {
    // Tear down scopes
    // Tear down sub module instances
}

void Vtb_sprite_crkdown_list__Syms::__Vserialize(VerilatedSerialize& os) {
    // Internal state
    os << __Vm_didInit;
    // Module instance state
    TOP.__Vserialize(os);
}

void Vtb_sprite_crkdown_list__Syms::__Vdeserialize(VerilatedDeserialize& os) {
    // Internal state
    os >> __Vm_didInit;
    // Module instance state
    TOP.__Vdeserialize(os);
}

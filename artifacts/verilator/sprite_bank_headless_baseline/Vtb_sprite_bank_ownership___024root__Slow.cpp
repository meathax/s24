// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sprite_bank_ownership.h for the primary calling header

#include "Vtb_sprite_bank_ownership__pch.h"

void Vtb_sprite_bank_ownership___024root___ctor_var_reset(Vtb_sprite_bank_ownership___024root* vlSelf);

Vtb_sprite_bank_ownership___024root::Vtb_sprite_bank_ownership___024root(Vtb_sprite_bank_ownership__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_sprite_bank_ownership___024root___ctor_var_reset(this);
}

void Vtb_sprite_bank_ownership___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sprite_bank_ownership___024root::~Vtb_sprite_bank_ownership___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

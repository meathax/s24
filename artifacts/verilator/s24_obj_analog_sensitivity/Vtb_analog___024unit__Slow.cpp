// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_analog.h for the primary calling header

#include "Vtb_analog__pch.h"


Vtb_analog___024unit::Vtb_analog___024unit() = default;
Vtb_analog___024unit::~Vtb_analog___024unit() = default;

void Vtb_analog___024unit::ctor(Vtb_analog__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_analog___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_analog___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

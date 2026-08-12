// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_analog.h for the primary calling header

#ifndef VERILATED_VTB_ANALOG___024UNIT_H_
#define VERILATED_VTB_ANALOG___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_analog__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_analog___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_analog__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_analog___024unit();
    ~Vtb_analog___024unit();
    void ctor(Vtb_analog__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_analog___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

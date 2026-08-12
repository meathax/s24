// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sprite_ydiv.h for the primary calling header

#ifndef VERILATED_VTB_SPRITE_YDIV___024ROOT_H_
#define VERILATED_VTB_SPRITE_YDIV___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_sprite_ydiv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sprite_ydiv___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoPhaseResult;
    VL_IN16(divisor,8,0);
    SData/*8:0*/ __Vtrigprevexpr___TOP__divisor__0;
    VL_IN(dividend,17,0);
    VL_OUT(quotient,17,0);
    VL_OUT(remainder,18,0);
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    IData/*17:0*/ __Vtrigprevexpr___TOP__dividend__0;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;

    // INTERNAL VARIABLES
    Vtb_sprite_ydiv__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_sprite_ydiv___024root(Vtb_sprite_ydiv__Syms* symsp, const char* namep);
    ~Vtb_sprite_ydiv___024root();
    VL_UNCOPYABLE(Vtb_sprite_ydiv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

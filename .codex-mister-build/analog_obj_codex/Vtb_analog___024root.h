// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_analog.h for the primary calling header

#ifndef VERILATED_VTB_ANALOG___024ROOT_H_
#define VERILATED_VTB_ANALOG___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_analog__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_analog___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_analog__DOT__clk;
    CData/*0:0*/ tb_analog__DOT__reset;
    CData/*1:0*/ tb_analog__DOT__uaddr;
    CData/*0:0*/ tb_analog__DOT__uread;
    CData/*7:0*/ tb_analog__DOT__udout;
    CData/*0:0*/ tb_analog__DOT__select;
    CData/*0:0*/ tb_analog__DOT__shift;
    CData/*7:0*/ tb_analog__DOT__din;
    CData/*0:0*/ tb_analog__DOT__wheel_tick;
    CData/*7:0*/ tb_analog__DOT__stick_x;
    CData/*0:0*/ tb_analog__DOT__digital_left;
    CData/*0:0*/ tb_analog__DOT__digital_right;
    CData/*1:0*/ tb_analog__DOT__analogue_profile;
    CData/*0:0*/ tb_analog__DOT__stick_enable;
    CData/*3:0*/ tb_analog__DOT__stick_sensitivity;
    CData/*7:0*/ tb_analog__DOT__wheel__DOT__stick_abs;
    CData/*0:0*/ tb_analog__DOT__wheel__DOT__stick_active;
    CData/*7:0*/ tb_analog__DOT__wheel__DOT__rough_accum;
    CData/*6:0*/ tb_analog__DOT__wheel__DOT__rough_step;
    CData/*7:0*/ tb_analog__DOT__wheel__DOT__steering_step;
    CData/*0:0*/ tb_analog__DOT__wheel__DOT__stick_toggle;
    CData/*0:0*/ tb_analog__DOT__wheel__DOT__hw_toggle_d;
    CData/*0:0*/ tb_analog__DOT__wheel__DOT__stick_toggle_d;
    CData/*7:0*/ tb_analog__DOT__adc__DOT__shifter;
    CData/*0:0*/ tb_analog__DOT__upd__DOT__toggle_x_d;
    CData/*0:0*/ tb_analog__DOT__upd__DOT__toggle_y_d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_analog__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*8:0*/ tb_analog__DOT__sx;
    SData/*8:0*/ tb_analog__DOT__wheel_spinner;
    SData/*8:0*/ tb_analog__DOT__wheel_out;
    SData/*10:0*/ tb_analog__DOT__wheel__DOT__rough_rate_q;
    SData/*10:0*/ tb_analog__DOT__wheel__DOT__rough_rate;
    SData/*14:0*/ tb_analog__DOT__wheel__DOT__rough_sum;
    SData/*11:0*/ tb_analog__DOT__upd__DOT__count_x;
    SData/*11:0*/ tb_analog__DOT__upd__DOT__count_y;
    SData/*11:0*/ tb_analog__DOT__upd__DOT__latch_x;
    SData/*11:0*/ tb_analog__DOT__upd__DOT__latch_y;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1cf7f4bc__0;

    // INTERNAL VARIABLES
    Vtb_analog__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_analog___024root(Vtb_analog__Syms* symsp, const char* namep);
    ~Vtb_analog___024root();
    VL_UNCOPYABLE(Vtb_analog___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

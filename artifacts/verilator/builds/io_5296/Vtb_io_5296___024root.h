// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_io_5296.h for the primary calling header

#ifndef VERILATED_VTB_IO_5296___024ROOT_H_
#define VERILATED_VTB_IO_5296___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_io_5296__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_io_5296___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_io_5296__DOT__clk;
    CData/*0:0*/ tb_io_5296__DOT__reset;
    CData/*0:0*/ tb_io_5296__DOT__wr;
    CData/*5:0*/ tb_io_5296__DOT__addr;
    CData/*7:0*/ tb_io_5296__DOT__din;
    CData/*7:0*/ tb_io_5296__DOT__dout;
    CData/*7:0*/ tb_io_5296__DOT__port_dir;
    CData/*7:0*/ tb_io_5296__DOT__port_write;
    CData/*0:0*/ tb_io_5296__DOT__cnt2_clock;
    CData/*0:0*/ tb_io_5296__DOT__ckot_clock;
    CData/*2:0*/ tb_io_5296__DOT__mahjong_line;
    CData/*7:0*/ tb_io_5296__DOT__dut__DOT__cnt_reg;
    CData/*3:0*/ tb_io_5296__DOT__dut__DOT__cnt2_div_count;
    CData/*3:0*/ tb_io_5296__DOT__dut__DOT__ckot_div_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_io_5296__DOT__port_write_data;
    VlUnpacked<CData/*7:0*/, 8> tb_io_5296__DOT__dut__DOT__latch;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h51bf4796__0;
    VlTriggerScheduler __VtrigSched_h51bf4857__0;

    // INTERNAL VARIABLES
    Vtb_io_5296__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_io_5296___024root(Vtb_io_5296__Syms* symsp, const char* namep);
    ~Vtb_io_5296___024root();
    VL_UNCOPYABLE(Vtb_io_5296___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

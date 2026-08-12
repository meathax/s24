// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fdc.h for the primary calling header

#ifndef VERILATED_VTB_FDC___024ROOT_H_
#define VERILATED_VTB_FDC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fdc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fdc___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fdc__DOT__clk;
    CData/*0:0*/ tb_fdc__DOT__reset;
    CData/*0:0*/ tb_fdc__DOT__index_pulse;
    CData/*0:0*/ tb_fdc__DOT__bus_rd;
    CData/*0:0*/ tb_fdc__DOT__bus_wr;
    CData/*2:0*/ tb_fdc__DOT__bus_addr;
    CData/*7:0*/ tb_fdc__DOT__bus_din;
    CData/*7:0*/ tb_fdc__DOT__bus_dout;
    CData/*0:0*/ tb_fdc__DOT__bus_wait;
    CData/*0:0*/ tb_fdc__DOT__media_req;
    CData/*0:0*/ tb_fdc__DOT__media_wr;
    CData/*0:0*/ tb_fdc__DOT__media_ack;
    CData/*0:0*/ tb_fdc__DOT__stretch_ack;
    CData/*7:0*/ tb_fdc__DOT__media_wdata;
    CData/*7:0*/ tb_fdc__DOT__media_rdata;
    CData/*3:0*/ tb_fdc__DOT__dut__DOT__mode;
    CData/*7:0*/ tb_fdc__DOT__dut__DOT__status;
    CData/*7:0*/ tb_fdc__DOT__dut__DOT__track;
    CData/*7:0*/ tb_fdc__DOT__dut__DOT__sector;
    CData/*7:0*/ tb_fdc__DOT__dut__DOT__data_reg;
    CData/*7:0*/ tb_fdc__DOT__dut__DOT__physical_track;
    CData/*0:0*/ tb_fdc__DOT__dut__DOT__irq;
    CData/*0:0*/ tb_fdc__DOT__dut__DOT__drq;
    CData/*0:0*/ tb_fdc__DOT__dut__DOT__bus_seen;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_fdc__DOT__track_size;
    SData/*15:0*/ tb_fdc__DOT__dut__DOT__span;
    SData/*15:0*/ tb_fdc__DOT__dut__DOT__position;
    IData/*26:0*/ tb_fdc__DOT__media_addr;
    IData/*31:0*/ tb_fdc__DOT__requests;
    IData/*26:0*/ tb_fdc__DOT__dut__DOT__track_base;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 23040> tb_fdc__DOT__media;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3ae90dbb__0;
    VlTriggerScheduler __VtrigSched_h3ae90d7a__0;

    // INTERNAL VARIABLES
    Vtb_fdc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fdc___024root(Vtb_fdc__Syms* symsp, const char* namep);
    ~Vtb_fdc___024root();
    VL_UNCOPYABLE(Vtb_fdc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

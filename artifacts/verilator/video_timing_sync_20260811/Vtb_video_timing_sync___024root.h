// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_video_timing_sync.h for the primary calling header

#ifndef VERILATED_VTB_VIDEO_TIMING_SYNC___024ROOT_H_
#define VERILATED_VTB_VIDEO_TIMING_SYNC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_video_timing_sync__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_video_timing_sync___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_video_timing_sync__DOT__clk;
    CData/*0:0*/ tb_video_timing_sync__DOT__reset;
    CData/*0:0*/ tb_video_timing_sync__DOT__hsync_tick;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*9:0*/ tb_video_timing_sync__DOT__hcount;
    SData/*9:0*/ tb_video_timing_sync__DOT__vcount;
    IData/*31:0*/ tb_video_timing_sync__DOT__pixels;
    IData/*31:0*/ tb_video_timing_sync__DOT__lines;
    IData/*31:0*/ tb_video_timing_sync__DOT__visible_lines;
    IData/*31:0*/ tb_video_timing_sync__DOT__line_active_pixels;
    IData/*31:0*/ tb_video_timing_sync__DOT__sync_enabled_pixels;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8a4daf0d__0;
    VlTriggerScheduler __VtrigSched_h8a4dafcc__0;

    // INTERNAL VARIABLES
    Vtb_video_timing_sync__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_video_timing_sync___024root(Vtb_video_timing_sync__Syms* symsp, const char* namep);
    ~Vtb_video_timing_sync___024root();
    VL_UNCOPYABLE(Vtb_video_timing_sync___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

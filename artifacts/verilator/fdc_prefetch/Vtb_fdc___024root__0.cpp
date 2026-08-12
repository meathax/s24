// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fdc.h for the primary calling header

#include "Vtb_fdc__pch.h"

VlCoroutine Vtb_fdc___024root___eval_initial__TOP__Vtiming__0(Vtb_fdc___024root* vlSelf);
VlCoroutine Vtb_fdc___024root___eval_initial__TOP__Vtiming__1(Vtb_fdc___024root* vlSelf);

void Vtb_fdc___024root___eval_initial(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_initial\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fdc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fdc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(Vtb_fdc___024root* vlSelf, const char* __VeventDescription);
void Vtb_fdc___024root____VbeforeTrig_h3ae90d7a__0(Vtb_fdc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_fdc___024root___eval_initial__TOP__Vtiming__0(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fdc__DOT__i;
    tb_fdc__DOT__i = 0;
    CData/*7:0*/ tb_fdc__DOT__value;
    tb_fdc__DOT__value = 0;
    IData/*31:0*/ tb_fdc__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_fdc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_fdc__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_fdc__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__1__a;
    __Vtask_tb_fdc__DOT__write_reg__1__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__1__d;
    __Vtask_tb_fdc__DOT__write_reg__1__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__3__a;
    __Vtask_tb_fdc__DOT__write_reg__3__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__3__d;
    __Vtask_tb_fdc__DOT__write_reg__3__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__5__a;
    __Vtask_tb_fdc__DOT__read_reg__5__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__5__d;
    __Vtask_tb_fdc__DOT__read_reg__5__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__7__a;
    __Vtask_tb_fdc__DOT__read_reg__7__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__7__d;
    __Vtask_tb_fdc__DOT__read_reg__7__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__9__a;
    __Vtask_tb_fdc__DOT__read_reg__9__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__9__d;
    __Vtask_tb_fdc__DOT__read_reg__9__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__11__a;
    __Vtask_tb_fdc__DOT__read_reg__11__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__11__d;
    __Vtask_tb_fdc__DOT__read_reg__11__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__14__a;
    __Vtask_tb_fdc__DOT__read_reg__14__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__14__d;
    __Vtask_tb_fdc__DOT__read_reg__14__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__16__a;
    __Vtask_tb_fdc__DOT__read_reg__16__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__16__d;
    __Vtask_tb_fdc__DOT__read_reg__16__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__18__a;
    __Vtask_tb_fdc__DOT__read_reg__18__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__18__d;
    __Vtask_tb_fdc__DOT__read_reg__18__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__20__a;
    __Vtask_tb_fdc__DOT__read_reg__20__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__20__d;
    __Vtask_tb_fdc__DOT__read_reg__20__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__22__a;
    __Vtask_tb_fdc__DOT__write_reg__22__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__22__d;
    __Vtask_tb_fdc__DOT__write_reg__22__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__24__a;
    __Vtask_tb_fdc__DOT__write_reg__24__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__24__d;
    __Vtask_tb_fdc__DOT__write_reg__24__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__26__a;
    __Vtask_tb_fdc__DOT__read_reg__26__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__26__d;
    __Vtask_tb_fdc__DOT__read_reg__26__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__28__a;
    __Vtask_tb_fdc__DOT__write_reg__28__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__28__d;
    __Vtask_tb_fdc__DOT__write_reg__28__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__30__a;
    __Vtask_tb_fdc__DOT__read_reg__30__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__30__d;
    __Vtask_tb_fdc__DOT__read_reg__30__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__32__a;
    __Vtask_tb_fdc__DOT__write_reg__32__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__32__d;
    __Vtask_tb_fdc__DOT__write_reg__32__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__34__a;
    __Vtask_tb_fdc__DOT__read_reg__34__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__34__d;
    __Vtask_tb_fdc__DOT__read_reg__34__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__36__a;
    __Vtask_tb_fdc__DOT__read_reg__36__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__36__d;
    __Vtask_tb_fdc__DOT__read_reg__36__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__38__a;
    __Vtask_tb_fdc__DOT__write_reg__38__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__38__d;
    __Vtask_tb_fdc__DOT__write_reg__38__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__40__a;
    __Vtask_tb_fdc__DOT__read_reg__40__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__40__d;
    __Vtask_tb_fdc__DOT__read_reg__40__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__42__a;
    __Vtask_tb_fdc__DOT__read_reg__42__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__42__d;
    __Vtask_tb_fdc__DOT__read_reg__42__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__44__a;
    __Vtask_tb_fdc__DOT__write_reg__44__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__44__d;
    __Vtask_tb_fdc__DOT__write_reg__44__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__46__a;
    __Vtask_tb_fdc__DOT__read_reg__46__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__46__d;
    __Vtask_tb_fdc__DOT__read_reg__46__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__48__a;
    __Vtask_tb_fdc__DOT__read_reg__48__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__48__d;
    __Vtask_tb_fdc__DOT__read_reg__48__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__50__a;
    __Vtask_tb_fdc__DOT__write_reg__50__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__50__d;
    __Vtask_tb_fdc__DOT__write_reg__50__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__52__a;
    __Vtask_tb_fdc__DOT__write_reg__52__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__52__d;
    __Vtask_tb_fdc__DOT__write_reg__52__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__write_reg__54__a;
    __Vtask_tb_fdc__DOT__write_reg__54__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__write_reg__54__d;
    __Vtask_tb_fdc__DOT__write_reg__54__d = 0;
    CData/*2:0*/ __Vtask_tb_fdc__DOT__read_reg__56__a;
    __Vtask_tb_fdc__DOT__read_reg__56__a = 0;
    CData/*7:0*/ __Vtask_tb_fdc__DOT__read_reg__56__d;
    __Vtask_tb_fdc__DOT__read_reg__56__d = 0;
    // Body
    tb_fdc__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00005a00U, tb_fdc__DOT__i)) {
        if (VL_LIKELY(((0x59ffU >= (0x00007fffU & tb_fdc__DOT__i))))) {
            vlSelfRef.tb_fdc__DOT__media[(0x00007fffU 
                                          & tb_fdc__DOT__i)] 
                = (0x000000ffU & (0x5aU ^ tb_fdc__DOT__i));
        }
        tb_fdc__DOT__i = ((IData)(1U) + tb_fdc__DOT__i);
    }
    tb_fdc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_fdc__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             63);
        tb_fdc__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_fdc__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_fdc__DOT__reset = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         63);
    vlSelfRef.tb_fdc__DOT__bus_addr = 3U;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         66);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fdc__DOT__bus_wait) 
                      | (0xffU != (IData)(vlSelfRef.tb_fdc__DOT__bus_dout)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:67: Assertion failed in %m: absent-media behavior\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 67, "", false);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    vlSelfRef.tb_fdc__DOT__track_size = 4U;
    __Vtask_tb_fdc__DOT__write_reg__1__d = 2U;
    __Vtask_tb_fdc__DOT__write_reg__1__a = 3U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__1__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__1__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    __Vtask_tb_fdc__DOT__write_reg__3__d = 0x10U;
    __Vtask_tb_fdc__DOT__write_reg__3__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__3__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__3__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    __Vtask_tb_fdc__DOT__read_reg__5__a = 1U;
    __Vtask_tb_fdc__DOT__read_reg__5__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__5__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__5__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__5__d;
    if (VL_UNLIKELY(((2U != (IData)(tb_fdc__DOT__value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:74: Assertion failed in %m: seek track register %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 74, "", false);
    }
    __Vtask_tb_fdc__DOT__read_reg__7__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__7__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__7__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__7__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__7__d;
    if (VL_UNLIKELY(((0x42U != (0x42U & (IData)(tb_fdc__DOT__value)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:76: Assertion failed in %m: seek IRQ/physical-track status %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 76, "", false);
    }
    __Vtask_tb_fdc__DOT__read_reg__9__a = 0U;
    __Vtask_tb_fdc__DOT__read_reg__9__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__9__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__9__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__9__d;
    __Vtask_tb_fdc__DOT__read_reg__11__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__11__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__11__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__11__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__11__d;
    if (VL_UNLIKELY(((0U != (2U & (IData)(tb_fdc__DOT__value)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:79: Assertion failed in %m: status read did not clear IRQ\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 79, "", false);
    }
    vlSelfRef.tb_fdc__DOT__bus_addr = 0U;
    vlSelfRef.tb_fdc__DOT__bus_din = 0x98U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         83);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         83);
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_fdc__DOT__media_req)) 
                             | (IData)(vlSelfRef.tb_fdc__DOT__media_wr)) 
                            | (0x00000014U != vlSelfRef.tb_fdc__DOT__media_addr)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:85: Assertion failed in %m: read command did not immediately prefetch first byte\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 85, "", false);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_fdc__DOT__dut__DOT__drq))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:87: Assertion failed in %m: read command advertised DRQ before prefetched byte was valid\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 87, "", false);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    __Vtask_tb_fdc__DOT__read_reg__14__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__14__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__14__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__14__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__14__d;
    if (VL_UNLIKELY(((0U == (1U & (IData)(tb_fdc__DOT__value)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:90: Assertion failed in %m: read command did not raise DRQ\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 90, "", false);
    }
    tb_fdc__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, tb_fdc__DOT__i)) {
        __Vtask_tb_fdc__DOT__read_reg__16__a = 3U;
        __Vtask_tb_fdc__DOT__read_reg__16__d = 0;
        vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__16__a;
        vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             53);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             53);
        while (vlSelfRef.tb_fdc__DOT__bus_wait) {
            Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                          "@(posedge tb_fdc.clk)");
            co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_fdc.clk)", 
                                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                                 54);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                 54);
        }
        __Vtask_tb_fdc__DOT__read_reg__16__d = vlSelfRef.tb_fdc__DOT__bus_dout;
        vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
        vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             37);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             37);
        tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__16__d;
        if (VL_UNLIKELY((((IData)(tb_fdc__DOT__value) 
                          != ((0x59ffU >= (0x00007fffU 
                                           & ((IData)(0x0014U) 
                                              + tb_fdc__DOT__i)))
                               ? vlSelfRef.tb_fdc__DOT__media
                              [(0x00007fffU & ((IData)(0x0014U) 
                                               + tb_fdc__DOT__i))]
                               : 0U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:94: Assertion failed in %m: read byte %0d got %02h expected %02h\n",6, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,tb_fdc__DOT__i, '#',8,(IData)(tb_fdc__DOT__value)
                         , '#',8,((0x59ffU >= (0x00007fffU 
                                               & ((IData)(0x0014U) 
                                                  + tb_fdc__DOT__i)))
                                   ? vlSelfRef.tb_fdc__DOT__media
                                  [(0x00007fffU & ((IData)(0x0014U) 
                                                   + tb_fdc__DOT__i))]
                                   : 0U));
            VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 94, "", false);
        }
        tb_fdc__DOT__i = ((IData)(1U) + tb_fdc__DOT__i);
    }
    __Vtask_tb_fdc__DOT__read_reg__18__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__18__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__18__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    if (VL_UNLIKELY(((4U != vlSelfRef.tb_fdc__DOT__requests)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:96: Assertion failed in %m: read request count %0d\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_fdc__DOT__requests);
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 96, "", false);
    }
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__18__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__18__d;
    __Vtask_tb_fdc__DOT__read_reg__20__a = 0U;
    __Vtask_tb_fdc__DOT__read_reg__20__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__20__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    if (VL_UNLIKELY(((2U != (3U & (IData)(tb_fdc__DOT__value)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:98: Assertion failed in %m: read completion status %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 98, "", false);
    }
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__20__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__20__d;
    vlSelfRef.tb_fdc__DOT__requests = 0U;
    __Vtask_tb_fdc__DOT__write_reg__22__d = 0xb0U;
    __Vtask_tb_fdc__DOT__write_reg__22__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__22__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__22__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, tb_fdc__DOT__i)) {
        __Vtask_tb_fdc__DOT__write_reg__24__d = (0x000000ffU 
                                                 & ((IData)(0xa0U) 
                                                    + tb_fdc__DOT__i));
        __Vtask_tb_fdc__DOT__write_reg__24__a = 3U;
        vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__24__a;
        vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__24__d;
        vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             44);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             44);
        while (vlSelfRef.tb_fdc__DOT__bus_wait) {
            Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                          "@(posedge tb_fdc.clk)");
            co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_fdc.clk)", 
                                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                                 45);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                 45);
        }
        vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
        vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             37);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             37);
        tb_fdc__DOT__i = ((IData)(1U) + tb_fdc__DOT__i);
    }
    tb_fdc__DOT__i = 0U;
    if (VL_UNLIKELY(((0xa0U != vlSelfRef.tb_fdc__DOT__media[16U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:106: Assertion failed in %m: write byte 0 mismatch\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 106, "", false);
    }
    tb_fdc__DOT__i = 1U;
    if (VL_UNLIKELY(((0xa1U != vlSelfRef.tb_fdc__DOT__media[17U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:106: Assertion failed in %m: write byte 1 mismatch\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 106, "", false);
    }
    tb_fdc__DOT__i = 2U;
    if (VL_UNLIKELY(((0xa2U != vlSelfRef.tb_fdc__DOT__media[18U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:106: Assertion failed in %m: write byte 2 mismatch\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 106, "", false);
    }
    tb_fdc__DOT__i = 3U;
    if (VL_UNLIKELY(((0xa3U != vlSelfRef.tb_fdc__DOT__media[19U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:106: Assertion failed in %m: write byte 3 mismatch\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 106, "", false);
    }
    if (VL_UNLIKELY(((4U != vlSelfRef.tb_fdc__DOT__requests)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:107: Assertion failed in %m: write request count %0d\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_fdc__DOT__requests);
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 107, "", false);
    }
    tb_fdc__DOT__i = 4U;
    __Vtask_tb_fdc__DOT__read_reg__26__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__26__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__26__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__26__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__26__d;
    if (VL_UNLIKELY(((2U != (3U & (IData)(tb_fdc__DOT__value)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:109: Assertion failed in %m: write completion status %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 109, "", false);
    }
    vlSelfRef.tb_fdc__DOT__requests = 0U;
    vlSelfRef.tb_fdc__DOT__stretch_ack = 1U;
    __Vtask_tb_fdc__DOT__write_reg__28__d = 0x90U;
    __Vtask_tb_fdc__DOT__write_reg__28__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__28__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__28__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    __Vtask_tb_fdc__DOT__read_reg__30__a = 3U;
    __Vtask_tb_fdc__DOT__read_reg__30__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__30__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__30__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__30__d;
    if (VL_UNLIKELY((((IData)(tb_fdc__DOT__value) != vlSelfRef.tb_fdc__DOT__media[16U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:115: Assertion failed in %m: stretched-ack read mismatch %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 115, "", false);
    }
    tb_fdc__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, tb_fdc__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             116);
        tb_fdc__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_fdc__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    Vtb_fdc___024root____VbeforeTrig_h3ae90d7a__0(vlSelf, 
                                                  "@(negedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90d7a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         117);
    vlSelfRef.tb_fdc__DOT__media_ack = 0U;
    vlSelfRef.tb_fdc__DOT__stretch_ack = 0U;
    if (VL_UNLIKELY(((((1U != (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position)) 
                       | (3U != (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__span))) 
                      | (1U != vlSelfRef.tb_fdc__DOT__requests))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:120: Assertion failed in %m: stretched ack consumed multiple bytes pos=%0d span=%0d req=%0d\n",6, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position)
                     , '#',16,vlSelfRef.tb_fdc__DOT__dut__DOT__span
                     , '~',32,vlSelfRef.tb_fdc__DOT__requests);
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 120, "", false);
    }
    __Vtask_tb_fdc__DOT__write_reg__32__d = 0xd0U;
    __Vtask_tb_fdc__DOT__write_reg__32__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__32__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__32__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__i = vlSelfRef.tb_fdc__DOT__dut__DOT__position;
    __Vtask_tb_fdc__DOT__read_reg__34__a = 3U;
    __Vtask_tb_fdc__DOT__read_reg__34__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__34__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__34__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__34__d;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position) 
                        != tb_fdc__DOT__i) | (0U != (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__span))) 
                      | (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__drq))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:129: Assertion failed in %m: invalid read advanced pipeline pos=%0d span=%0d drq=%0b\n",6, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position)
                     , '#',16,vlSelfRef.tb_fdc__DOT__dut__DOT__span
                     , '#',1,(IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__drq));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 129, "", false);
    }
    __Vtask_tb_fdc__DOT__read_reg__36__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__36__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__36__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__36__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__36__d;
    if (VL_UNLIKELY(((0U != (3U & (IData)(tb_fdc__DOT__value)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:133: Assertion failed in %m: force interrupt d0 status %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 133, "", false);
    }
    __Vtask_tb_fdc__DOT__write_reg__38__d = 0xd1U;
    __Vtask_tb_fdc__DOT__write_reg__38__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__38__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__38__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    __Vtask_tb_fdc__DOT__read_reg__40__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__40__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__40__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__40__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__40__d;
    if (VL_UNLIKELY(((1U & ((IData)(tb_fdc__DOT__value) 
                            | (0U == (2U & (IData)(tb_fdc__DOT__value)))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:136: Assertion failed in %m: force interrupt d1 status %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 136, "", false);
    }
    vlSelfRef.tb_fdc__DOT__index_pulse = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         138);
    __Vtask_tb_fdc__DOT__read_reg__42__a = 4U;
    __Vtask_tb_fdc__DOT__read_reg__42__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__42__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__42__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__42__d;
    if (VL_UNLIKELY(((0U == (0x00000020U & (IData)(tb_fdc__DOT__value)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:139: Assertion failed in %m: index status missing\n",3, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 139, "", false);
    }
    vlSelfRef.tb_fdc__DOT__index_pulse = 0U;
    __Vtask_tb_fdc__DOT__write_reg__44__d = 0U;
    __Vtask_tb_fdc__DOT__write_reg__44__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__44__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__44__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    __Vtask_tb_fdc__DOT__read_reg__46__a = 1U;
    __Vtask_tb_fdc__DOT__read_reg__46__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__46__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__46__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__46__d;
    if (VL_UNLIKELY(((0U != (IData)(tb_fdc__DOT__value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:144: Assertion failed in %m: restore track %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 144, "", false);
    }
    __Vtask_tb_fdc__DOT__read_reg__48__a = 0U;
    __Vtask_tb_fdc__DOT__read_reg__48__d = 0;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__48__a;
    vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         53);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             54);
    }
    __Vtask_tb_fdc__DOT__read_reg__48__d = vlSelfRef.tb_fdc__DOT__bus_dout;
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__48__d;
    if (VL_UNLIKELY(((4U != (IData)(tb_fdc__DOT__value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:146: Assertion failed in %m: restore status %02h\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(tb_fdc__DOT__value));
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 146, "", false);
    }
    vlSelfRef.tb_fdc__DOT__track_size = 0x2d00U;
    vlSelfRef.tb_fdc__DOT__requests = 0U;
    __Vtask_tb_fdc__DOT__write_reg__50__d = 0xb0U;
    __Vtask_tb_fdc__DOT__write_reg__50__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__50__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__50__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__i = 0U;
    while ((0x00002d00U > tb_fdc__DOT__i)) {
        __Vtask_tb_fdc__DOT__write_reg__52__d = (0x000000ffU 
                                                 & (0xa5U 
                                                    ^ tb_fdc__DOT__i));
        __Vtask_tb_fdc__DOT__write_reg__52__a = 3U;
        vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__52__a;
        vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__52__d;
        vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             44);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             44);
        while (vlSelfRef.tb_fdc__DOT__bus_wait) {
            Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                          "@(posedge tb_fdc.clk)");
            co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_fdc.clk)", 
                                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                                 45);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                 45);
        }
        vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
        vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             37);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             37);
        tb_fdc__DOT__i = ((IData)(1U) + tb_fdc__DOT__i);
    }
    if (VL_UNLIKELY(((0x00002d00U != vlSelfRef.tb_fdc__DOT__requests)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:157: Assertion failed in %m: full-track write request count %0d\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_fdc__DOT__requests);
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 157, "", false);
    }
    vlSelfRef.tb_fdc__DOT__requests = 0U;
    __Vtask_tb_fdc__DOT__write_reg__54__d = 0x90U;
    __Vtask_tb_fdc__DOT__write_reg__54__a = 0U;
    vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__write_reg__54__a;
    vlSelfRef.tb_fdc__DOT__bus_din = __Vtask_tb_fdc__DOT__write_reg__54__d;
    vlSelfRef.tb_fdc__DOT__bus_wr = 1U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         44);
    while (vlSelfRef.tb_fdc__DOT__bus_wait) {
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             45);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             45);
    }
    vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
    vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                  "@(posedge tb_fdc.clk)");
    co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fdc.clk)", 
                                                         "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                         37);
    tb_fdc__DOT__i = 0U;
    while ((0x00002d00U > tb_fdc__DOT__i)) {
        __Vtask_tb_fdc__DOT__read_reg__56__a = 3U;
        __Vtask_tb_fdc__DOT__read_reg__56__d = 0;
        vlSelfRef.tb_fdc__DOT__bus_addr = __Vtask_tb_fdc__DOT__read_reg__56__a;
        vlSelfRef.tb_fdc__DOT__bus_rd = 1U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             53);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             53);
        while (vlSelfRef.tb_fdc__DOT__bus_wait) {
            Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                          "@(posedge tb_fdc.clk)");
            co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_fdc.clk)", 
                                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                                 54);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                 54);
        }
        __Vtask_tb_fdc__DOT__read_reg__56__d = vlSelfRef.tb_fdc__DOT__bus_dout;
        vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
        vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
        Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(vlSelf, 
                                                      "@(posedge tb_fdc.clk)");
        co_await vlSelfRef.__VtrigSched_h3ae90dbb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fdc.clk)", 
                                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                                             37);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             37);
        tb_fdc__DOT__value = __Vtask_tb_fdc__DOT__read_reg__56__d;
        if (VL_UNLIKELY((((IData)(tb_fdc__DOT__value) 
                          != (0x000000ffU & (0xa5U 
                                             ^ tb_fdc__DOT__i)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:163: Assertion failed in %m: full-track round trip byte %0d got %02h\n",5, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,tb_fdc__DOT__i, '#',8,(IData)(tb_fdc__DOT__value));
            VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 163, "", false);
        }
        tb_fdc__DOT__i = ((IData)(1U) + tb_fdc__DOT__i);
    }
    if (VL_UNLIKELY(((0x00002d00U != vlSelfRef.tb_fdc__DOT__requests)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:166: Assertion failed in %m: full-track read request count %0d\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_fdc__DOT__requests);
        VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 166, "", false);
    }
    VL_WRITEF_NX("PASS tb_fdc MAME commands, sequencing, status and full 2d00-byte writable track\n",0);
    VL_FINISH_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 169, "");
    co_return;
}

VlCoroutine Vtb_fdc___024root___eval_initial__TOP__Vtiming__1(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 
                                             16);
        vlSelfRef.tb_fdc__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_fdc__DOT__clk)));
    }
    co_return;
}

bool Vtb_fdc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_fdc___024root___act_comb__TOP__0(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___act_comb__TOP__0\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fdc__DOT__bus_wait = ((0U != (IData)(vlSelfRef.tb_fdc__DOT__track_size)) 
                                       & ((IData)(vlSelfRef.tb_fdc__DOT__media_req) 
                                          | ((IData)(vlSelfRef.tb_fdc__DOT__bus_wr) 
                                             & ((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__drq) 
                                                & ((3U 
                                                    == (IData)(vlSelfRef.tb_fdc__DOT__bus_addr)) 
                                                   & ((~ (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__bus_seen)) 
                                                      & (0x0bU 
                                                         == (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__mode))))))));
    vlSelfRef.tb_fdc__DOT__bus_dout = (0x000000ffU 
                                       & (((4U & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))
                                            ? (0x90U 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr)))) 
                                                  | ((2U 
                                                      & (- (IData)((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__irq)))) 
                                                     | ((1U 
                                                         & (- (IData)((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__drq)))) 
                                                        | ((0x40U 
                                                            & (- (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__physical_track))))) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_fdc__DOT__bus_addr) 
                                                                             >> 1U)))) 
                                                              | (0x20U 
                                                                 & (- (IData)((IData)(vlSelfRef.tb_fdc__DOT__index_pulse))))))))))
                                            : ((2U 
                                                & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))
                                                    ? (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__data_reg)
                                                    : (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__sector))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))
                                                    ? (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__track)
                                                    : (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__status)))) 
                                          | (- (IData)(
                                                       (0U 
                                                        == (IData)(vlSelfRef.tb_fdc__DOT__track_size))))));
}

void Vtb_fdc___024root___nba_sequent__TOP__0(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___nba_sequent__TOP__0\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*26:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__Vfuncout;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__bytes_per_track;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__bytes_per_track = 0;
    SData/*8:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__track_and_side;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__track_and_side = 0;
    IData/*31:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__product;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__product = 0;
    IData/*26:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__Vfuncout;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__bytes_per_track;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__bytes_per_track = 0;
    SData/*8:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__track_and_side;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__track_and_side = 0;
    IData/*31:0*/ __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__product;
    __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__product = 0;
    CData/*0:0*/ __Vdly__tb_fdc__DOT__media_ack;
    __Vdly__tb_fdc__DOT__media_ack = 0;
    CData/*0:0*/ __VdlyMask__tb_fdc__DOT__media_ack;
    __VdlyMask__tb_fdc__DOT__media_ack = 0;
    IData/*31:0*/ __Vdly__tb_fdc__DOT__requests;
    __Vdly__tb_fdc__DOT__requests = 0;
    IData/*31:0*/ __VdlyMask__tb_fdc__DOT__requests;
    __VdlyMask__tb_fdc__DOT__requests = 0;
    CData/*7:0*/ __Vdly__tb_fdc__DOT__media_rdata;
    __Vdly__tb_fdc__DOT__media_rdata = 0;
    CData/*3:0*/ __Vdly__tb_fdc__DOT__dut__DOT__mode;
    __Vdly__tb_fdc__DOT__dut__DOT__mode = 0;
    CData/*7:0*/ __Vdly__tb_fdc__DOT__dut__DOT__data_reg;
    __Vdly__tb_fdc__DOT__dut__DOT__data_reg = 0;
    CData/*7:0*/ __Vdly__tb_fdc__DOT__dut__DOT__physical_track;
    __Vdly__tb_fdc__DOT__dut__DOT__physical_track = 0;
    CData/*0:0*/ __Vdly__tb_fdc__DOT__dut__DOT__drq;
    __Vdly__tb_fdc__DOT__dut__DOT__drq = 0;
    SData/*15:0*/ __Vdly__tb_fdc__DOT__dut__DOT__span;
    __Vdly__tb_fdc__DOT__dut__DOT__span = 0;
    SData/*15:0*/ __Vdly__tb_fdc__DOT__dut__DOT__position;
    __Vdly__tb_fdc__DOT__dut__DOT__position = 0;
    IData/*26:0*/ __Vdly__tb_fdc__DOT__dut__DOT__track_base;
    __Vdly__tb_fdc__DOT__dut__DOT__track_base = 0;
    CData/*0:0*/ __Vdly__tb_fdc__DOT__media_req;
    __Vdly__tb_fdc__DOT__media_req = 0;
    CData/*0:0*/ __Vdly__tb_fdc__DOT__media_wr;
    __Vdly__tb_fdc__DOT__media_wr = 0;
    CData/*0:0*/ __Vdly__tb_fdc__DOT__dut__DOT__bus_seen;
    __Vdly__tb_fdc__DOT__dut__DOT__bus_seen = 0;
    CData/*7:0*/ __VdlyVal__tb_fdc__DOT__media__v0;
    __VdlyVal__tb_fdc__DOT__media__v0 = 0;
    SData/*14:0*/ __VdlyDim0__tb_fdc__DOT__media__v0;
    __VdlyDim0__tb_fdc__DOT__media__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_fdc__DOT__media__v0;
    __VdlySet__tb_fdc__DOT__media__v0 = 0;
    // Body
    __Vdly__tb_fdc__DOT__dut__DOT__span = vlSelfRef.tb_fdc__DOT__dut__DOT__span;
    __Vdly__tb_fdc__DOT__dut__DOT__position = vlSelfRef.tb_fdc__DOT__dut__DOT__position;
    __Vdly__tb_fdc__DOT__dut__DOT__track_base = vlSelfRef.tb_fdc__DOT__dut__DOT__track_base;
    __Vdly__tb_fdc__DOT__media_wr = vlSelfRef.tb_fdc__DOT__media_wr;
    __Vdly__tb_fdc__DOT__dut__DOT__mode = vlSelfRef.tb_fdc__DOT__dut__DOT__mode;
    __Vdly__tb_fdc__DOT__media_req = vlSelfRef.tb_fdc__DOT__media_req;
    __Vdly__tb_fdc__DOT__dut__DOT__bus_seen = vlSelfRef.tb_fdc__DOT__dut__DOT__bus_seen;
    __Vdly__tb_fdc__DOT__dut__DOT__data_reg = vlSelfRef.tb_fdc__DOT__dut__DOT__data_reg;
    __Vdly__tb_fdc__DOT__dut__DOT__physical_track = vlSelfRef.tb_fdc__DOT__dut__DOT__physical_track;
    __Vdly__tb_fdc__DOT__dut__DOT__drq = vlSelfRef.tb_fdc__DOT__dut__DOT__drq;
    __Vdly__tb_fdc__DOT__media_rdata = vlSelfRef.tb_fdc__DOT__media_rdata;
    __VdlySet__tb_fdc__DOT__media__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_fdc__DOT__stretch_ack)))) {
        __Vdly__tb_fdc__DOT__media_ack = 0U;
        __VdlyMask__tb_fdc__DOT__media_ack = 1U;
    }
    if (((IData)(vlSelfRef.tb_fdc__DOT__media_req) 
         & (~ (IData)(vlSelfRef.tb_fdc__DOT__media_ack)))) {
        if (VL_UNLIKELY(((0x00005a00U <= vlSelfRef.tb_fdc__DOT__media_addr)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fdc.sv:24: Assertion failed in %m: media address outside test image: %0d\n",4, 'M',vlSymsp->name(),"tb_fdc", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',27,vlSelfRef.tb_fdc__DOT__media_addr);
            VL_STOP_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 24, "", false);
        }
        __Vdly__tb_fdc__DOT__requests = ((IData)(1U) 
                                         + vlSelfRef.tb_fdc__DOT__requests);
        __VdlyMask__tb_fdc__DOT__requests = 0xffffffffU;
        if (vlSelfRef.tb_fdc__DOT__media_wr) {
            if ((0x59ffU >= (0x00007fffU & vlSelfRef.tb_fdc__DOT__media_addr))) {
                __VdlyVal__tb_fdc__DOT__media__v0 = vlSelfRef.tb_fdc__DOT__media_wdata;
                __VdlyDim0__tb_fdc__DOT__media__v0 
                    = (0x00007fffU & vlSelfRef.tb_fdc__DOT__media_addr);
                __VdlySet__tb_fdc__DOT__media__v0 = 1U;
            }
        } else {
            __Vdly__tb_fdc__DOT__media_rdata = ((0x59ffU 
                                                 >= 
                                                 (0x00007fffU 
                                                  & vlSelfRef.tb_fdc__DOT__media_addr))
                                                 ? vlSelfRef.tb_fdc__DOT__media
                                                [(0x00007fffU 
                                                  & vlSelfRef.tb_fdc__DOT__media_addr)]
                                                 : 0U);
        }
        __Vdly__tb_fdc__DOT__media_ack = 1U;
        __VdlyMask__tb_fdc__DOT__media_ack = 1U;
    } else if (((IData)(vlSelfRef.tb_fdc__DOT__media_ack) 
                & (~ (IData)(vlSelfRef.tb_fdc__DOT__stretch_ack)))) {
        __Vdly__tb_fdc__DOT__media_ack = 0U;
        __VdlyMask__tb_fdc__DOT__media_ack = 1U;
    }
    vlSelfRef.tb_fdc__DOT__requests = ((__Vdly__tb_fdc__DOT__requests 
                                        & __VdlyMask__tb_fdc__DOT__requests) 
                                       | (vlSelfRef.tb_fdc__DOT__requests 
                                          & (~ __VdlyMask__tb_fdc__DOT__requests)));
    __VdlyMask__tb_fdc__DOT__requests = 0U;
    if (__VdlySet__tb_fdc__DOT__media__v0) {
        vlSelfRef.tb_fdc__DOT__media[__VdlyDim0__tb_fdc__DOT__media__v0] 
            = __VdlyVal__tb_fdc__DOT__media__v0;
    }
    if (vlSelfRef.tb_fdc__DOT__reset) {
        __Vdly__tb_fdc__DOT__dut__DOT__mode = 0U;
        vlSelfRef.tb_fdc__DOT__dut__DOT__status = 0U;
        vlSelfRef.tb_fdc__DOT__dut__DOT__track = 0U;
        vlSelfRef.tb_fdc__DOT__dut__DOT__sector = 0U;
        __Vdly__tb_fdc__DOT__dut__DOT__data_reg = 0U;
        __Vdly__tb_fdc__DOT__dut__DOT__physical_track = 0U;
        vlSelfRef.tb_fdc__DOT__dut__DOT__irq = 0U;
        __Vdly__tb_fdc__DOT__dut__DOT__drq = 0U;
        __Vdly__tb_fdc__DOT__dut__DOT__span = 0U;
        __Vdly__tb_fdc__DOT__dut__DOT__position = 0U;
        __Vdly__tb_fdc__DOT__dut__DOT__track_base = 0U;
        __Vdly__tb_fdc__DOT__media_req = 0U;
        __Vdly__tb_fdc__DOT__media_wr = 0U;
        vlSelfRef.tb_fdc__DOT__media_addr = 0U;
        vlSelfRef.tb_fdc__DOT__media_wdata = 0U;
        __Vdly__tb_fdc__DOT__dut__DOT__bus_seen = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelfRef.tb_fdc__DOT__bus_rd)) 
                   & (~ (IData)(vlSelfRef.tb_fdc__DOT__bus_wr))))) {
            __Vdly__tb_fdc__DOT__dut__DOT__bus_seen = 0U;
        }
        if (((IData)(vlSelfRef.tb_fdc__DOT__media_ack) 
             & (IData)(vlSelfRef.tb_fdc__DOT__media_req))) {
            __Vdly__tb_fdc__DOT__media_req = 0U;
            if (vlSelfRef.tb_fdc__DOT__media_wr) {
                if ((1U == (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__span))) {
                    __Vdly__tb_fdc__DOT__dut__DOT__span = 0U;
                    __Vdly__tb_fdc__DOT__dut__DOT__drq = 0U;
                    vlSelfRef.tb_fdc__DOT__dut__DOT__status = 0U;
                    vlSelfRef.tb_fdc__DOT__dut__DOT__irq = 1U;
                } else {
                    __Vdly__tb_fdc__DOT__dut__DOT__span 
                        = (0x0000ffffU & ((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__span) 
                                          - (IData)(1U)));
                    __Vdly__tb_fdc__DOT__dut__DOT__position 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position)));
                }
            } else {
                __Vdly__tb_fdc__DOT__dut__DOT__data_reg 
                    = vlSelfRef.tb_fdc__DOT__media_rdata;
                __Vdly__tb_fdc__DOT__dut__DOT__drq = 1U;
            }
        }
        if (((((0U != (IData)(vlSelfRef.tb_fdc__DOT__track_size)) 
               & ((IData)(vlSelfRef.tb_fdc__DOT__bus_rd) 
                  | (IData)(vlSelfRef.tb_fdc__DOT__bus_wr))) 
              & (~ (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__bus_seen))) 
             & (~ (IData)(vlSelfRef.tb_fdc__DOT__media_req)))) {
            __Vdly__tb_fdc__DOT__dut__DOT__bus_seen = 1U;
            if (vlSelfRef.tb_fdc__DOT__bus_rd) {
                if ((0U == (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))) {
                    vlSelfRef.tb_fdc__DOT__dut__DOT__irq = 0U;
                }
                if ((((3U == (IData)(vlSelfRef.tb_fdc__DOT__bus_addr)) 
                      & (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__drq)) 
                     & (9U == (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__mode)))) {
                    __Vdly__tb_fdc__DOT__dut__DOT__drq = 0U;
                    if ((1U == (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__span))) {
                        __Vdly__tb_fdc__DOT__dut__DOT__span = 0U;
                        vlSelfRef.tb_fdc__DOT__dut__DOT__status = 0U;
                        vlSelfRef.tb_fdc__DOT__dut__DOT__irq = 1U;
                    } else {
                        __Vdly__tb_fdc__DOT__dut__DOT__span 
                            = (0x0000ffffU & ((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__span) 
                                              - (IData)(1U)));
                        __Vdly__tb_fdc__DOT__dut__DOT__position 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position)));
                        __Vdly__tb_fdc__DOT__media_req = 1U;
                        __Vdly__tb_fdc__DOT__media_wr = 0U;
                        vlSelfRef.tb_fdc__DOT__media_addr 
                            = (0x07ffffffU & (vlSelfRef.tb_fdc__DOT__dut__DOT__track_base 
                                              + (0x0000ffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position)))));
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.tb_fdc__DOT__bus_addr) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))) {
                    if ((1U & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))) {
                        __Vdly__tb_fdc__DOT__dut__DOT__data_reg 
                            = vlSelfRef.tb_fdc__DOT__bus_din;
                        if (((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__drq) 
                             & (0x0bU == (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__mode)))) {
                            __Vdly__tb_fdc__DOT__media_req = 1U;
                            __Vdly__tb_fdc__DOT__media_wr = 1U;
                            vlSelfRef.tb_fdc__DOT__media_addr 
                                = (0x07ffffffU & (vlSelfRef.tb_fdc__DOT__dut__DOT__track_base 
                                                  + (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__position)));
                            vlSelfRef.tb_fdc__DOT__media_wdata 
                                = vlSelfRef.tb_fdc__DOT__bus_din;
                        }
                    } else {
                        vlSelfRef.tb_fdc__DOT__dut__DOT__sector 
                            = vlSelfRef.tb_fdc__DOT__bus_din;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_fdc__DOT__bus_addr))) {
                    vlSelfRef.tb_fdc__DOT__dut__DOT__track 
                        = vlSelfRef.tb_fdc__DOT__bus_din;
                } else {
                    vlSelfRef.tb_fdc__DOT__dut__DOT__irq = 0U;
                    if ((0x00000080U & (IData)(vlSelfRef.tb_fdc__DOT__bus_din))) {
                        if ((0x00000040U & (IData)(vlSelfRef.tb_fdc__DOT__bus_din))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_fdc__DOT__bus_din) 
                                          >> 5U)))) {
                                if ((0x00000010U & (IData)(vlSelfRef.tb_fdc__DOT__bus_din))) {
                                    __Vdly__tb_fdc__DOT__dut__DOT__mode = 0x0dU;
                                    __Vdly__tb_fdc__DOT__dut__DOT__span = 0U;
                                    __Vdly__tb_fdc__DOT__dut__DOT__drq = 0U;
                                    vlSelfRef.tb_fdc__DOT__dut__DOT__irq 
                                        = (1U & (IData)(vlSelfRef.tb_fdc__DOT__bus_din));
                                    vlSelfRef.tb_fdc__DOT__dut__DOT__status = 0U;
                                }
                            }
                        } else if ((0x00000010U & (IData)(vlSelfRef.tb_fdc__DOT__bus_din))) {
                            __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__track_and_side 
                                = (((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__physical_track) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSelfRef.tb_fdc__DOT__bus_din) 
                                               >> 3U)));
                            __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__bytes_per_track 
                                = vlSelfRef.tb_fdc__DOT__track_size;
                            __Vdly__tb_fdc__DOT__dut__DOT__mode 
                                = (0x0000000fU & ((IData)(vlSelfRef.tb_fdc__DOT__bus_din) 
                                                  >> 4U));
                            __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__product 
                                = ((IData)(__Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__bytes_per_track) 
                                   * (IData)(__Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__track_and_side));
                            __Vdly__tb_fdc__DOT__dut__DOT__position = 0U;
                            __Vdly__tb_fdc__DOT__dut__DOT__span 
                                = vlSelfRef.tb_fdc__DOT__track_size;
                            vlSelfRef.tb_fdc__DOT__dut__DOT__status = 3U;
                            __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__Vfuncout 
                                = (0x07ffffffU & __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__product);
                            __Vdly__tb_fdc__DOT__dut__DOT__track_base 
                                = __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__58__Vfuncout;
                            if ((9U == (0x0000000fU 
                                        & ((IData)(vlSelfRef.tb_fdc__DOT__bus_din) 
                                           >> 4U)))) {
                                __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__track_and_side 
                                    = (((IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__physical_track) 
                                        << 1U) | (1U 
                                                  & ((IData)(vlSelfRef.tb_fdc__DOT__bus_din) 
                                                     >> 3U)));
                                __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__bytes_per_track 
                                    = vlSelfRef.tb_fdc__DOT__track_size;
                                __Vdly__tb_fdc__DOT__dut__DOT__drq = 0U;
                                __Vdly__tb_fdc__DOT__media_req = 1U;
                                __Vdly__tb_fdc__DOT__media_wr = 0U;
                                __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__product 
                                    = ((IData)(__Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__bytes_per_track) 
                                       * (IData)(__Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__track_and_side));
                                __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__Vfuncout 
                                    = (0x07ffffffU 
                                       & __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__product);
                                vlSelfRef.tb_fdc__DOT__media_addr 
                                    = __Vfunc_tb_fdc__DOT__dut__DOT__image_track_offset__59__Vfuncout;
                            } else {
                                __Vdly__tb_fdc__DOT__dut__DOT__drq = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.tb_fdc__DOT__bus_din) 
                                         >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_fdc__DOT__bus_din) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tb_fdc__DOT__bus_din))) {
                                __Vdly__tb_fdc__DOT__dut__DOT__mode = 1U;
                                __Vdly__tb_fdc__DOT__dut__DOT__physical_track 
                                    = vlSelfRef.tb_fdc__DOT__dut__DOT__data_reg;
                                vlSelfRef.tb_fdc__DOT__dut__DOT__irq = 1U;
                                vlSelfRef.tb_fdc__DOT__dut__DOT__track 
                                    = vlSelfRef.tb_fdc__DOT__dut__DOT__data_reg;
                                vlSelfRef.tb_fdc__DOT__dut__DOT__status 
                                    = ((0U == (IData)(vlSelfRef.tb_fdc__DOT__dut__DOT__data_reg))
                                        ? 4U : 0U);
                            } else {
                                __Vdly__tb_fdc__DOT__dut__DOT__mode = 0U;
                                __Vdly__tb_fdc__DOT__dut__DOT__physical_track = 0U;
                                vlSelfRef.tb_fdc__DOT__dut__DOT__track = 0U;
                                vlSelfRef.tb_fdc__DOT__dut__DOT__irq = 1U;
                                vlSelfRef.tb_fdc__DOT__dut__DOT__status = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_fdc__DOT__media_rdata = __Vdly__tb_fdc__DOT__media_rdata;
    vlSelfRef.tb_fdc__DOT__dut__DOT__span = __Vdly__tb_fdc__DOT__dut__DOT__span;
    vlSelfRef.tb_fdc__DOT__dut__DOT__position = __Vdly__tb_fdc__DOT__dut__DOT__position;
    vlSelfRef.tb_fdc__DOT__dut__DOT__track_base = __Vdly__tb_fdc__DOT__dut__DOT__track_base;
    vlSelfRef.tb_fdc__DOT__media_wr = __Vdly__tb_fdc__DOT__media_wr;
    vlSelfRef.tb_fdc__DOT__media_ack = (((IData)(__Vdly__tb_fdc__DOT__media_ack) 
                                         & (IData)(__VdlyMask__tb_fdc__DOT__media_ack)) 
                                        | ((IData)(vlSelfRef.tb_fdc__DOT__media_ack) 
                                           & (~ (IData)(__VdlyMask__tb_fdc__DOT__media_ack))));
    __VdlyMask__tb_fdc__DOT__media_ack = 0U;
    vlSelfRef.tb_fdc__DOT__dut__DOT__mode = __Vdly__tb_fdc__DOT__dut__DOT__mode;
    vlSelfRef.tb_fdc__DOT__dut__DOT__bus_seen = __Vdly__tb_fdc__DOT__dut__DOT__bus_seen;
    vlSelfRef.tb_fdc__DOT__media_req = __Vdly__tb_fdc__DOT__media_req;
    vlSelfRef.tb_fdc__DOT__dut__DOT__data_reg = __Vdly__tb_fdc__DOT__dut__DOT__data_reg;
    vlSelfRef.tb_fdc__DOT__dut__DOT__physical_track 
        = __Vdly__tb_fdc__DOT__dut__DOT__physical_track;
    vlSelfRef.tb_fdc__DOT__dut__DOT__drq = __Vdly__tb_fdc__DOT__dut__DOT__drq;
}

void Vtb_fdc___024root___timing_ready(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___timing_ready\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready("@(posedge tb_fdc.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3ae90d7a__0.ready("@(negedge tb_fdc.clk)");
    }
}

void Vtb_fdc___024root___timing_resume(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___timing_resume\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h3ae90dbb__0.moveToResumeQueue(
                                                          "@(posedge tb_fdc.clk)");
    vlSelfRef.__VtrigSched_h3ae90d7a__0.moveToResumeQueue(
                                                          "@(negedge tb_fdc.clk)");
    vlSelfRef.__VtrigSched_h3ae90dbb__0.resume("@(posedge tb_fdc.clk)");
    vlSelfRef.__VtrigSched_h3ae90d7a__0.resume("@(negedge tb_fdc.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fdc___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fdc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_fdc___024root___eval_phase__act(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_phase__act\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.tb_fdc__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0)) 
                                                          << 2U) 
                                                         | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_fdc__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0 
            = vlSelfRef.tb_fdc__DOT__clk;
    }
    Vtb_fdc___024root___timing_ready(vlSelf);
    Vtb_fdc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fdc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_fdc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fdc___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_fdc___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_fdc___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_fdc___024root___eval_phase__inact(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_phase__inact\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_fdc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fdc___024root___eval_phase__nba(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_phase__nba\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fdc___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_fdc___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_fdc___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vtb_fdc___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_fdc___024root___eval(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fdc___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_fdc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_fdc___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_fdc___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_fdc___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0(Vtb_fdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root____VbeforeTrig_h3ae90dbb__0\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_fdc__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_fdc__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0 
        = vlSelfRef.tb_fdc__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3ae90d7a__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fdc___024root____VbeforeTrig_h3ae90d7a__0(Vtb_fdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root____VbeforeTrig_h3ae90d7a__0\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_fdc__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_fdc__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0 
        = vlSelfRef.tb_fdc__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ae90dbb__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3ae90d7a__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_fdc___024root___eval_debug_assertions(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_debug_assertions\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

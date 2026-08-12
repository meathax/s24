// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video_timing_sync.h for the primary calling header

#include "Vtb_video_timing_sync__pch.h"

VlCoroutine Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__0(Vtb_video_timing_sync___024root* vlSelf);
VlCoroutine Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__1(Vtb_video_timing_sync___024root* vlSelf);

void Vtb_video_timing_sync___024root___eval_initial(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_initial\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_video_timing_sync___024root____VbeforeTrig_h8a4daf0d__0(Vtb_video_timing_sync___024root* vlSelf, const char* __VeventDescription);
void Vtb_video_timing_sync___024root____VbeforeTrig_h8a4dafcc__0(Vtb_video_timing_sync___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__0(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_video_timing_sync__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_video_timing_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    tb_video_timing_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_video_timing_sync__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_video_timing_sync___024root____VbeforeTrig_h8a4daf0d__0(vlSelf, 
                                                                    "@(posedge tb_video_timing_sync.clk)");
        co_await vlSelfRef.__VtrigSched_h8a4daf0d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_video_timing_sync.clk)", 
                                                             "verif\\tb_video_timing_sync.sv", 
                                                             70);
        tb_video_timing_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_video_timing_sync__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_video_timing_sync___024root____VbeforeTrig_h8a4dafcc__0(vlSelf, 
                                                                "@(negedge tb_video_timing_sync.clk)");
    co_await vlSelfRef.__VtrigSched_h8a4dafcc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_video_timing_sync.clk)", 
                                                         "verif\\tb_video_timing_sync.sv", 
                                                         71);
    vlSelfRef.tb_video_timing_sync__DOT__reset = 0U;
    co_return;
}

VlCoroutine Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__1(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "verif\\tb_video_timing_sync.sv", 
                                             18);
        vlSelfRef.tb_video_timing_sync__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_video_timing_sync__DOT__clk)));
    }
    co_return;
}

bool Vtb_video_timing_sync___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___trigger_anySet__act\n"); );
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

void Vtb_video_timing_sync___024root___nba_sequent__TOP__0(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___nba_sequent__TOP__0\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__tb_video_timing_sync__DOT__hcount;
    __Vdly__tb_video_timing_sync__DOT__hcount = 0;
    SData/*9:0*/ __Vdly__tb_video_timing_sync__DOT__vcount;
    __Vdly__tb_video_timing_sync__DOT__vcount = 0;
    // Body
    __Vdly__tb_video_timing_sync__DOT__hcount = vlSelfRef.tb_video_timing_sync__DOT__hcount;
    __Vdly__tb_video_timing_sync__DOT__vcount = vlSelfRef.tb_video_timing_sync__DOT__vcount;
    if ((1U & (~ (IData)(vlSelfRef.tb_video_timing_sync__DOT__reset)))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((((0x01f0U <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount)) 
                                  != (0x01f0U <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:28: Assertion failed in %m: hblank phase\n",3, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("verif\\tb_video_timing_sync.sv", 28, "", false);
                }
                if (VL_UNLIKELY((((0x0190U <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)) 
                                  != (0x0190U <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:29: Assertion failed in %m: mode-1 vblank phase at %0d\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',10,(IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount));
                    VL_STOP_MT("verif\\tb_video_timing_sync.sv", 29, "", false);
                }
                if (VL_UNLIKELY((((1U & (~ ((0x021bU 
                                             <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount)) 
                                            & (0x024bU 
                                               > (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount))))) 
                                  != (1U & (~ ((0x021bU 
                                                <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount)) 
                                               & (0x024bU 
                                                  > (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:31: Assertion failed in %m: horizontal sync phase at %0d\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',10,(IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount));
                    VL_STOP_MT("verif\\tb_video_timing_sync.sv", 31, "", false);
                }
                if (VL_UNLIKELY((((1U & (~ ((0x018bU 
                                             <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)) 
                                            & (0x018fU 
                                               > (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount))))) 
                                  != (1U & (~ ((0x018bU 
                                                <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)) 
                                               & (0x018fU 
                                                  > (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:33: Assertion failed in %m: vertical sync phase at %0d\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',10,(IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount));
                    VL_STOP_MT("verif\\tb_video_timing_sync.sv", 33, "", false);
                }
            }
        }
        if ((((0x018bU <= (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)) 
              & (0x018fU > (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount))) 
             & (0x0190U > (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)))) {
            vlSelfRef.tb_video_timing_sync__DOT__sync_enabled_pixels 
                = ((IData)(1U) + vlSelfRef.tb_video_timing_sync__DOT__sync_enabled_pixels);
        }
        if (((0x01f0U > (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount)) 
             & (0x0190U > (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)))) {
            vlSelfRef.tb_video_timing_sync__DOT__line_active_pixels 
                = ((IData)(1U) + vlSelfRef.tb_video_timing_sync__DOT__line_active_pixels);
        }
        vlSelfRef.tb_video_timing_sync__DOT__pixels 
            = ((IData)(1U) + vlSelfRef.tb_video_timing_sync__DOT__pixels);
        if ((0x028fU == (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount))) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
                if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_video_timing_sync__DOT__hsync_tick)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:41: Assertion failed in %m: missing line tick\n",3, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("verif\\tb_video_timing_sync.sv", 41, "", false);
                    }
                }
            }
            vlSelfRef.tb_video_timing_sync__DOT__lines 
                = ((IData)(1U) + vlSelfRef.tb_video_timing_sync__DOT__lines);
            if ((0x0190U > (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount))) {
                if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
                    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                        if (VL_UNLIKELY(((0x000001f0U 
                                          != vlSelfRef.tb_video_timing_sync__DOT__line_active_pixels)))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:45: Assertion failed in %m: mode-1 visible line %0d has %0d active pixels\n",5, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',10,(IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount)
                                         , '~',32,vlSelfRef.tb_video_timing_sync__DOT__line_active_pixels);
                            VL_STOP_MT("verif\\tb_video_timing_sync.sv", 45, "", false);
                        }
                    }
                }
                vlSelfRef.tb_video_timing_sync__DOT__visible_lines 
                    = ((IData)(1U) + vlSelfRef.tb_video_timing_sync__DOT__visible_lines);
            } else if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
                if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                    if (VL_UNLIKELY(((0U != vlSelfRef.tb_video_timing_sync__DOT__line_active_pixels)))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:50: Assertion failed in %m: mode-1 blank line %0d emitted active pixels\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',10,(IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount));
                        VL_STOP_MT("verif\\tb_video_timing_sync.sv", 50, "", false);
                    }
                }
            }
            vlSelfRef.tb_video_timing_sync__DOT__line_active_pixels = 0U;
        }
        if (VL_UNLIKELY(((0x00000200U == vlSelfRef.tb_video_timing_sync__DOT__lines)))) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
                if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                    if (VL_UNLIKELY(((0x00052000U != vlSelfRef.tb_video_timing_sync__DOT__pixels)))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:57: Assertion failed in %m: mode-1 raster size %0d\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,vlSelfRef.tb_video_timing_sync__DOT__pixels);
                        VL_STOP_MT("verif\\tb_video_timing_sync.sv", 57, "", false);
                    }
                    if (VL_UNLIKELY(((0x00000190U != vlSelfRef.tb_video_timing_sync__DOT__visible_lines)))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:59: Assertion failed in %m: mode-1 visible line count %0d\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,vlSelfRef.tb_video_timing_sync__DOT__visible_lines);
                        VL_STOP_MT("verif\\tb_video_timing_sync.sv", 59, "", false);
                    }
                    if (VL_UNLIKELY(((0x00000a40U != vlSelfRef.tb_video_timing_sync__DOT__sync_enabled_pixels)))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:61: Assertion failed in %m: mode-1 sync overlap pixels %0d\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,vlSelfRef.tb_video_timing_sync__DOT__sync_enabled_pixels);
                        VL_STOP_MT("verif\\tb_video_timing_sync.sv", 61, "", false);
                    }
                    if (VL_UNLIKELY(((0x01ffU != (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_video_timing_sync.sv:62: Assertion failed in %m: mode-1 terminal line %0d\n",4, 'M',vlSymsp->name(),"tb_video_timing_sync", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',10,(IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount));
                        VL_STOP_MT("verif\\tb_video_timing_sync.sv", 62, "", false);
                    }
                }
            }
            VL_WRITEF_NX("PASS 315-5292 mode-1 656x512 raster, late blanking, and sync overlap\n",0);
            VL_FINISH_MT("verif\\tb_video_timing_sync.sv", 64, "");
        }
    }
    if (vlSelfRef.tb_video_timing_sync__DOT__reset) {
        __Vdly__tb_video_timing_sync__DOT__hcount = 0U;
        __Vdly__tb_video_timing_sync__DOT__vcount = 0U;
        vlSelfRef.tb_video_timing_sync__DOT__hsync_tick = 0U;
    } else {
        vlSelfRef.tb_video_timing_sync__DOT__hsync_tick = 0U;
        if ((0x028fU == (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount))) {
            __Vdly__tb_video_timing_sync__DOT__vcount 
                = ((0x01ffU == (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount))
                    ? 0U : (0x000003ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_video_timing_sync__DOT__vcount))));
            __Vdly__tb_video_timing_sync__DOT__hcount = 0U;
            vlSelfRef.tb_video_timing_sync__DOT__hsync_tick = 1U;
        } else {
            __Vdly__tb_video_timing_sync__DOT__hcount 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_video_timing_sync__DOT__hcount)));
        }
    }
    vlSelfRef.tb_video_timing_sync__DOT__hcount = __Vdly__tb_video_timing_sync__DOT__hcount;
    vlSelfRef.tb_video_timing_sync__DOT__vcount = __Vdly__tb_video_timing_sync__DOT__vcount;
}

void Vtb_video_timing_sync___024root___timing_ready(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___timing_ready\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8a4daf0d__0.ready("@(posedge tb_video_timing_sync.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8a4dafcc__0.ready("@(negedge tb_video_timing_sync.clk)");
    }
}

void Vtb_video_timing_sync___024root___timing_resume(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___timing_resume\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h8a4daf0d__0.moveToResumeQueue(
                                                          "@(posedge tb_video_timing_sync.clk)");
    vlSelfRef.__VtrigSched_h8a4dafcc__0.moveToResumeQueue(
                                                          "@(negedge tb_video_timing_sync.clk)");
    vlSelfRef.__VtrigSched_h8a4daf0d__0.resume("@(posedge tb_video_timing_sync.clk)");
    vlSelfRef.__VtrigSched_h8a4dafcc__0.resume("@(negedge tb_video_timing_sync.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_video_timing_sync___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_video_timing_sync___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_video_timing_sync___024root___eval_phase__act(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_phase__act\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_video_timing_sync__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_video_timing_sync__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0 
            = vlSelfRef.tb_video_timing_sync__DOT__clk;
    }
    Vtb_video_timing_sync___024root___timing_ready(vlSelf);
    Vtb_video_timing_sync___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_video_timing_sync___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_video_timing_sync___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_video_timing_sync___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_video_timing_sync___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_video_timing_sync___024root___eval_phase__inact(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_phase__inact\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("verif\\tb_video_timing_sync.sv", 8, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_video_timing_sync___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_video_timing_sync___024root___eval_phase__nba(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_phase__nba\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_video_timing_sync___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_video_timing_sync___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtb_video_timing_sync___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_video_timing_sync___024root___eval(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_video_timing_sync___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verif\\tb_video_timing_sync.sv", 8, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("verif\\tb_video_timing_sync.sv", 8, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_video_timing_sync___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("verif\\tb_video_timing_sync.sv", 8, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_video_timing_sync___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_video_timing_sync___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_video_timing_sync___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_video_timing_sync___024root____VbeforeTrig_h8a4daf0d__0(Vtb_video_timing_sync___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root____VbeforeTrig_h8a4daf0d__0\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_video_timing_sync__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_video_timing_sync__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0 
        = vlSelfRef.tb_video_timing_sync__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8a4daf0d__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8a4dafcc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_video_timing_sync___024root____VbeforeTrig_h8a4dafcc__0(Vtb_video_timing_sync___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root____VbeforeTrig_h8a4dafcc__0\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_video_timing_sync__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_video_timing_sync__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0 
        = vlSelfRef.tb_video_timing_sync__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8a4daf0d__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8a4dafcc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_video_timing_sync___024root___eval_debug_assertions(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_debug_assertions\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

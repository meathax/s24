// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video_timing_sync.h for the primary calling header

#include "Vtb_video_timing_sync__pch.h"

void Vtb_video_timing_sync___024root___timing_ready(Vtb_video_timing_sync___024root* vlSelf);

VL_ATTR_COLD void Vtb_video_timing_sync___024root___eval_static(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_static\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_video_timing_sync__DOT__clk = 0U;
        vlSelfRef.tb_video_timing_sync__DOT__reset = 1U;
        vlSelfRef.tb_video_timing_sync__DOT__pixels = 0U;
        vlSelfRef.tb_video_timing_sync__DOT__lines = 0U;
        vlSelfRef.tb_video_timing_sync__DOT__visible_lines = 0U;
        vlSelfRef.tb_video_timing_sync__DOT__line_active_pixels = 0U;
        vlSelfRef.tb_video_timing_sync__DOT__sync_enabled_pixels = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0 = 0U;
    Vtb_video_timing_sync___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_video_timing_sync___024root___eval_final(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_final\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_video_timing_sync___024root___eval_settle(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___eval_settle\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtb_video_timing_sync___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video_timing_sync___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_video_timing_sync___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_video_timing_sync.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_video_timing_sync.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_video_timing_sync___024root___ctor_var_reset(Vtb_video_timing_sync___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_timing_sync___024root___ctor_var_reset\n"); );
    Vtb_video_timing_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_video_timing_sync__DOT__hcount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3808210194844860717ull);
    vlSelf->tb_video_timing_sync__DOT__vcount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3818561146180959121ull);
    vlSelf->tb_video_timing_sync__DOT__hsync_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6934758766454195670ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_video_timing_sync__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

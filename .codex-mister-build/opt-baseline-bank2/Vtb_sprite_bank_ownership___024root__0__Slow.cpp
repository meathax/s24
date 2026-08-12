// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sprite_bank_ownership.h for the primary calling header

#include "Vtb_sprite_bank_ownership__pch.h"

void Vtb_sprite_bank_ownership___024root___timing_ready(Vtb_sprite_bank_ownership___024root* vlSelf);

VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___eval_static(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_static\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_sprite_bank_ownership__DOT__clk = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__reset = 1U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__ce_pixel = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__hcount = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__vcount = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0 = 0U;
    Vtb_sprite_bank_ownership___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___eval_final(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_final\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sprite_bank_ownership___024root___eval_phase__stl(Vtb_sprite_bank_ownership___024root* vlSelf);

VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___eval_settle(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_settle\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sprite_bank_ownership___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/.codex-mister-build/opt-baseline-bank2\\tb_sprite_bank_ownership.sv", 8, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_sprite_bank_ownership___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_sprite_bank_ownership___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sprite_bank_ownership___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_sprite_bank_ownership___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___stl_sequent__TOP__0(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___stl_sequent__TOP__0\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag;
    tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag = 0;
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line0_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line0_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line1_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line1_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line2_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line2_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line3_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line3_display_q[__Vi0] = 0;
    }
    CData/*1:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__display_lane;
    tb_sprite_bank_ownership__DOT__dut__DOT__display_lane = 0;
    VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q;
    VL_ZERO_W(128, tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q);
    VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q;
    VL_ZERO_W(81, tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q);
    IData/*31:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__line_phys;
    tb_sprite_bank_ownership__DOT__dut__DOT__line_phys = 0;
    IData/*16:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__wanted_word;
    tb_sprite_bank_ownership__DOT__dut__DOT__wanted_word = 0;
    CData/*3:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__wanted_nibble;
    tb_sprite_bank_ownership__DOT__dut__DOT__wanted_nibble = 0;
    CData/*3:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__current_pen;
    tb_sprite_bank_ownership__DOT__dut__DOT__current_pen = 0;
    CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__mapped_color;
    tb_sprite_bank_ownership__DOT__dut__DOT__mapped_color = 0;
    IData/*16:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__line_value;
    tb_sprite_bank_ownership__DOT__dut__DOT__line_value = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_first;
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_first = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_last;
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_last = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__d2;
    tb_sprite_bank_ownership__DOT__dut__DOT__d2 = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__d3;
    tb_sprite_bank_ownership__DOT__dut__DOT__d3 = 0;
    IData/*16:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__tile_base;
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_base = 0;
    CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__tile_x;
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_x = 0;
    CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__tile_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_y = 0;
    CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__within_x;
    tb_sprite_bank_ownership__DOT__dut__DOT__within_x = 0;
    CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__within_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__within_y = 0;
    IData/*17:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__word_calc;
    tb_sprite_bank_ownership__DOT__dut__DOT__word_calc = 0;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__tile_row_offset;
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_row_offset = 0;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal;
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__wanted_data_word;
    tb_sprite_bank_ownership__DOT__dut__DOT__wanted_data_word = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_w1;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_w1 = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_w4;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_w4 = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w1;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w1 = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w4;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w4 = 0;
    SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_zoomy_step;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_zoomy_step = 0;
    IData/*19:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_height_sum;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_height_sum = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_height;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_height = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_origin_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_origin_y = 0;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_bottom_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_bottom_y = 0;
    CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_vertical_allowed;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_vertical_allowed = 0;
    SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_zoomy_step;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_zoomy_step = 0;
    IData/*19:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height_sum;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height_sum = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_origin_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_origin_y = 0;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_bottom_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_bottom_y = 0;
    CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_vertical_allowed;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_vertical_allowed = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w1;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w1 = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w4;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w4 = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w1;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w1 = 0;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w4;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w4 = 0;
    SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_zoomy_step;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_zoomy_step = 0;
    SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_zoomy_step;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_zoomy_step = 0;
    IData/*19:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height_sum;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height_sum = 0;
    IData/*19:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height_sum;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height_sum = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_origin_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_origin_y = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_origin_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_origin_y = 0;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_bottom_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_bottom_y = 0;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_bottom_y;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_bottom_y = 0;
    CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_vertical_allowed;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_vertical_allowed = 0;
    CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_vertical_allowed;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_vertical_allowed = 0;
    CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan2_active;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_active = 0;
    CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan3_active;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_active = 0;
    CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_advance;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_advance = 0;
    VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor;
    VL_ZERO_W(128, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor);
    VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip;
    VL_ZERO_W(81, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip);
    IData/*31:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_first;
    tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_first = 0;
    SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_last;
    tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_last = 0;
    IData/*18:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder;
    tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder = 0;
    IData/*18:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x2;
    tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x2 = 0;
    IData/*18:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x3;
    tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x3 = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data);
    CData/*2:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index = 0;
    CData/*7:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data);
    CData/*3:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pen;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pen = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pair;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pair = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data);
    CData/*2:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data);
    CData/*2:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data);
    CData/*3:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data);
    CData/*2:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__data);
    SData/*15:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__data);
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_append_pos 
        = ((0x0400U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_count))
            ? (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_count)
            : 0x03ffU);
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_descriptor[0U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_descriptor[1U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_descriptor[2U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[5U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[4U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_descriptor[3U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[6U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[5U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_zoomy_step 
        = ((0U == (0x000000ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                  >> 1U))) ? 0x00000040U
            : (0x000001ffU & ((IData)(1U) + (0x000000ffU 
                                             & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                                >> 1U)))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__total_columns 
        = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_tiles) 
           << 3U);
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__total_rows 
        = (0x000007ffU & ((IData)(8U) << (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_y_shift)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_write_slot 
        = (0x00000fffU & ((0x1000U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_count))
                           ? (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_count)
                           : (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_head)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__x_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__zoomx_step) 
                          + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__x_accum)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__y_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__zoomy_step) 
                          + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__y_accum)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_right_x 
        = (0x00003fffU & ((((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_x)) 
                           + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_output_width)) 
                          - (IData)(1U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__frame_boundary 
        = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__ce_pixel) 
           & ((0x028fU == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount)) 
              & (0x017fU == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__vcount))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 0U;
    if ((((~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid)) 
          & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling))) 
         & (0U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
               >> 1U)) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                             >> 1U))) & (1U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 1U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
               >> 2U)) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                             >> 2U))) & (2U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 2U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
               >> 3U)) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                             >> 3U))) & (3U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 3U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
               >> 4U)) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                             >> 4U))) & (4U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 4U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
               >> 5U)) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                             >> 5U))) & (5U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 5U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
               >> 6U)) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                             >> 6U))) & (6U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 6U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
               >> 7U)) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                             >> 7U))) & (7U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = 7U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_width_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, 
                                                               (((0x40000000U 
                                                                  & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[2U])
                                                                  ? 
                                                                 (0U 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                                                      >> 9U)))
                                                                  : 
                                                                 (0U 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                                                      >> 1U))))
                                                                 ? 0x00000040U
                                                                 : 
                                                                (0x000001ffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (0x000000ffU 
                                                                     & ((0x40000000U 
                                                                         & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[2U])
                                                                         ? 
                                                                        ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                                                          << 0x00000017U) 
                                                                         | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                                                            >> 9U))
                                                                         : 
                                                                        ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                                                          << 0x0000001fU) 
                                                                         | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[3U] 
                                                                            >> 1U))))))), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[5U] 
                                                                    >> 0x0000000dU))))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_origin_x 
        = (0x00001fffU & (((0x00001000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[5U]) 
                           | (0x00000fffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[5U] 
                                             >> 1U))) 
                          - (IData)(8U)));
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_first = 0x017fU;
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_last = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[2U])) {
        if ((0x00002000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[2U])) {
            tb_sprite_bank_ownership__DOT__dut__DOT__clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            tb_sprite_bank_ownership__DOT__dut__DOT__clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__vertical_allowed 
                = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__clip_last))));
        } else {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__vertical_allowed 
                = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[0U] 
                                         >> 0x00000010U))));
        }
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[0U]) 
                              - (IData)(8U)));
    } else {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x = 0x000001efU;
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_write_data[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_top) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_left)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_bottom) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_right))))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_write_data[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_top) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_left)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_bottom) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_right))))) 
                   >> 0x00000020U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_write_data[2U] 
        = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_valid) 
            << 0x00000010U) | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_flags));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[4U] 
                           >> 0x00000010U)) | (0x00000fffU 
                                               & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x00000011U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[0U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[1U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[2U] 
        = (0x0001ffffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[2U]);
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_min_x = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_max_x = 0x01efU;
    tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_first = 0x017fU;
    tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_last = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[2U])) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_min_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[1U]) 
                              - (IData)(8U)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_max_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[0U]) 
                              - (IData)(8U)));
        if ((0x00002000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[2U])) {
            tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_vertical_allowed 
                = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_last))));
        } else {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_vertical_allowed 
                = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip[0U] 
                                         >> 0x00000010U))));
        }
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line = 1U;
    if ((0x01a6U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__vcount))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line = 0U;
    } else if ((0x01a7U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__vcount))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line = 1U;
    } else if ((0x017fU > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__vcount))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line 
            = (0x000003ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__vcount)));
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 0U;
    if ((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
          & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling))) 
         & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[0U] 
            == (0x000001ffU & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
           >> 1U) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                        >> 1U))) & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[1U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 1U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
           >> 2U) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                        >> 2U))) & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[2U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 2U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
           >> 3U) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                        >> 3U))) & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[3U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 3U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
           >> 4U) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                        >> 4U))) & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[4U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 4U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
           >> 5U) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                        >> 5U))) & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[5U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 5U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
           >> 6U) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                        >> 6U))) & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[6U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 6U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_valid) 
           >> 7U) & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling) 
                        >> 7U))) & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[7U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = 7U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = 1U;
    }
    if ((0x028fU == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_read_addr 
            = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank) 
               << 7U);
        tb_sprite_bank_ownership__DOT__dut__DOT__display_lane = 0U;
    } else {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_read_addr 
            = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank) 
                << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount) 
                                          >> 2U) + 
                                         ((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount)))
                                           ? 1U : 0U))));
        tb_sprite_bank_ownership__DOT__dut__DOT__display_lane 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount)));
    }
    tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder 
        = ((0x0007fffcU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_remainder 
                           << 2U)) | (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_dividend 
                                            >> 0x10U)));
    tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x2 
        = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_divisor) 
           << 1U);
    tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x3 
        = (0x0007ffffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_divisor) 
                          + tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x2));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient 
        = (0x0003fffcU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_quotient 
                          << 2U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_remainder 
        = tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder;
    if ((tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder 
         >= tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x3)) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_remainder 
            = (0x0007ffffU & (tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder 
                              - tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x3));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient 
            = (3U | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient);
    } else if ((tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder 
                >= tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x2)) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_remainder 
            = (0x0007ffffU & (tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder 
                              - tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__divisor_x2));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient 
            = (2U | (0x0003fffcU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient));
    } else if ((tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder 
                >= (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_divisor))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_remainder 
            = (0x0007ffffU & (tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_step__DOT__shifted_remainder 
                              - (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_divisor)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient 
            = (1U | (0x0003fffcU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient));
    }
    tb_sprite_bank_ownership__DOT__dut__DOT__line3_display_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line3_display_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line3_display_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line3_display_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line2_display_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line2_display_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line2_display_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line2_display_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line1_display_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line1_display_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line1_display_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line1_display_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line0_display_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line0_display_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line0_display_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a;
    tb_sprite_bank_ownership__DOT__dut__DOT__line0_display_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a;
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__cache_ack_pending) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_q[0U];
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[1U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_q[1U];
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[2U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_q[2U];
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[3U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_q[3U];
    } else {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U] = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[1U] = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[2U] = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[3U] = 0U;
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[0U] 
        = ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                           << 1U)) | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[1U] 
        = (0x00003fffU & ((IData)(1U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[2U] 
        = (0x00003fffU & ((IData)(2U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[3U] 
        = (0x00003fffU & ((IData)(3U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x 
        = (0x00001fffU & (((0x000001ffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[1U]) 
                           - (IData)(8U)) & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_clip[2U] 
                                                           >> 0x00000010U))))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[0U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[1U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[2U] 
        = (0x0001ffffU & ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[5U] 
                           << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[4U] 
                                              >> 0x00000011U)));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__data[1U]);
    tb_sprite_bank_ownership__DOT__dut__DOT__d2 = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__8__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__Vfuncout 
        = (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__data[1U] 
           >> 0x00000010U);
    tb_sprite_bank_ownership__DOT__dut__DOT__d3 = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__9__Vfuncout;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_base 
        = (0x00003fffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__d3));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_index 
        = (7U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_base));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_hit 
        = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_valid) 
            >> (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_index)) 
           & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_tags
              [vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_index] 
              == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_base)));
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_base 
        = (0x0001fff0U & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__d2) 
                          << 4U));
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_y 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_row) 
                          >> 3U));
    tb_sprite_bank_ownership__DOT__dut__DOT__within_y 
        = (7U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_row));
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_x 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_column) 
                          >> 3U));
    tb_sprite_bank_ownership__DOT__dut__DOT__within_x 
        = (7U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_column));
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__flipy) {
        tb_sprite_bank_ownership__DOT__dut__DOT__tile_y 
            = ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
               ^ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_y_mask));
        tb_sprite_bank_ownership__DOT__dut__DOT__within_y 
            = (7U & ((IData)(7U) - (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_y)));
    }
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_row_offset 
        = ((4U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift))
            ? ((2U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift))
                ? ((1U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift))
                    ? (0x00003f80U & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
                                      << 7U)) : ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
                                                 << 6U))
                : ((1U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift))
                    ? ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
                       << 5U) : ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
                                 << 4U))) : ((2U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift))
                                                  ? 
                                                 ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
                                                  << 3U)
                                                  : 
                                                 ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
                                                  << 2U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift))
                                                  ? 
                                                 ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y) 
                                                  << 1U)
                                                  : (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_y))));
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__flipx) {
        tb_sprite_bank_ownership__DOT__dut__DOT__tile_x 
            = (0x000000ffU & (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__size_x_tiles) 
                               - (IData)(1U)) - (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_x)));
        tb_sprite_bank_ownership__DOT__dut__DOT__within_x 
            = (7U & ((IData)(7U) - (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_x)));
    }
    tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal 
        = (0x00003fffU & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_row_offset) 
                          + (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_x)));
    tb_sprite_bank_ownership__DOT__dut__DOT__word_calc 
        = (0x0003ffffU & (((tb_sprite_bank_ownership__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_x) 
                                 >> 2U))));
    tb_sprite_bank_ownership__DOT__dut__DOT__wanted_word 
        = (0x0001ffffU & tb_sprite_bank_ownership__DOT__dut__DOT__word_calc);
    tb_sprite_bank_ownership__DOT__dut__DOT__wanted_nibble 
        = (0x0000000cU & ((~ (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_x)) 
                          << 2U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag 
        = (0x00003fffU & (tb_sprite_bank_ownership__DOT__dut__DOT__wanted_word 
                          >> 3U));
    tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_lookup_tag;
    if ((0x00000010U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)))) {
                        tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag 
                            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
                    tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag 
                        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
                    tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag 
                        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
                tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_base;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)))) {
                tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__list_index;
            }
        }
    }
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index 
        = (7U & tb_sprite_bank_ownership__DOT__dut__DOT__wanted_word);
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__index) 
                                                     << 4U)))));
    tb_sprite_bank_ownership__DOT__dut__DOT__wanted_data_word 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__11__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT__current_pen 
        = (0x0000000fU & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__wanted_data_word) 
                          >> (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__wanted_nibble)));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pen 
        = tb_sprite_bank_ownership__DOT__dut__DOT__current_pen;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data[0U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data[1U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data[2U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data[3U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__palette_data[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pair 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__13__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__Vfuncout 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pen))
                           ? (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pair)
                           : ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__pair) 
                              >> 8U)));
    tb_sprite_bank_ownership__DOT__dut__DOT__mapped_color 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__12__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
        = ((0U == (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__mapped_color))
            ? 0U : ((1U == (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__mapped_color))
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__mapped_color) 
                                           << 8U)) 
                                       | (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__mapped_color)))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_column;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[0U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[0U])
                  : vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[0U]));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[0U] 
        = (0x0001ffffU & (((tb_sprite_bank_ownership__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[0U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[0U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[0U] 
                          >> 3U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[0U]);
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[3U];
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[0U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[0U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[0U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[0U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[0U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[0U] 
        = ((0U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[0U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[0U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[0U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[0U]))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[1U] 
        = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[1U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[1U])
                  : vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[1U]));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[1U] 
        = (0x0001ffffU & (((tb_sprite_bank_ownership__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[1U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[1U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[1U] 
                          >> 3U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[1U]);
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[3U];
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[1U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[1U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[1U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[1U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[1U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[1U] 
        = ((0U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[1U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[1U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[1U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[1U]))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[2U] 
        = (0x000007ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[2U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[2U])
                  : vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[2U]));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[2U] 
        = (0x0001ffffU & (((tb_sprite_bank_ownership__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[2U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[2U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[2U] 
                          >> 3U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[2U]);
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[3U];
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[2U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[2U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[2U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[2U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[2U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[2U] 
        = ((0U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[2U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[2U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[2U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[2U]))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[3U] 
        = (0x000007ffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[3U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[3U])
                  : vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[3U]));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[3U] 
        = (0x0001ffffU & (((tb_sprite_bank_ownership__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[3U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[3U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[3U] 
                          >> 3U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[3U]);
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache[3U];
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[3U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[3U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[3U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[3U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[3U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[3U] 
        = ((0U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[3U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[3U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[3U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[3U]))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[0U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[1U] 
        = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[2U] 
        = (0x0001ffffU & ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[5U] 
                           << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[4U] 
                                              >> 0x00000011U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_head) 
                          + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_right_x 
        = (0x00003fffU & ((((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_origin_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_origin_x)) 
                           + (0x00001fffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_width_sum 
                                             >> 6U))) 
                          - (IData)(1U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_y)) 
                          + (0x000007ffU & ((IData)(8U) 
                                            << (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q[4U] 
                                                >> 0x0000001dU)))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_target_offset 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                          - (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_y)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_write_enable 
        = ((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__cache_ack_pending) 
             & (3U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) 
            & (0U == (0x0000c000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U]))) 
           & (~ ((0U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__list_index)) 
                 & (0U == (0x0000ffffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U])))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__list_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[2U] 
                           << 1U)) | (0x00000fffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[2U]));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_index 
        = (0x000000ffU & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag) 
                          ^ (0x0000003fU & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag) 
                                            >> 8U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[0U] 
        = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((0U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[0U] = 0ULL;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[1U] 
        = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((1U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[1U] = 0ULL;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[2U] 
        = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((2U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[2U] = 0ULL;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[3U] 
        = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x) 
                                     >> 2U)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[3U] = 0ULL;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[3U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__line_phys = 4U;
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[0U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[0U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[0U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[0U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[0U]))) 
         & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[0U] 
            >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[0U]);
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[0U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[0U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[0U])))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[0U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[0U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[0U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
                       & (0U == (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_bank_ownership__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[1U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[1U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[1U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[1U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[1U]))) 
         & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[1U] 
            >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[1U]);
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[1U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[1U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[1U])))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[1U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[1U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[1U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
                       & (1U == (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_bank_ownership__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[2U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[2U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[2U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[2U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[2U]))) 
         & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[2U] 
            >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[2U]);
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[2U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[2U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[2U])))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[2U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[2U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[2U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
                       & (2U == (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_bank_ownership__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[3U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[3U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[3U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[3U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[3U]))) 
         & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[3U] 
            >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[3U]);
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[3U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[3U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[3U])))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[3U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[3U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[3U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
                       & (3U == (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[(3U 
                                                                            & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[(3U 
                                                                        & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_bank_ownership__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_bank_ownership__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_bank_ownership__DOT__dut__DOT__line_phys))));
    }
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scrub_req) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren = 0x0fU;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[0U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[0U] = 0ULL;
        tb_sprite_bank_ownership__DOT__dut__DOT__line_phys = 4U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[1U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[1U] = 0ULL;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[2U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[2U] = 0ULL;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[3U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[3U] = 0ULL;
    }
    if ((((4U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
          | (5U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) 
         | (6U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)))) {
        if ((1U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot))) {
            __Vtemp_8[0U] = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[3U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[2U] 
                                                 >> 0x00000011U));
            __Vtemp_8[1U] = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[4U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[3U] 
                                                 >> 0x00000011U));
            __Vtemp_8[2U] = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[5U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[4U] 
                                                 >> 0x00000011U));
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[4U];
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[5U];
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[6U];
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[7U];
        } else {
            __Vtemp_8[0U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[0U];
            __Vtemp_8[1U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[1U];
            __Vtemp_8[2U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[2U];
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[2U];
            tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[3U];
        }
    } else {
        __Vtemp_8[0U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[0U];
        __Vtemp_8[1U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[1U];
        __Vtemp_8[2U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[2U];
        tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[0U];
        tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[1U];
        tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[2U];
        tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[3U];
    }
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[0U] 
        = __Vtemp_8[0U];
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[1U] 
        = __Vtemp_8[1U];
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[2U] 
        = (0x0001ffffU & __Vtemp_8[2U]);
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pair_valid 
        = ((~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot)) 
           & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid 
        = ((0U == (3U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot))) 
           & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__list_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__list_origin_y)) 
                          + (0x00001fffU & (((IData)(0x00000020U) 
                                             + VL_SHIFTL_III(20,20,32, 
                                                             ((0U 
                                                               == 
                                                               (0x000000ffU 
                                                                & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U] 
                                                                   >> 0x00000010U)))
                                                               ? 0x00000040U
                                                               : 
                                                              (0x000001ffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U] 
                                                                      >> 0x00000010U))))), 
                                                             ((IData)(3U) 
                                                              + 
                                                              (7U 
                                                               & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[2U] 
                                                                  >> 0x0000000cU))))) 
                                            >> 6U))));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_hit 
        = (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_valid
           [vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_index] 
           & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_tag
              [vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_index] 
              == (0x0000003fU & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag) 
                                 >> 8U))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_advance 
        = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid)
            ? 4U : ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pair_valid)
                     ? 2U : 1U));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__data[0U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__data[1U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__data[2U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__data[3U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__Vfuncout 
        = (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__data[0U] 
           >> 0x00000010U);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_w1 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__23__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__data[0U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__data[1U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__data[2U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__data[3U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__data[2U]);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_w4 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__24__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_w1)))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_height 
        = (0x00001fffU & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_height_sum 
                          >> 6U));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_w4)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_origin_y)) 
                          + (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_height)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y));
    if ((0x00010000U & tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[2U])) {
        tb_sprite_bank_ownership__DOT__dut__DOT__scan_vertical_allowed 
            = ((0x00002000U & tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[2U])
                ? ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_active 
        = (((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_vertical_allowed) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y))), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_bottom_y)));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__Vfuncout 
        = (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__data[0U] 
           >> 0x00000010U);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w1 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__25__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__data[2U]);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w4 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__26__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w1)))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height 
        = (0x00001fffU & (tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height_sum 
                          >> 6U));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_w4)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_origin_y)) 
                          + (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_height)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan1_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[2U])) {
        tb_sprite_bank_ownership__DOT__dut__DOT__scan1_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[2U])
                ? ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan1_active 
        = (((((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pair_valid)) 
             & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y))), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan1_bottom_y)));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__Vfuncout 
        = (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__data[0U] 
           >> 0x00000010U);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w1 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__27__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__data[2U]);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w4 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__28__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w1)))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height 
        = (0x00001fffU & (tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height_sum 
                          >> 6U));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_w4)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_origin_y)) 
                          + (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_height)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[2U])) {
        tb_sprite_bank_ownership__DOT__dut__DOT__scan2_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[2U])
                ? ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[0U] 
                                         >> 0x00000010U)))));
    }
    tb_sprite_bank_ownership__DOT__dut__DOT__scan2_active 
        = (((((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y))), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan2_bottom_y)));
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__Vfuncout 
        = (__Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__data[0U] 
           >> 0x00000010U);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w1 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__29__Vfuncout;
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__data[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__data[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__data[2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__data[3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__data[2U]);
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w4 
        = __Vfunc_tb_sprite_bank_ownership__DOT__dut__DOT__burst_word__30__Vfuncout;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w1)))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height 
        = (0x00001fffU & (tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height_sum 
                          >> 6U));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_w4)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_origin_y)) 
                          + (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_height)));
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[2U])) {
        tb_sprite_bank_ownership__DOT__dut__DOT__scan3_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[2U])
                ? ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[0U] 
                                         >> 0x00000010U)))));
    }
    tb_sprite_bank_ownership__DOT__dut__DOT__scan3_active 
        = (((((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__target_y))), (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan3_bottom_y)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][0U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][1U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][2U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][3U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][3U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][0U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[0U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][1U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[1U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][2U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[2U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[0U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[1U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[2U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[0U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[1U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][2U] 
        = (0x0001ffffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q[2U]);
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[0U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[1U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][2U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3[2U];
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[0U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_active;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[1U] 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan1_active;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[2U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__scan2_active;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[3U] 
        = tb_sprite_bank_ownership__DOT__dut__DOT__scan3_active;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[0U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[1U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[2U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[3U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[0U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[1U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][3U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][3U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][3U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][2U] = 0U;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen = 0U;
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[0U]) {
        if ((0U == tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[0U][2U];
            }
        }
        tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[1U]) {
        if ((0U == tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[1U][2U];
            }
        }
        tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[2U]) {
        if ((0U == tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[2U][2U];
            }
        }
        tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[3U]) {
        if ((0U == tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][0U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][1U];
            tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][0U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][1U];
                vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[3U][2U];
            }
        }
        tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen);
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active_count 
        = (7U & tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen);
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_pos 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos) 
                          + (IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_advance)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_slot 
        = (0x00000fffU & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__scan_advance) 
                          + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot)));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 0U;
    if ((5U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        if (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid) 
             & (0U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active_count)))) {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
        } else if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_active) {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
        } else if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan1_active) {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
        }
    } else if ((6U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
    } else if ((7U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable 
            = (0U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_count));
    }
    if ((0x0400U <= (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_count))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 0U;
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[0U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[1U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[2U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[3U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[4U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[5U] = 0U;
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[6U] = 0U;
    if ((5U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        if (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid) 
             & (0U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active_count)))) {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[0U] 
                = tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[0U];
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[1U] 
                = tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[1U];
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    << 0x00000011U) | tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip[2U]);
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    >> 0x0000000fU) | (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                    >> 0x0000000fU) | (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                    >> 0x0000000fU) | (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[6U] 
                = (tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                   >> 0x0000000fU);
        } else if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_active) {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[0U] 
                = tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[0U];
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[1U] 
                = tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[1U];
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U] 
                    << 0x00000011U) | tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[2U]);
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[0U] 
                    >> 0x0000000fU) | (tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[1U] 
                    >> 0x0000000fU) | (tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[2U] 
                    >> 0x0000000fU) | (tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[6U] 
                = (tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_q[3U] 
                   >> 0x0000000fU);
        } else if (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan1_active) {
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[0U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[0U];
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[1U] 
                = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[1U];
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[4U] 
                    << 0x00000011U) | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1[2U]);
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[4U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[5U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[5U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[6U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[6U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[7U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[6U] 
                = (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q[7U] 
                   >> 0x0000000fU);
        }
    } else if ((6U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[0U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_clip[0U];
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[1U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_clip[1U];
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[2U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[0U] 
                << 0x00000011U) | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_clip[2U]);
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[3U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[0U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[1U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[4U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[1U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[2U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[5U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[2U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[3U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[6U] 
            = (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor[3U] 
               >> 0x0000000fU);
    } else if ((7U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[0U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_clip[0U][0U];
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[1U] 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_clip[0U][1U];
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[2U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
                << 0x00000011U) | vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_clip[0U][2U]);
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[3U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[4U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[5U] 
            = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data[6U] 
            = (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
               >> 0x0000000fU);
    }
    if ((4U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & ((IData)(1U) + ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot) 
                              >> 1U));
    } else if ((((5U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
                 | (6U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) 
                | (7U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & ((IData)(1U) + ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_slot) 
                              >> 1U));
    } else {
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & 0U);
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & 0U);
    }
}

VL_ATTR_COLD bool Vtb_sprite_bank_ownership___024root___eval_phase__stl(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_phase__stl\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sprite_bank_ownership___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_sprite_bank_ownership___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_sprite_bank_ownership___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_sprite_bank_ownership___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sprite_bank_ownership___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_sprite_bank_ownership.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_sprite_bank_ownership.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___ctor_var_reset(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___ctor_var_reset\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17538375750693288802ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16114313663352679242ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_lookup_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2427892495761375770ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_index = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1534726016263496946ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_q, __VscopeHash, 856353773153631219ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__read_data, __VscopeHash, 6402796444807604304ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1543887574470772814ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__cache_ack_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5780907709582422690ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_init = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14195836033146529079ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17768180986080666092ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10547211664446444804ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15854580666963422696ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3217803229361534053ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15525114941506679539ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_write_data, __VscopeHash, 5667968548288347063ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q, __VscopeHash, 15475664556425617247ull);
    VL_SCOPED_RAND_RESET_W(162, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q, __VscopeHash, 5000776242690219119ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4621133419484932337ull);
    VL_SCOPED_RAND_RESET_W(209, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q, __VscopeHash, 9541972859696964684ull);
    VL_SCOPED_RAND_RESET_W(209, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data, __VscopeHash, 10949851160258498369ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11286197352117545162ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_render_descriptor, __VscopeHash, 9033357494113043683ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip, __VscopeHash, 2576303216316053951ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5047123486431667619ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__display_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9048160517514385631ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4521058583077567708ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11687590236417500588ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6297570414702473741ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__fill_epoch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3461484300093142646ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__display_read_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15284409883982551698ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16453539165748979865ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8842780946360483590ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12505753765910623026ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4456866557141766324ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5327519609599146539ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__bank_generation[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1370844797880030485ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8149474249988269916ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__target_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9968096968279203074ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__render_next_target = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17170546216757470379ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8086180664572301470ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14802437299817445969ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9645929942620843628ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11819487541889915347ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10778797856596366307ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__list_index = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6010575184693537638ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__list_seen = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8868375740360712065ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__list_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13515110616572150352ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__cache_refresh_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15547874684615805176ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__frame_epoch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14476669516952817916ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__frame_boundary = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16617032380310248948ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_flags = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1349140957937768845ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_top = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11468129798504529804ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_left = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4144314780865737426ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_bottom = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1422409986498490224ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_right = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5893580895707580545ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15004391399869910850ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__stack_count = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14275944351771703163ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__render_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16455134735165256765ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__stack_head = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7371114118200963718ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__stack_write_slot = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14551176827041990237ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q, __VscopeHash, 14633855698934741441ull);
    VL_SCOPED_RAND_RESET_W(162, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q, __VscopeHash, 10759360928353916733ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1, __VscopeHash, 1928789954670934818ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor, __VscopeHash, 13909438238462083805ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_clip, __VscopeHash, 13925515132901424578ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__render_clip, __VscopeHash, 10760643859980205738ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor, __VscopeHash, 6049153751852347160ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__palette_table, __VscopeHash, 16109117682688217296ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__data_cache, __VscopeHash, 5383557647057626760ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_data[__Vi0], __VscopeHash, 10986139888334786288ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_tags[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1607824754360450113ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14925122699315164597ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2393922184579309526ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15142435011799191139ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3176076579255453581ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9245772726245744470ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10998147018336777071ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4860511347064598961ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_col[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14892661628499028730ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8737258073967793183ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5452615117334312562ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_word[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16338611670930073531ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1279230389900846679ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16755165891029402047ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__lane_color[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6484320169434433402ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__zoomx_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3835129813750909013ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17479488770012544101ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__x_accum = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6131617457202504633ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__y_accum = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6458538313808067575ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__emit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6918871948160555211ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__source_row = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18351684041924153311ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__source_column = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6931502225220095681ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__total_rows = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9117552986708427028ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__total_columns = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17797665365742501875ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__dest_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8984340640796187768ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__dest_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10316417571823311614ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__flipx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 38020800890632820ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__flipy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12012904605297992710ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__size_x_tiles = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8138733346977368831ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10261567509988086863ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__size_y_shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 943217935779173562ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__size_y_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17947709224600752918ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3816403893988403564ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8292847622710207334ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16351432599016223382ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14402360413324453045ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_output_width = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5254253726812968497ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_right_x = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18207702138937464064ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__palette_base = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9105348231620578520ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16566634786778678177ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__x_sum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11971566861427455761ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__y_sum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1047466592795340453ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16770475544606117998ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16153892869689434397ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10681442466630952338ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_dividend = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4177637138851010783ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_quotient = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16094235587706673337ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_remainder = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 13278169407825668203ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_remainder = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 15044305848279777993ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_divisor = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14389886761026041661ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_total_rows = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15970051515388471213ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7197384963322767645ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17149588909587193555ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_target_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10399833061528056393ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14053258557590270176ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_count = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7270065411370407794ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_append_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15436167777260483504ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14274580825642551829ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10123257962265379164ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_width_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5355394999419917819ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__list_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6742797590165886370ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__list_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13568670563550245052ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1198187213687904825ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan1_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7968589681446693279ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3, __VscopeHash, 4531714802543490761ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_pair_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 843353291009401226ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2654026132884935886ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12537672874917570651ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_slot = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8639302462520488394ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9168438589920072290ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12717778561104283045ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3579379368842458095ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3210601991499867849ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor[__Vi0], __VscopeHash, 14898252327559280796ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_clip[__Vi0], __VscopeHash, 13677334292132584057ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor[__Vi0], __VscopeHash, 4139999357600109943ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip[__Vi0], __VscopeHash, 1126431419914976793ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor[__Vi0], __VscopeHash, 4371293629344065492ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip[__Vi0], __VscopeHash, 10432985467470789604ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1409644660848992973ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_origin_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8409615350395172386ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_right_x = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9776261458929822530ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_min_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2616046687383781867ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_max_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5441504217866405996ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2938114163064014886ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__line_boundary, __VscopeHash, 17249858734491868396ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_list_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5378222683008663189ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scrub_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 579161787193867732ull);
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__scrub_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15016764722531855491ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__bank_scrub[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3848868727390741914ull);
    }
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5932909714926126569ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5248510584757458316ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 164755404209321057ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12583107674439868675ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4602804070071953950ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16162188223017688724ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17912172786919807432ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13477781581258847239ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14375893991929384622ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2863798827660413462ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15691512132438315498ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12218607556359366216ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14489528976207757588ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1824532675520155803ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4520588602467479033ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5588231842700961631ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 5938878894838997061ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 14116192613935603362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__Vi0], __VscopeHash, 15491097603188894152ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__Vi0], __VscopeHash, 13517178316331185193ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 18264295447649041223ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 3404512278678897674ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__Vi0], __VscopeHash, 15262385866074727035ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__Vi0], __VscopeHash, 7215336503511082226ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(119, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_ram__DOT__mem[__Vi0], __VscopeHash, 1603550292082402979ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_ram__DOT__mem[__Vi0], __VscopeHash, 3025138262257937339ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

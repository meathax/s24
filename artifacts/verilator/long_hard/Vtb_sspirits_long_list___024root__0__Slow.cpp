// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sspirits_long_list.h for the primary calling header

#include "Vtb_sspirits_long_list__pch.h"

VL_ATTR_COLD void Vtb_sspirits_long_list___024root___eval_static(Vtb_sspirits_long_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___eval_static\n"); );
    Vtb_sspirits_long_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_sspirits_long_list__DOT__reset = 1U;
        vlSelfRef.tb_sspirits_long_list__DOT__ce_pixel = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__hcount = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__vcount = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__phase = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__clocks = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__render_clocks = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtb_sspirits_long_list___024root___eval_initial(Vtb_sspirits_long_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___eval_initial\n"); );
    Vtb_sspirits_long_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sspirits_long_list___024root___eval_final(Vtb_sspirits_long_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___eval_final\n"); );
    Vtb_sspirits_long_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sspirits_long_list___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sspirits_long_list___024root___eval_phase__stl(Vtb_sspirits_long_list___024root* vlSelf);

VL_ATTR_COLD void Vtb_sspirits_long_list___024root___eval_settle(Vtb_sspirits_long_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___eval_settle\n"); );
    Vtb_sspirits_long_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sspirits_long_list___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/LONG_H~1\\tb_sspirits_long_list.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_sspirits_long_list___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_sspirits_long_list___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sspirits_long_list___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sspirits_long_list___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_sspirits_long_list___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_sspirits_long_list___024root___stl_sequent__TOP__0(Vtb_sspirits_long_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___stl_sequent__TOP__0\n"); );
    Vtb_sspirits_long_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word;
    SData/*13:0*/ tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag;
    tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag = 0;
    VlUnpacked<QData/*33:0*/, 4> tb_sspirits_long_list__DOT__dut__DOT__line0_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sspirits_long_list__DOT__dut__DOT__line0_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sspirits_long_list__DOT__dut__DOT__line1_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sspirits_long_list__DOT__dut__DOT__line1_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sspirits_long_list__DOT__dut__DOT__line2_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sspirits_long_list__DOT__dut__DOT__line2_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sspirits_long_list__DOT__dut__DOT__line3_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sspirits_long_list__DOT__dut__DOT__line3_display_q[__Vi0] = 0;
    }
    CData/*1:0*/ tb_sspirits_long_list__DOT__dut__DOT__display_lane;
    tb_sspirits_long_list__DOT__dut__DOT__display_lane = 0;
    VlWide<4>/*127:0*/ tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q;
    VL_ZERO_W(128, tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q);
    VlWide<3>/*80:0*/ tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q;
    VL_ZERO_W(81, tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q);
    IData/*31:0*/ tb_sspirits_long_list__DOT__dut__DOT__line_phys;
    tb_sspirits_long_list__DOT__dut__DOT__line_phys = 0;
    IData/*16:0*/ tb_sspirits_long_list__DOT__dut__DOT__wanted_word;
    tb_sspirits_long_list__DOT__dut__DOT__wanted_word = 0;
    CData/*3:0*/ tb_sspirits_long_list__DOT__dut__DOT__wanted_nibble;
    tb_sspirits_long_list__DOT__dut__DOT__wanted_nibble = 0;
    CData/*3:0*/ tb_sspirits_long_list__DOT__dut__DOT__current_pen;
    tb_sspirits_long_list__DOT__dut__DOT__current_pen = 0;
    CData/*7:0*/ tb_sspirits_long_list__DOT__dut__DOT__mapped_color;
    tb_sspirits_long_list__DOT__dut__DOT__mapped_color = 0;
    IData/*16:0*/ tb_sspirits_long_list__DOT__dut__DOT__line_value;
    tb_sspirits_long_list__DOT__dut__DOT__line_value = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__clip_first;
    tb_sspirits_long_list__DOT__dut__DOT__clip_first = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__clip_last;
    tb_sspirits_long_list__DOT__dut__DOT__clip_last = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__d2;
    tb_sspirits_long_list__DOT__dut__DOT__d2 = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__d3;
    tb_sspirits_long_list__DOT__dut__DOT__d3 = 0;
    IData/*16:0*/ tb_sspirits_long_list__DOT__dut__DOT__tile_base;
    tb_sspirits_long_list__DOT__dut__DOT__tile_base = 0;
    CData/*7:0*/ tb_sspirits_long_list__DOT__dut__DOT__tile_x;
    tb_sspirits_long_list__DOT__dut__DOT__tile_x = 0;
    CData/*7:0*/ tb_sspirits_long_list__DOT__dut__DOT__tile_y;
    tb_sspirits_long_list__DOT__dut__DOT__tile_y = 0;
    CData/*2:0*/ tb_sspirits_long_list__DOT__dut__DOT__within_x;
    tb_sspirits_long_list__DOT__dut__DOT__within_x = 0;
    CData/*2:0*/ tb_sspirits_long_list__DOT__dut__DOT__within_y;
    tb_sspirits_long_list__DOT__dut__DOT__within_y = 0;
    IData/*17:0*/ tb_sspirits_long_list__DOT__dut__DOT__word_calc;
    tb_sspirits_long_list__DOT__dut__DOT__word_calc = 0;
    SData/*13:0*/ tb_sspirits_long_list__DOT__dut__DOT__tile_row_offset;
    tb_sspirits_long_list__DOT__dut__DOT__tile_row_offset = 0;
    SData/*13:0*/ tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal;
    tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__wanted_data_word;
    tb_sspirits_long_list__DOT__dut__DOT__wanted_data_word = 0;
    IData/*18:0*/ tb_sspirits_long_list__DOT__dut__DOT__ydiv_shifted_remainder;
    tb_sspirits_long_list__DOT__dut__DOT__ydiv_shifted_remainder = 0;
    SData/*11:0*/ tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot;
    tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_w1;
    tb_sspirits_long_list__DOT__dut__DOT__scan_w1 = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_w4;
    tb_sspirits_long_list__DOT__dut__DOT__scan_w4 = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_w1;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_w1 = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_w4;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_w4 = 0;
    SData/*8:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_zoomy_step;
    tb_sspirits_long_list__DOT__dut__DOT__scan_zoomy_step = 0;
    IData/*19:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_height_sum;
    tb_sspirits_long_list__DOT__dut__DOT__scan_height_sum = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_height;
    tb_sspirits_long_list__DOT__dut__DOT__scan_height = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_origin_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan_origin_y = 0;
    SData/*13:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_bottom_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan_bottom_y = 0;
    CData/*0:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_vertical_allowed;
    tb_sspirits_long_list__DOT__dut__DOT__scan_vertical_allowed = 0;
    SData/*8:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_zoomy_step;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_zoomy_step = 0;
    IData/*19:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_height_sum;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_height_sum = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_height;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_height = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_origin_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_origin_y = 0;
    SData/*13:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_bottom_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_bottom_y = 0;
    CData/*0:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan1_vertical_allowed;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_vertical_allowed = 0;
    VlWide<3>/*80:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_clip3;
    VL_ZERO_W(81, tb_sspirits_long_list__DOT__dut__DOT__scan_clip3);
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_w1;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_w1 = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_w4;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_w4 = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_w1;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_w1 = 0;
    SData/*15:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_w4;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_w4 = 0;
    SData/*8:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_zoomy_step;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_zoomy_step = 0;
    SData/*8:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_zoomy_step;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_zoomy_step = 0;
    IData/*19:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_height_sum;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_height_sum = 0;
    IData/*19:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_height_sum;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_height_sum = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_height;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_height = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_height;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_height = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_origin_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_origin_y = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_origin_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_origin_y = 0;
    SData/*13:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_bottom_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_bottom_y = 0;
    SData/*13:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_bottom_y;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_bottom_y = 0;
    CData/*0:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_vertical_allowed;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_vertical_allowed = 0;
    CData/*0:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_vertical_allowed;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_vertical_allowed = 0;
    CData/*0:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan2_active;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_active = 0;
    CData/*0:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan3_active;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_active = 0;
    CData/*0:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_pair_valid;
    tb_sspirits_long_list__DOT__dut__DOT__scan_pair_valid = 0;
    CData/*2:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_advance;
    tb_sspirits_long_list__DOT__dut__DOT__scan_advance = 0;
    SData/*11:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_next_slot;
    tb_sspirits_long_list__DOT__dut__DOT__scan_next_slot = 0;
    VlWide<4>/*127:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor;
    VL_ZERO_W(128, tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor);
    VlWide<3>/*80:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip;
    VL_ZERO_W(81, tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip);
    IData/*31:0*/ tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_first;
    tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_first = 0;
    SData/*12:0*/ tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_last;
    tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_last = 0;
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data);
    CData/*2:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index = 0;
    CData/*7:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data);
    CData/*3:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pen;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pen = 0;
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pair;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pair = 0;
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data);
    CData/*2:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data);
    CData/*2:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data);
    CData/*3:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen = 0;
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair = 0;
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data);
    CData/*2:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index = 0;
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__data);
    SData/*15:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__data;
    VL_ZERO_W(128, __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__data);
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_descriptor[0U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_descriptor[1U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_descriptor[2U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[5U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[4U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_descriptor[3U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[6U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[5U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_zoomy_step 
        = ((0U == (0x000000ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                  >> 1U))) ? 0x00000040U
            : (0x000001ffU & ((IData)(1U) + (0x000000ffU 
                                             & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                                >> 1U)))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_index 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_tag) 
                          ^ (0x0000003fU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_tag) 
                                            >> 8U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__total_columns 
        = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_tiles) 
           << 3U);
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__total_rows 
        = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_y_tiles) 
           << 3U);
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_write_slot 
        = (0x00000fffU & ((0x1000U > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_count))
                           ? (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_count)
                           : (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_head)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__x_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__zoomx_step) 
                          + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__x_accum)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__y_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__zoomy_step) 
                          + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__y_accum)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_right_x 
        = (0x00003fffU & ((((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_x)) 
                           + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_output_width)) 
                          - (IData)(1U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__frame_boundary 
        = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__ce_pixel) 
           & ((0x028fU == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__hcount)) 
              & (0x017fU == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__vcount))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 0U;
    if ((((~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid)) 
          & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling))) 
         & (0U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
               >> 1U)) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                             >> 1U))) & (1U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 1U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
               >> 2U)) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                             >> 2U))) & (2U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 2U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
               >> 3U)) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                             >> 3U))) & (3U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 3U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
               >> 4U)) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                             >> 4U))) & (4U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 4U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
               >> 5U)) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                             >> 5U))) & (5U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 5U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
               >> 6U)) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                             >> 6U))) & (6U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 6U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
               >> 7U)) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                             >> 7U))) & (7U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = 7U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_width_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, 
                                                               (((0x40000000U 
                                                                  & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[2U])
                                                                  ? 
                                                                 (0U 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                      >> 9U)))
                                                                  : 
                                                                 (0U 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                      >> 1U))))
                                                                 ? 0x00000040U
                                                                 : 
                                                                (0x000001ffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (0x000000ffU 
                                                                     & ((0x40000000U 
                                                                         & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[2U])
                                                                         ? 
                                                                        ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                          << 0x00000017U) 
                                                                         | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                            >> 9U))
                                                                         : 
                                                                        ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                          << 0x0000001fU) 
                                                                         | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                            >> 1U))))))), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[5U] 
                                                                    >> 0x0000000dU))))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_origin_x 
        = (0x00001fffU & (((0x00001000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[5U]) 
                           | (0x00000fffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[5U] 
                                             >> 1U))) 
                          - (IData)(8U)));
    tb_sspirits_long_list__DOT__dut__DOT__clip_first = 0x017fU;
    tb_sspirits_long_list__DOT__dut__DOT__clip_last = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[2U])) {
        if ((0x00002000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[2U])) {
            tb_sspirits_long_list__DOT__dut__DOT__clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            tb_sspirits_long_list__DOT__dut__DOT__clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed 
                = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__clip_last))));
        } else {
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed 
                = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[0U] 
                                         >> 0x00000010U))));
        }
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[0U]) 
                              - (IData)(8U)));
    } else {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x = 0x000001efU;
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_write_data[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_top) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_left)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_bottom) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_right))))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_write_data[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_top) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_left)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_bottom) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_right))))) 
                   >> 0x00000020U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_write_data[2U] 
        = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_valid) 
            << 0x00000010U) | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__current_clip_flags));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_ack 
        = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__mem_req) 
           | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__cache_ack_pending));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[4U] 
                           >> 0x00000010U)) | (0x00000fffU 
                                               & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x00000011U)));
    tb_sspirits_long_list__DOT__dut__DOT__ydiv_shifted_remainder 
        = ((0x0007fffeU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_remainder 
                           << 1U)) | (1U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_dividend 
                                            >> 0x11U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_remainder 
        = tb_sspirits_long_list__DOT__dut__DOT__ydiv_shifted_remainder;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_quotient 
        = (0x0003fffeU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_quotient 
                          << 1U));
    if ((tb_sspirits_long_list__DOT__dut__DOT__ydiv_shifted_remainder 
         >= (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_divisor))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_remainder 
            = (0x0007ffffU & (tb_sspirits_long_list__DOT__dut__DOT__ydiv_shifted_remainder 
                              - (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_divisor)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_quotient 
            = (1U | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_quotient);
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_adjust_value 
        = (0x000003ffU & ((IData)(0x003fU) - (0x000001ffU 
                                              & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_remainder)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[0U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[1U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[2U] 
        = (0x0001ffffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[2U]);
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_min_x = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_max_x = 0x01efU;
    tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_first = 0x017fU;
    tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_last = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[2U])) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_min_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[1U]) 
                              - (IData)(8U)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_max_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[0U]) 
                              - (IData)(8U)));
        if ((0x00002000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[2U])) {
            tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed 
                = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_last))));
        } else {
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed 
                = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[0U] 
                                         >> 0x00000010U))));
        }
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line = 1U;
    if ((0x01a6U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__vcount))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line = 0U;
    } else if ((0x01a7U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__vcount))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line = 1U;
    } else if ((0x017fU > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__vcount))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line 
            = (0x000003ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__vcount)));
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank;
    if ((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
          & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling))) 
         & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[0U] 
            == (0x000001ffU & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 0U;
    }
    if (((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
           >> 1U) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                        >> 1U))) & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[1U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
           >> 2U) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                        >> 2U))) & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[2U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 2U;
    }
    if (((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
           >> 3U) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                        >> 3U))) & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[3U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 3U;
    }
    if (((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
           >> 4U) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                        >> 4U))) & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[4U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 4U;
    }
    if (((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
           >> 5U) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                        >> 5U))) & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[5U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 5U;
    }
    if (((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
           >> 6U) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                        >> 6U))) & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[6U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 6U;
    }
    if (((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_valid) 
           >> 7U) & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_filling) 
                        >> 7U))) & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[7U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = 7U;
    }
    if ((0x028fU == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__hcount))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_read_addr 
            = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__next_display_bank) 
               << 7U);
        tb_sspirits_long_list__DOT__dut__DOT__display_lane = 0U;
    } else {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_read_addr 
            = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__display_bank) 
                << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__hcount) 
                                          >> 2U) + 
                                         ((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__hcount)))
                                           ? 1U : 0U))));
        tb_sspirits_long_list__DOT__dut__DOT__display_lane 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__hcount)));
    }
    tb_sspirits_long_list__DOT__dut__DOT__line3_display_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line3_display_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line3_display_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line3_display_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line2_display_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line2_display_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line2_display_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line2_display_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line1_display_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line1_display_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line1_display_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line1_display_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line0_display_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line0_display_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line0_display_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a;
    tb_sspirits_long_list__DOT__dut__DOT__line0_display_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a;
    if ((0x00000ddbU > (0x007fffffU & (vlSelfRef.tb_sspirits_long_list__DOT__mem_addr 
                                       - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[0U] 
            = ((0x00000ddaU == (0x007fffffU & (vlSelfRef.tb_sspirits_long_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))
                ? 0x003f0000U : (0x003f0000U | (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.tb_sspirits_long_list__DOT__mem_addr))));
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[1U] 
            = (0x00020000U | (0x0000ffffU & vlSelfRef.tb_sspirits_long_list__DOT__mem_addr));
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[2U] 
            = (IData)((0x0000000008000000ULL | (QData)((IData)(
                                                               (0x01f4U 
                                                                & (- (IData)(
                                                                             (0x00000030U 
                                                                              <= 
                                                                              (0x007fffffU 
                                                                               & (vlSelfRef.tb_sspirits_long_list__DOT__mem_addr 
                                                                                - (IData)(0x00400000U)))))))))));
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[3U] 
            = (IData)(((0x0000000008000000ULL | (QData)((IData)(
                                                                (0x01f4U 
                                                                 & (- (IData)(
                                                                              (0x00000030U 
                                                                               <= 
                                                                               (0x007fffffU 
                                                                                & (vlSelfRef.tb_sspirits_long_list__DOT__mem_addr 
                                                                                - (IData)(0x00400000U)))))))))) 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[0U] = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[1U] = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[2U] = 0U;
        vlSelfRef.tb_sspirits_long_list__DOT__mem_data[3U] = 0U;
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[0U] 
        = ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                           << 1U)) | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[1U] 
        = (0x00003fffU & ((IData)(1U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[2U] 
        = (0x00003fffU & ((IData)(2U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[3U] 
        = (0x00003fffU & ((IData)(3U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x 
        = (0x00001fffU & (((0x000001ffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[1U]) 
                           - (IData)(8U)) & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_clip[2U] 
                                                           >> 0x00000010U))))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b;
    tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[0U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[2U] 
                               >> 0x00000011U));
    tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[1U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[3U] 
                               >> 0x00000011U));
    tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[2U] 
        = (0x0001ffffU & ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[5U] 
                           << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[4U] 
                                              >> 0x00000011U)));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__data[1U]);
    tb_sspirits_long_list__DOT__dut__DOT__d2 = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__8__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__Vfuncout 
        = (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__data[1U] 
           >> 0x00000010U);
    tb_sspirits_long_list__DOT__dut__DOT__d3 = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__9__Vfuncout;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_base 
        = (0x00003fffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__d3));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_cache_index 
        = (7U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_base));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_cache_hit 
        = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_cache_valid) 
            >> (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_cache_index)) 
           & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_cache_tags
              [vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_cache_index] 
              == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_base)));
    tb_sspirits_long_list__DOT__dut__DOT__tile_base 
        = (0x0001fff0U & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__d2) 
                          << 4U));
    tb_sspirits_long_list__DOT__dut__DOT__tile_y = 
        (0x000000ffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_row) 
                        >> 3U));
    tb_sspirits_long_list__DOT__dut__DOT__within_y 
        = (7U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_row));
    tb_sspirits_long_list__DOT__dut__DOT__tile_x = 
        (0x000000ffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_column) 
                        >> 3U));
    tb_sspirits_long_list__DOT__dut__DOT__within_x 
        = (7U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_column));
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__flipy) {
        tb_sspirits_long_list__DOT__dut__DOT__tile_y 
            = ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
               ^ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_y_mask));
        tb_sspirits_long_list__DOT__dut__DOT__within_y 
            = (7U & ((IData)(7U) - (IData)(tb_sspirits_long_list__DOT__dut__DOT__within_y)));
    }
    tb_sspirits_long_list__DOT__dut__DOT__tile_row_offset 
        = ((4U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_shift))
            ? ((2U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_shift))
                ? ((1U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_shift))
                    ? (0x00003f80U & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
                                      << 7U)) : ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
                                                 << 6U))
                : ((1U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_shift))
                    ? ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
                       << 5U) : ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
                                 << 4U))) : ((2U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_shift))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_shift))
                                                  ? 
                                                 ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
                                                  << 3U)
                                                  : 
                                                 ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
                                                  << 2U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_shift))
                                                  ? 
                                                 ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y) 
                                                  << 1U)
                                                  : (IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_y))));
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__flipx) {
        tb_sspirits_long_list__DOT__dut__DOT__tile_x 
            = (0x000000ffU & (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__size_x_tiles) 
                               - (IData)(1U)) - (IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_x)));
        tb_sspirits_long_list__DOT__dut__DOT__within_x 
            = (7U & ((IData)(7U) - (IData)(tb_sspirits_long_list__DOT__dut__DOT__within_x)));
    }
    tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal 
        = (0x00003fffU & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_row_offset) 
                          + (IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_x)));
    tb_sspirits_long_list__DOT__dut__DOT__word_calc 
        = (0x0003ffffU & (((tb_sspirits_long_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__within_x) 
                                 >> 2U))));
    tb_sspirits_long_list__DOT__dut__DOT__wanted_word 
        = (0x0001ffffU & tb_sspirits_long_list__DOT__dut__DOT__word_calc);
    tb_sspirits_long_list__DOT__dut__DOT__wanted_nibble 
        = (0x0000000cU & ((~ (IData)(tb_sspirits_long_list__DOT__dut__DOT__within_x)) 
                          << 2U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag 
        = (0x00003fffU & (tb_sspirits_long_list__DOT__dut__DOT__wanted_word 
                          >> 3U));
    tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_tag;
    if ((0x00000010U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)))) {
                        tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag 
                            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
                    tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag 
                        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
                    tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag 
                        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
                tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_base;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)))) {
                tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__list_index;
            }
        }
    }
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index 
        = (7U & tb_sspirits_long_list__DOT__dut__DOT__wanted_word);
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__index) 
                                                     << 4U)))));
    tb_sspirits_long_list__DOT__dut__DOT__wanted_data_word 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__11__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT__current_pen 
        = (0x0000000fU & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__wanted_data_word) 
                          >> (IData)(tb_sspirits_long_list__DOT__dut__DOT__wanted_nibble)));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pen 
        = tb_sspirits_long_list__DOT__dut__DOT__current_pen;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index 
        = (7U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pen) 
                 >> 1U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data[0U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data[1U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data[2U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data[3U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__palette_data[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__index) 
                                                     << 4U)))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pair 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__13__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__Vfuncout 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pen))
                           ? (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pair)
                           : ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__pair) 
                              >> 8U)));
    tb_sspirits_long_list__DOT__dut__DOT__mapped_color 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__12__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT__line_value 
        = ((0U == (IData)(tb_sspirits_long_list__DOT__dut__DOT__mapped_color))
            ? 0U : ((1U == (IData)(tb_sspirits_long_list__DOT__dut__DOT__mapped_color))
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__mapped_color) 
                                           << 8U)) 
                                       | (IData)(tb_sspirits_long_list__DOT__dut__DOT__mapped_color)))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_column;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[0U] 
        = (7U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[0U])
                  : vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[0U]));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[0U] 
        = (0x0001ffffU & (((tb_sspirits_long_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[0U] 
                                 >> 2U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[0U] 
        = (0x00003fffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[0U] 
                          >> 3U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[0U]);
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[3U];
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[0U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[0U] 
        = (0x0000000fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[0U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[0U]) 
                                             << 2U))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[0U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[0U] 
        = ((0U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[0U])
            ? 0U : ((1U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[0U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[0U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[0U]))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[1U] 
        = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[1U] 
        = (7U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[1U])
                  : vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[1U]));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[1U] 
        = (0x0001ffffU & (((tb_sspirits_long_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[1U] 
                                 >> 2U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[1U] 
        = (0x00003fffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[1U] 
                          >> 3U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[1U]);
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[3U];
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[1U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[1U] 
        = (0x0000000fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[1U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[1U]) 
                                             << 2U))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[1U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[1U] 
        = ((0U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[1U])
            ? 0U : ((1U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[1U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[1U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[1U]))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[2U] 
        = (0x000007ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[2U] 
        = (7U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[2U])
                  : vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[2U]));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[2U] 
        = (0x0001ffffU & (((tb_sspirits_long_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[2U] 
                                 >> 2U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[2U] 
        = (0x00003fffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[2U] 
                          >> 3U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[2U]);
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[3U];
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[2U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[2U] 
        = (0x0000000fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[2U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[2U]) 
                                             << 2U))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[2U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[2U] 
        = ((0U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[2U])
            ? 0U : ((1U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[2U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[2U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[2U]))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[3U] 
        = (0x000007ffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[3U] 
        = (7U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[3U])
                  : vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_col[3U]));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[3U] 
        = (0x0001ffffU & (((tb_sspirits_long_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[3U] 
                                 >> 2U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[3U] 
        = (0x00003fffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[3U] 
                          >> 3U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_word[3U]);
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache[3U];
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[3U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_1__burst_word;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[3U] 
        = (0x0000000fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[3U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[3U]) 
                                             << 2U))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_pen[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index 
        = (7U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen) 
                 >> 1U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[0U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[1U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[2U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data[3U] 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__palette_data[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__data
                             [(3U & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__index) 
                                                     << 4U)))));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__16__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pen))
                           ? (IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair)
                           : ((IData)(__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__palette_entry__15__pair) 
                              >> 8U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[3U] 
        = tb_sspirits_long_list__DOT__dut__DOT____VlemCall_2__palette_entry;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[3U] 
        = ((0U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[3U])
            ? 0U : ((1U == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[3U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[3U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_color[3U]))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[0U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[1U] 
        = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[2U] 
        = (0x0001ffffU & ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[5U] 
                           << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                                              >> 0x00000011U)));
    tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_head) 
                          + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_pos)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_right_x 
        = (0x00003fffU & ((((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_origin_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_setup_origin_x)) 
                           + (0x00001fffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_width_sum 
                                             >> 6U))) 
                          - (IData)(1U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_y)) 
                          + (0x000007ffU & ((IData)(8U) 
                                            << (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[4U] 
                                                >> 0x0000001dU)))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_target_offset 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                          - (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_y)));
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__cache_ack_pending) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[0U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_cache_q[0U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[1U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_cache_q[1U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[2U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_cache_q[2U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[3U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_cache_q[3U];
    } else {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[0U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__mem_data[0U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[1U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__mem_data[1U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[2U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__mem_data[2U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[3U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__mem_data[3U];
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_request_index 
        = (0x000000ffU & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag) 
                          ^ (0x0000003fU & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag) 
                                            >> 8U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[0U] 
        = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((0U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[0U] = 0ULL;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[1U] 
        = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((1U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[1U] = 0ULL;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[2U] 
        = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((2U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[2U] = 0ULL;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[3U] 
        = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x) 
                                     >> 2U)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[3U] = 0ULL;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[3U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__line_phys = 4U;
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[0U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[0U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[0U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[0U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[0U]))) 
         & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[0U] 
            >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[0U]);
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[0U] 
                                         >> 2U)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[0U] 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[0U])))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[0U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[0U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[0U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
                       & (0U == (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sspirits_long_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[1U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[1U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[1U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[1U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[1U]))) 
         & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[1U] 
            >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[1U]);
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[1U] 
                                         >> 2U)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[1U] 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[1U])))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[1U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[1U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[1U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
                       & (1U == (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sspirits_long_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[2U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[2U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[2U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[2U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[2U]))) 
         & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[2U] 
            >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[2U]);
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[2U] 
                                         >> 2U)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[2U] 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[2U])))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[2U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[2U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[2U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
                       & (2U == (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sspirits_long_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_tag[3U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[3U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[3U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[3U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[3U]))) 
         & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[3U] 
            >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[3U]);
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[3U] 
                                         >> 2U)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[3U] 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[3U])))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[3U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[3U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[3U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
                       & (3U == (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sspirits_long_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_category[(3U 
                                                                         & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[(3U 
                                                                     & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sspirits_long_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sspirits_long_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sspirits_long_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sspirits_long_list__DOT__dut__DOT__line_phys))));
    }
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scrub_req) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_wren = 0x0fU;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[0U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[0U] = 0ULL;
        tb_sspirits_long_list__DOT__dut__DOT__line_phys = 4U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[1U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[1U] = 0ULL;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[2U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[2U] = 0ULL;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[3U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__line_b_data[3U] = 0ULL;
    }
    if ((((4U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
          | (5U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) 
         | (6U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)))) {
        if ((1U & (IData)(tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot))) {
            __Vtemp_9[0U] = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[2U] 
                                                 >> 0x00000011U));
            __Vtemp_9[1U] = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                                                 >> 0x00000011U));
            __Vtemp_9[2U] = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[5U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                                                 >> 0x00000011U));
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
        } else {
            __Vtemp_9[0U] = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[0U];
            __Vtemp_9[1U] = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[1U];
            __Vtemp_9[2U] = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[2U];
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[0U];
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[1U];
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[2U];
            tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[3U];
        }
    } else {
        __Vtemp_9[0U] = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[0U];
        __Vtemp_9[1U] = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[1U];
        __Vtemp_9[2U] = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[2U];
        tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[0U];
        tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[1U];
        tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[2U];
        tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[3U];
    }
    tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[0U] 
        = __Vtemp_9[0U];
    tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[1U] 
        = __Vtemp_9[1U];
    tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[2U] 
        = (0x0001ffffU & __Vtemp_9[2U]);
    tb_sspirits_long_list__DOT__dut__DOT__scan_pair_valid 
        = ((~ (IData)(tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot)) 
           & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid 
        = ((0U == (3U & (IData)(tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot))) 
           & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_write_enable 
        = ((((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_ack) 
             & (3U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) 
            & (0U == (0x0000c000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[0U]))) 
           & (~ ((0U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__list_index)) 
                 & (0U == (0x0000ffffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[0U])))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__list_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[2U] 
                           << 1U)) | (0x00000fffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[2U]));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_cache_hit 
        = (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_cache_valid
           [vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_request_index] 
           & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__burst_request_tag) 
              == vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_cache_tag
              [vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__burst_request_index]));
    tb_sspirits_long_list__DOT__dut__DOT__scan_advance 
        = ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid)
            ? 4U : ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_pair_valid)
                     ? 2U : 1U));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__data[0U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__data[1U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__data[2U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__data[3U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__Vfuncout 
        = (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__data[0U] 
           >> 0x00000010U);
    tb_sspirits_long_list__DOT__dut__DOT__scan_w1 = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__23__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__data[0U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__data[1U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__data[2U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__data[3U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__data[2U]);
    tb_sspirits_long_list__DOT__dut__DOT__scan_w4 = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__24__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT__scan_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_w1)))));
    tb_sspirits_long_list__DOT__dut__DOT__scan_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_w4) 
                                                                    >> 0x0cU))))));
    tb_sspirits_long_list__DOT__dut__DOT__scan_height 
        = (0x00001fffU & (tb_sspirits_long_list__DOT__dut__DOT__scan_height_sum 
                          >> 6U));
    tb_sspirits_long_list__DOT__dut__DOT__scan_origin_y 
        = ((0x00001000U & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_w4)));
    tb_sspirits_long_list__DOT__dut__DOT__scan_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_origin_y)) 
                          + (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_height)));
    tb_sspirits_long_list__DOT__dut__DOT__scan_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[2U])) {
        tb_sspirits_long_list__DOT__dut__DOT__scan_vertical_allowed 
            = ((0x00002000U & tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[2U])
                ? ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_active 
        = (((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_vertical_allowed) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y))), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_bottom_y)));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__Vfuncout 
        = (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__data[0U] 
           >> 0x00000010U);
    tb_sspirits_long_list__DOT__dut__DOT__scan1_w1 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__25__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__data[2U]);
    tb_sspirits_long_list__DOT__dut__DOT__scan1_w4 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__26__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT__scan1_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_w1)))));
    tb_sspirits_long_list__DOT__dut__DOT__scan1_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_w4) 
                                                                    >> 0x0cU))))));
    tb_sspirits_long_list__DOT__dut__DOT__scan1_height 
        = (0x00001fffU & (tb_sspirits_long_list__DOT__dut__DOT__scan1_height_sum 
                          >> 6U));
    tb_sspirits_long_list__DOT__dut__DOT__scan1_origin_y 
        = ((0x00001000U & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_w4)));
    tb_sspirits_long_list__DOT__dut__DOT__scan1_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_origin_y)) 
                          + (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_height)));
    tb_sspirits_long_list__DOT__dut__DOT__scan1_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[2U])) {
        tb_sspirits_long_list__DOT__dut__DOT__scan1_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[2U])
                ? ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan1_active 
        = (((((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_vertical_allowed) 
              & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_pair_valid)) 
             & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y))), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan1_bottom_y)));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__Vfuncout 
        = (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__data[0U] 
           >> 0x00000010U);
    tb_sspirits_long_list__DOT__dut__DOT__scan2_w1 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__27__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__data[2U]);
    tb_sspirits_long_list__DOT__dut__DOT__scan2_w4 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__28__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT__scan2_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_w1)))));
    tb_sspirits_long_list__DOT__dut__DOT__scan2_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_w4) 
                                                                    >> 0x0cU))))));
    tb_sspirits_long_list__DOT__dut__DOT__scan2_height 
        = (0x00001fffU & (tb_sspirits_long_list__DOT__dut__DOT__scan2_height_sum 
                          >> 6U));
    tb_sspirits_long_list__DOT__dut__DOT__scan2_origin_y 
        = ((0x00001000U & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_w4)));
    tb_sspirits_long_list__DOT__dut__DOT__scan2_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_origin_y)) 
                          + (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_height)));
    tb_sspirits_long_list__DOT__dut__DOT__scan2_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[2U])) {
        tb_sspirits_long_list__DOT__dut__DOT__scan2_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[2U])
                ? ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[0U] 
                                         >> 0x00000010U)))));
    }
    tb_sspirits_long_list__DOT__dut__DOT__scan2_active 
        = (((((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y))), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan2_bottom_y)));
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__Vfuncout 
        = (__Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__data[0U] 
           >> 0x00000010U);
    tb_sspirits_long_list__DOT__dut__DOT__scan3_w1 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__29__Vfuncout;
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__data[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__data[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__data[2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__data[3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__data[2U]);
    tb_sspirits_long_list__DOT__dut__DOT__scan3_w4 
        = __Vfunc_tb_sspirits_long_list__DOT__dut__DOT__burst_word__30__Vfuncout;
    tb_sspirits_long_list__DOT__dut__DOT__scan3_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_w1)))));
    tb_sspirits_long_list__DOT__dut__DOT__scan3_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_w4) 
                                                                    >> 0x0cU))))));
    tb_sspirits_long_list__DOT__dut__DOT__scan3_height 
        = (0x00001fffU & (tb_sspirits_long_list__DOT__dut__DOT__scan3_height_sum 
                          >> 6U));
    tb_sspirits_long_list__DOT__dut__DOT__scan3_origin_y 
        = ((0x00001000U & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_w4)));
    tb_sspirits_long_list__DOT__dut__DOT__scan3_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_origin_y)) 
                          + (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_height)));
    tb_sspirits_long_list__DOT__dut__DOT__scan3_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[2U])) {
        tb_sspirits_long_list__DOT__dut__DOT__scan3_vertical_allowed 
            = ((0x00002000U & tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[2U])
                ? ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[0U] 
                                         >> 0x00000010U)))));
    }
    tb_sspirits_long_list__DOT__dut__DOT__scan3_active 
        = (((((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__target_y))), (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan3_bottom_y)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U] 
        = tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][0U] 
        = tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[0U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][1U] 
        = tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[1U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][2U] 
        = tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[2U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[0U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[1U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][2U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[2U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[0U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[1U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][2U] 
        = (0x0001ffffU & vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[2U]);
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][0U] 
        = tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[0U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][1U] 
        = tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[1U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][2U] 
        = tb_sspirits_long_list__DOT__dut__DOT__scan_clip3[2U];
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[0U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_active;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[1U] 
        = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan1_active;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[2U] 
        = tb_sspirits_long_list__DOT__dut__DOT__scan2_active;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[3U] 
        = tb_sspirits_long_list__DOT__dut__DOT__scan3_active;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[0U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[1U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][3U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][3U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][3U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][2U] = 0U;
    tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen = 0U;
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[0U]) {
        if ((0U == tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[0U][2U];
            }
        }
        tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[1U]) {
        if ((0U == tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[1U][2U];
            }
        }
        tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[2U]) {
        if ((0U == tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[2U][2U];
            }
        }
        tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[3U]) {
        if ((0U == tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][0U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][1U];
            tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][0U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][1U];
                vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[3U][2U];
            }
        }
        tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen);
    }
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active_count 
        = (7U & tb_sspirits_long_list__DOT__dut__DOT__scan_quad_seen);
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__list_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__list_origin_y)) 
                          + (0x00001fffU & (((IData)(0x00000020U) 
                                             + VL_SHIFTL_III(20,20,32, 
                                                             ((0U 
                                                               == 
                                                               (0x000000ffU 
                                                                & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[0U] 
                                                                   >> 0x00000010U)))
                                                               ? 0x00000040U
                                                               : 
                                                              (0x000001ffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[0U] 
                                                                      >> 0x00000010U))))), 
                                                             ((IData)(3U) 
                                                              + 
                                                              (7U 
                                                               & (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__read_data[2U] 
                                                                  >> 0x0000000cU))))) 
                                            >> 6U))));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_next_pos 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_pos) 
                          + (IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_advance)));
    tb_sspirits_long_list__DOT__dut__DOT__scan_next_slot 
        = (0x00000fffU & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_advance) 
                          + (IData)(tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot)));
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[0U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[1U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[2U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[3U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[4U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[5U] = 0U;
    vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[6U] = 0U;
    if ((5U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
        if (((IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid) 
             & (0U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active_count)))) {
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable = 1U;
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[0U] 
                = tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[0U];
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[1U];
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    << 0x00000011U) | tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_clip[2U]);
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    >> 0x0000000fU) | (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                    >> 0x0000000fU) | (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                    >> 0x0000000fU) | (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (tb_sspirits_long_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                   >> 0x0000000fU);
        } else if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_active) {
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable = 1U;
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[0U] 
                = tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[0U];
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[1U];
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                    << 0x00000011U) | tb_sspirits_long_list__DOT__dut__DOT__clip_stack_q[2U]);
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                    >> 0x0000000fU) | (tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                    >> 0x0000000fU) | (tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                    >> 0x0000000fU) | (tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                   >> 0x0000000fU);
        } else if (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan1_active) {
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable = 1U;
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[0U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[0U];
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[1U];
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[4U] 
                    << 0x00000011U) | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[2U]);
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[4U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[5U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[5U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[6U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[6U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[7U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[7U] 
                   >> 0x0000000fU);
        }
    } else if ((6U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable = 1U;
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[0U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_clip[0U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[1U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_clip[1U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[2U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[0U] 
                << 0x00000011U) | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_clip[2U]);
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[3U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[0U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[1U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[4U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[1U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[2U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[5U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[2U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[3U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[6U] 
            = (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[3U] 
               >> 0x0000000fU);
    } else if ((7U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable 
            = (0U != (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_count));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[0U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_clip[0U][0U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[1U] 
            = vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_clip[0U][1U];
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[2U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
                << 0x00000011U) | vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_clip[0U][2U]);
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[3U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[4U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[5U] 
            = ((vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[6U] 
            = (vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
               >> 0x0000000fU);
    }
    if ((4U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & ((IData)(1U) + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__stack_scan_slot) 
                              >> 1U));
    } else if ((((5U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)) 
                 | (6U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state))) 
                | (7U == (IData)(vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & ((IData)(1U) + ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_next_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(tb_sspirits_long_list__DOT__dut__DOT__scan_next_slot) 
                              >> 1U));
    } else {
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & 0U);
        vlSelfRef.tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & 0U);
    }
}

VL_ATTR_COLD bool Vtb_sspirits_long_list___024root___eval_phase__stl(Vtb_sspirits_long_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___eval_phase__stl\n"); );
    Vtb_sspirits_long_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_sspirits_long_list___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_sspirits_long_list___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_sspirits_long_list___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_sspirits_long_list___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sspirits_long_list___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sspirits_long_list___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sspirits_long_list___024root___ctor_var_reset(Vtb_sspirits_long_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sspirits_long_list___024root___ctor_var_reset\n"); );
    Vtb_sspirits_long_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->tb_sspirits_long_list__DOT__mem_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1088386777214737568ull);
    vlSelf->tb_sspirits_long_list__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 37766036361269172ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__mem_data, __VscopeHash, 3689390946190146986ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_cache_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4234002031252334119ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_cache_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11752759722860487725ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 511583853951551932ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_request_index = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15687508073768192997ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_index = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2754555291705918125ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_cache_q, __VscopeHash, 11885791990536055506ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__read_data, __VscopeHash, 12070321747180793819ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_cache_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2899683669253304144ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__cache_ack_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9003191328729091311ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__read_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 828874194540704361ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_cache_init = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1923677928762955083ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line_b_wren = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8159803102306732584ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line_b_category[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 918496749321316477ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 205544270645654450ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line_b_data[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15452060310638518619ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11425035299039958380ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_write_data, __VscopeHash, 12024652580842741250ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q, __VscopeHash, 11487252642325075189ull);
    VL_SCOPED_RAND_RESET_W(162, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q, __VscopeHash, 2800219153859831667ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5690812028567957561ull);
    VL_SCOPED_RAND_RESET_W(209, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_cache_q, __VscopeHash, 2531026134461275216ull);
    VL_SCOPED_RAND_RESET_W(209, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data, __VscopeHash, 15089902054151794948ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15091358104794445748ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_render_descriptor, __VscopeHash, 8541819632060570377ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_render_clip, __VscopeHash, 3108267388001454774ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1056545191665020394ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__display_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14247573819283876554ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__fill_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1998809131280937608ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9921042689622077780ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__bank_filling = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14890405502604207481ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__fill_epoch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11056864545738054639ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__display_read_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14241590940127553927ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line0_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16381586886395257243ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line1_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7471686164784192030ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line2_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13533129726667371609ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line3_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7354433851107027572ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__fill_generation = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6612333710701598902ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__bank_generation[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4246121402650949877ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17676562046977281986ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__target_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5971228364137590425ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__render_next_target = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8691521980163987275ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__next_display_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5420702058622605057ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__fill_candidate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11041920727811446066ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18388061790686053744ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__next_display_line = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11360423163022407910ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__list_index = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9766066227278510843ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__list_seen = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4829034314337406865ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__list_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12605770094841437233ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__cache_refresh_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8777683208463142346ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__frame_epoch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612356607882839361ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__frame_boundary = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9602988700365712654ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__current_clip_flags = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4897805338226056177ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__current_clip_top = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12188551144407720663ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__current_clip_left = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13853032701364342894ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__current_clip_bottom = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17604020047620079686ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__current_clip_right = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11979649763185907862ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__current_clip_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2082330629837145644ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__stack_count = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16638765275392663528ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__render_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9923280505758520477ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__stack_head = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2637492063921468545ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__stack_write_slot = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10501889652910087041ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q, __VscopeHash, 6743259831945574169ull);
    VL_SCOPED_RAND_RESET_W(162, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q, __VscopeHash, 15360445782206872610ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_clip1, __VscopeHash, 12301090516436721296ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor, __VscopeHash, 4012859246704008146ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_second_clip, __VscopeHash, 14852220167281636810ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__render_clip, __VscopeHash, 12760995864574779153ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor, __VscopeHash, 16988808403789945282ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__palette_table, __VscopeHash, 3841117472168924595ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__data_cache, __VscopeHash, 15259562787963887215ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__palette_cache_data[__Vi0], __VscopeHash, 9555602756471633281ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__palette_cache_tags[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9313429409791677904ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__palette_cache_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 720445371931866369ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__palette_cache_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10960694219526070398ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__palette_cache_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16194980689885113328ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13735111371720593062ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1322845728060789918ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2042421948814562279ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13687586619380206428ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_col[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8942593289750573930ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15882651490248014957ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1889422954490030691ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_word[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5122659785619547432ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8305550517854161567ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_pen[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 597257482953210952ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__lane_color[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14773862684345062540ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__zoomx_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7364560975049365450ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3309195641183849187ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__x_accum = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7754963163161396648ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__y_accum = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4196834325998670801ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__emit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12044348223650105854ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__source_row = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7347697676986232137ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__source_column = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8777748930004785670ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__total_rows = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14060253327735814619ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__total_columns = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15379931869395789018ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__dest_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17084556258291398349ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__dest_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3744248296187930626ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__flipx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10054130806890110394ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__flipy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5332887755489171606ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__size_x_tiles = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13366735677129188490ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__size_y_tiles = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17645121663142379965ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__size_x_shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4902416198185122271ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__size_y_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9454742567247862793ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17585348959783813751ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_min_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15156118911273896223ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_max_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9576729974345691068ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16071127223340733858ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_output_width = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9973051578340056498ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_right_x = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18355939602076161327ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__palette_base = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12647355933941104710ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__wanted_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2626304709898850573ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__x_sum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1679738655907641636ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__y_sum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12660004182457878140ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13236811267735979278ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15632460701469109829ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2495286930880768785ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_dividend = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2998989947732868711ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_quotient = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12730276154237929865ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_remainder = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 17570691345387367748ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_remainder = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 7543076618755511266ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_divisor = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6008563860835897583ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_total_rows = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15376248250521724189ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2963251808673177486ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_quotient = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8569547366321803629ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__ydiv_adjust_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3506726697891827894ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_target_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1420407994083308889ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13177498522076170332ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_count = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11682047609488350194ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13471094780443732515ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_width_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6267358547411790942ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__list_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3296604909743847796ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__list_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16100644710170880222ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16891017817677738024ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan1_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12427979107933956362ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4362292967927405247ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_next_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11844010722016750179ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_second_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9167863505730887613ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17722111509646719706ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8007891854467920184ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900837479823201010ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[__Vi0], __VscopeHash, 2362700748374522829ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_clip[__Vi0], __VscopeHash, 4539006296388147355ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[__Vi0], __VscopeHash, 14342888075469027798ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[__Vi0], __VscopeHash, 7162077736436342814ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[__Vi0], __VscopeHash, 673570847767181065ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[__Vi0], __VscopeHash, 14818549382224577987ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10291159991854815552ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_setup_origin_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14405564700080150862ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_setup_right_x = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6296019618293213264ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_min_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1829009568899219791ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_max_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9910938690650587254ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8915024117184155965ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__line_boundary, __VscopeHash, 3049406875359687723ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_list_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4465443248532137500ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scrub_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15019582276894139439ull);
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT__scrub_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5025114745445769782ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__bank_scrub[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6790030118332878967ull);
    }
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9790517221203414076ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6324482962310893767ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12768706741000417408ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17726643402530609747ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9164331478256484058ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 514005707468351011ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4035146063611762927ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10115068664283441155ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5733414165706476483ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11820150093926313245ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5256883461516059839ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17275873917555847538ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9086636234393984139ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12016807676232307723ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4997108643534645255ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15992552647799963148ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 9049968516955071932ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 17387367542517964037ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__Vi0], __VscopeHash, 14350158280091791852ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__Vi0], __VscopeHash, 3714610734315129205ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 12650503797281175617ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 2025588463895418769ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__Vi0], __VscopeHash, 3251145080592284915ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__Vi0], __VscopeHash, 9542705505976353156ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(119, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__Vi0], __VscopeHash, 9523873195748044285ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sspirits_long_list__DOT__dut__DOT__burst_cache_ram__DOT__mem[__Vi0], __VscopeHash, 11683473639073624482ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

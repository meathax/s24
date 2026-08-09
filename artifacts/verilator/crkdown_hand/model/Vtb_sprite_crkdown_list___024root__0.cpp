// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sprite_crkdown_list.h for the primary calling header

#include "Vtb_sprite_crkdown_list__pch.h"

bool Vtb_sprite_crkdown_list___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___trigger_anySet__act\n"); );
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

extern const VlWide<12>/*383:0*/ Vtb_sprite_crkdown_list__ConstPool__CONST_h997e551f_0;

void Vtb_sprite_crkdown_list___024root___nba_sequent__TOP__0(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___nba_sequent__TOP__0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word;
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[__Vi0] = 0;
    }
    VlUnpacked<QData/*33:0*/, 4> tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[__Vi0] = 0;
    }
    CData/*1:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__display_lane;
    tb_sprite_crkdown_list__DOT__dut__DOT__display_lane = 0;
    VlWide<4>/*127:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q;
    VL_ZERO_W(128, tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q);
    VlWide<3>/*80:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q;
    VL_ZERO_W(81, tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q);
    IData/*31:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__line_phys;
    tb_sprite_crkdown_list__DOT__dut__DOT__line_phys = 0;
    IData/*16:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word;
    tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word = 0;
    CData/*3:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble;
    tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble = 0;
    CData/*3:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__current_pen;
    tb_sprite_crkdown_list__DOT__dut__DOT__current_pen = 0;
    CData/*7:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color;
    tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color = 0;
    IData/*16:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__line_value;
    tb_sprite_crkdown_list__DOT__dut__DOT__line_value = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__clip_first;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_first = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__clip_last;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_last = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__d2;
    tb_sprite_crkdown_list__DOT__dut__DOT__d2 = 0;
    IData/*16:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__tile_base;
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_base = 0;
    CData/*7:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__tile_x;
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_x = 0;
    CData/*7:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__tile_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_y = 0;
    CData/*2:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__within_x;
    tb_sprite_crkdown_list__DOT__dut__DOT__within_x = 0;
    CData/*2:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__within_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__within_y = 0;
    IData/*17:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__word_calc;
    tb_sprite_crkdown_list__DOT__dut__DOT__word_calc = 0;
    SData/*13:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal;
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word;
    tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word = 0;
    IData/*18:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder;
    tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder = 0;
    SData/*11:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot;
    tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1 = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4 = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1 = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4 = 0;
    SData/*8:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step = 0;
    IData/*19:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_height;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_height = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y = 0;
    SData/*13:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y = 0;
    CData/*0:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed = 0;
    SData/*8:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step = 0;
    IData/*19:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y = 0;
    SData/*13:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y = 0;
    CData/*0:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed = 0;
    VlWide<3>/*80:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3;
    VL_ZERO_W(81, tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3);
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1 = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4 = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1 = 0;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4 = 0;
    SData/*8:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step = 0;
    SData/*8:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step = 0;
    IData/*19:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum = 0;
    IData/*19:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y = 0;
    SData/*13:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y = 0;
    SData/*13:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y = 0;
    CData/*0:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed = 0;
    CData/*0:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed = 0;
    CData/*0:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active = 0;
    CData/*0:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active = 0;
    CData/*0:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid = 0;
    CData/*2:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance = 0;
    SData/*11:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot = 0;
    VlWide<4>/*127:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor;
    VL_ZERO_W(128, tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor);
    VlWide<3>/*80:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip;
    VL_ZERO_W(81, tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip);
    IData/*31:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first;
    tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first = 0;
    SData/*12:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last;
    tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last = 0;
    VlWide<3>/*80:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word;
    VlWide<3>/*80:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word;
    VlWide<4>/*127:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word;
    VlWide<4>/*127:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word;
    VlWide<3>/*80:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word;
    VlWide<3>/*80:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word;
    VlWide<4>/*127:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word;
    VlWide<4>/*127:0*/ tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word;
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data);
    CData/*2:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index = 0;
    CData/*7:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data);
    CData/*3:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pen;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pen = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pair;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pair = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data);
    CData/*2:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data);
    CData/*2:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data);
    CData/*3:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data);
    CData/*2:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index = 0;
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__data);
    SData/*10:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__value;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__value = 0;
    IData/*22:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__word_offset;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__word_offset = 0;
    IData/*22:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__word_offset;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__word_offset = 0;
    IData/*22:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__word_offset;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__word_offset = 0;
    IData/*22:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__word_offset;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__word_offset = 0;
    SData/*10:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__value;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__value = 0;
    SData/*10:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__value;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__value = 0;
    IData/*22:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__word_offset;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__word_offset = 0;
    QData/*37:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value = 0;
    QData/*37:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value = 0;
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value);
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value);
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value);
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value);
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value);
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value);
    QData/*37:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value = 0;
    QData/*37:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value = 0;
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value);
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value);
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value);
    VlWide<3>/*80:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value;
    VL_ZERO_W(81, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value);
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value);
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value);
    VlWide<7>/*208:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout;
    VL_ZERO_W(209, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout);
    VlWide<4>/*118:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value;
    VL_ZERO_W(119, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value);
    VlWide<7>/*208:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value;
    VL_ZERO_W(209, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value);
    CData/*3:0*/ __Vdly__tb_sprite_crkdown_list__DOT__phase;
    __Vdly__tb_sprite_crkdown_list__DOT__phase = 0;
    IData/*31:0*/ __Vdly__tb_sprite_crkdown_list__DOT__line_index;
    __Vdly__tb_sprite_crkdown_list__DOT__line_index = 0;
    IData/*31:0*/ __Vdly__tb_sprite_crkdown_list__DOT__phase_count;
    __Vdly__tb_sprite_crkdown_list__DOT__phase_count = 0;
    CData/*4:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0;
    CData/*2:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank = 0;
    CData/*7:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch = 0;
    SData/*8:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__target_y = 0;
    SData/*8:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target = 0;
    SData/*12:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index = 0;
    SData/*13:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch = 0;
    VlWide<12>/*383:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary;
    VL_ZERO_W(384, __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary);
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid = 0;
    SData/*15:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top = 0;
    SData/*15:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom = 0;
    SData/*12:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count = 0;
    SData/*11:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head = 0;
    SData/*12:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor;
    VL_ZERO_W(128, __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor);
    SData/*13:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid = 0;
    SData/*12:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__mem_req;
    __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 0;
    SData/*8:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step = 0;
    SData/*8:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step = 0;
    CData/*2:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count = 0;
    SData/*10:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0;
    SData/*10:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column = 0;
    IData/*17:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend = 0;
    SData/*10:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows = 0;
    CData/*4:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count = 0;
    SData/*12:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last = 0;
    CData/*2:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count = 0;
    CData/*0:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last = 0;
    SData/*12:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y = 0;
    SData/*12:0*/ __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x = 0;
    SData/*8:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v1;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v1 = 0;
    SData/*8:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v1;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v1 = 0;
    SData/*8:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v1;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0;
    VL_ZERO_W(128, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0);
    CData/*2:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0 = 0;
    SData/*13:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3;
    VL_ZERO_W(128, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3);
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3);
    VlWide<4>/*127:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4;
    VL_ZERO_W(128, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4);
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4);
    VlWide<4>/*127:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5;
    VL_ZERO_W(128, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5);
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5);
    VlWide<4>/*127:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6;
    VL_ZERO_W(128, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6);
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6);
    VlWide<4>/*127:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7;
    VL_ZERO_W(128, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7);
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7);
    SData/*8:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8 = 0;
    CData/*7:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8 = 0;
    CData/*6:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0 = 0;
    QData/*33:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0 = 0;
    QData/*37:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0 = 0;
    QData/*37:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0);
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0);
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0 = 0;
    QData/*37:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0 = 0;
    QData/*37:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0;
    __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0);
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0;
    VL_ZERO_W(81, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0);
    SData/*10:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0 = 0;
    VlWide<4>/*118:0*/ __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0;
    VL_ZERO_W(119, __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0);
    SData/*9:0*/ __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0;
    __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_19;
    // Body
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__phase = vlSelfRef.tb_sprite_crkdown_list__DOT__phase;
    __Vdly__tb_sprite_crkdown_list__DOT__line_index 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__line_index;
    __Vdly__tb_sprite_crkdown_list__DOT__phase_count 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[0U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[1U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[2U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[3U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[4U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[4U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[5U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[5U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[6U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[6U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[7U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[7U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[8U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[8U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[9U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[9U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[10U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[10U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[11U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[11U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__emit_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index;
    __Vdly__tb_sprite_crkdown_list__DOT__mem_req = vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v0 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U];
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__target_y 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0 = 0U;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count;
    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__reset)))) {
                if (VL_UNLIKELY(((0U != ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
                                         & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: s24_sprite.sv:2122: Assertion failed in %m: sprite bank simultaneously filling and valid\n",3, 'M',vlSymsp->name(),"tb_sprite_crkdown_list.dut", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\s24_sprite.sv", 2122, "", false);
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: s24_sprite.sv:2124: Assertion failed in %m: multiple sprite line banks owned by producer\n",3, 'M',vlSymsp->name(),"tb_sprite_crkdown_list.dut", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\s24_sprite.sv", 2124, "", false);
                }
                if ((0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling))) {
                    if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                                               >> (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: s24_sprite.sv:2127: Assertion failed in %m: sprite fill_bank does not name owned bank\n",3, 'M',vlSymsp->name(),"tb_sprite_crkdown_list.dut", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\s24_sprite.sv", 2127, "", false);
                    }
                    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                                      == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: s24_sprite.sv:2129: Assertion failed in %m: sprite producer overwrote display bank\n",3, 'M',vlSymsp->name(),"tb_sprite_crkdown_list.dut", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\s24_sprite.sv", 2129, "", false);
                    }
                }
                if ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: s24_sprite.sv:2133: Assertion failed in %m: sprite bank ownership leaked into idle\n",3, 'M',vlSymsp->name(),"tb_sprite_crkdown_list.dut", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\s24_sprite.sv", 2133, "", false);
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__reset) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__init_line = 0U;
        while (VL_GTS_III(32, 0x00000180U, vlSelfRef.tb_sprite_crkdown_list__DOT__init_line)) {
            if (VL_LIKELY(((0x017fU >= (0x000001ffU 
                                        & vlSelfRef.tb_sprite_crkdown_list__DOT__init_line))))) {
                __VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v0 
                    = (0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__init_line);
                vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__filled_at.enqueue(0U, (IData)(__VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v0));
            }
            if (VL_LIKELY(((0x017fU >= (0x000001ffU 
                                        & vlSelfRef.tb_sprite_crkdown_list__DOT__init_line))))) {
                __VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v0 
                    = (0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__init_line);
                vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__walked_at.enqueue(0U, (IData)(__VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v0));
            }
            if (VL_LIKELY(((0x017fU >= (0x000001ffU 
                                        & vlSelfRef.tb_sprite_crkdown_list__DOT__init_line))))) {
                __VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v0 
                    = (0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__init_line);
                vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__drawn_at.enqueue(0U, (IData)(__VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v0));
            }
            vlSelfRef.tb_sprite_crkdown_list__DOT__init_line 
                = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__init_line);
        }
    } else if ((0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))) {
        if ((0x017fU >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))) {
            __VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v1 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
            vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__filled_at.enqueue(1U, (IData)(__VdlyDim0__tb_sprite_crkdown_list__DOT__filled_at__v1));
        }
        if ((IData)((0x30fd306fU == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U]))) {
            if ((0x017fU >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))) {
                __VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v1 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
                vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__walked_at.enqueue(1U, (IData)(__VdlyDim0__tb_sprite_crkdown_list__DOT__walked_at__v1));
            }
            if (((0x0dU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                 | (0x0cU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))) {
                if ((0x017fU >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))) {
                    __VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v1 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
                    vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__drawn_at.enqueue(1U, (IData)(__VdlyDim0__tb_sprite_crkdown_list__DOT__drawn_at__v1));
                }
            }
        }
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable) {
        __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U];
        __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U];
        __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[2U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U];
        __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[3U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U];
        __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[4U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U];
        __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[5U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U];
        __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[6U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[0U] 
            = (IData)((((QData)((IData)(((0xffff0000U 
                                          & ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[5U] 
                                              << 0x0000001fU) 
                                             | (0x7fff0000U 
                                                & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[4U] 
                                                   >> 1U)))) 
                                         | (0x0000ffffU 
                                            & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[3U] 
                                               >> 1U))))) 
                        << 1U) | (QData)((IData)((1U 
                                                  & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[2U] 
                                                     >> 0x0000001eU))))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U]) 
               | (IData)(((((QData)((IData)(((0xffff0000U 
                                              & ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[5U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fff0000U 
                                                    & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[4U] 
                                                       >> 1U)))) 
                                             | (0x0000ffffU 
                                                & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[3U] 
                                                   >> 1U))))) 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[2U] 
                                                         >> 0x0000001eU))))) 
                          >> 0x00000020U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U] 
            = ((0xfffe0001U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U]) 
               | (0x0001fffeU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[5U]));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[2U] 
            = ((0x007fffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[2U]) 
               | (0xff800000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[3U] 
                                 << 6U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[3U] 
            = (0x007fffffU & ((0x007fffc0U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[4U] 
                                              << 6U)) 
                              | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[3U] 
                                 >> 0x0000001aU)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U] 
            = ((0xf001ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U]) 
               | (((0x000007fcU & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[1U] 
                                   >> 0x0000000eU)) 
                   | ((2U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[2U] 
                             >> 0x0000000cU)) | (1U 
                                                 & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[2U] 
                                                    >> 0x00000010U)))) 
                  << 0x00000011U));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U] 
            = ((0x0fffffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U]) 
               | (((0x07fc0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[0U] 
                                   << 0x00000012U)) 
                   | ((0x0003fe00U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[0U] 
                                      >> 7U)) | (0x000001ffU 
                                                 & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[1U]))) 
                  << 0x0000001cU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[2U] 
            = ((0xff800000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[2U]) 
               | (((0x07fc0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[0U] 
                                   << 0x00000012U)) 
                   | ((0x0003fe00U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[0U] 
                                      >> 7U)) | (0x000001ffU 
                                                 & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__pack_word__54__value[1U]))) 
                  >> 4U));
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[0U];
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[1U];
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[2U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[2U];
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[3U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[3U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0 
            = (0x000003ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count));
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_enable) {
        if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot))) {
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word = 0ULL;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word 
                = ((0x0000003ffffff800ULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word) 
                   | (IData)((IData)(((0x000007fcU 
                                       & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[1U] 
                                          >> 0x0000000eU)) 
                                      | ((2U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[2U] 
                                                >> 0x0000000cU)) 
                                         | (1U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[2U] 
                                                  >> 0x00000010U)))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word 
                = ((0x00000000000007ffULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word) 
                   | ((QData)((IData)(((0x07fc0000U 
                                        & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[0U] 
                                           << 0x00000012U)) 
                                       | ((0x0003fe00U 
                                           & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[0U] 
                                              >> 7U)) 
                                          | (0x000001ffU 
                                             & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__39__value[1U]))))) 
                      << 0x0000000bU));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word;
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0 = 1U;
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word = 0ULL;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word 
                = ((0x0000003ffffff800ULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word) 
                   | (IData)((IData)(((0x000007fcU 
                                       & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[1U] 
                                          >> 0x0000000eU)) 
                                      | ((2U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[2U] 
                                                >> 0x0000000cU)) 
                                         | (1U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[2U] 
                                                  >> 0x00000010U)))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word 
                = ((0x00000000000007ffULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word) 
                   | ((QData)((IData)(((0x07fc0000U 
                                        & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[0U] 
                                           << 0x00000012U)) 
                                       | ((0x0003fe00U 
                                           & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[0U] 
                                              >> 7U)) 
                                          | (0x000001ffU 
                                             & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__47__value[1U]))))) 
                      << 0x0000000bU));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word;
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0 = 1U;
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[0U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[1U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[2U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[0U] 
                = (IData)((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[2U] 
                                              << 0x00000010U) 
                                             | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[0U] 
                                                >> 0x00000010U)))) 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[0U] 
                                                         >> 0x0000000dU))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[1U] 
                = ((0xfffffffeU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[1U]) 
                   | (IData)(((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[2U] 
                                                  << 0x00000010U) 
                                                 | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[0U] 
                                                    >> 0x00000010U)))) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[0U] 
                                                             >> 0x0000000dU))))) 
                              >> 0x00000020U)));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[1U] 
                = ((1U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[1U]) 
                   | ((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[1U])) 
                                << 0x00000010U) | (QData)((IData)(
                                                                  (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[2U] 
                                                                   >> 0x00000010U))))) 
                      << 1U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[2U] 
                = (0x0001ffffU & (((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[1U])) 
                                             << 0x00000010U) 
                                            | (QData)((IData)(
                                                              (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[2U] 
                                                               >> 0x00000010U))))) 
                                   >> 0x0000001fU) 
                                  | ((IData)(((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[1U])) 
                                                << 0x00000010U) 
                                               | (QData)((IData)(
                                                                 (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__43__value[2U] 
                                                                  >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 1U)));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[0U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[1U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[2U];
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0 = 1U;
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[0U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[1U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[2U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[0U] 
                = (IData)((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[2U] 
                                              << 0x00000010U) 
                                             | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[0U] 
                                                >> 0x00000010U)))) 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[0U] 
                                                         >> 0x0000000dU))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[1U] 
                = ((0xfffffffeU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[1U]) 
                   | (IData)(((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[2U] 
                                                  << 0x00000010U) 
                                                 | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[0U] 
                                                    >> 0x00000010U)))) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[0U] 
                                                             >> 0x0000000dU))))) 
                              >> 0x00000020U)));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[1U] 
                = ((1U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[1U]) 
                   | ((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[1U])) 
                                << 0x00000010U) | (QData)((IData)(
                                                                  (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[2U] 
                                                                   >> 0x00000010U))))) 
                      << 1U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[2U] 
                = (0x0001ffffU & (((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[1U])) 
                                             << 0x00000010U) 
                                            | (QData)((IData)(
                                                              (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[2U] 
                                                               >> 0x00000010U))))) 
                                   >> 0x0000001fU) 
                                  | ((IData)(((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[1U])) 
                                                << 0x00000010U) 
                                               | (QData)((IData)(
                                                                 (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__51__value[2U] 
                                                                  >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 1U)));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[0U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[1U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[2U];
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot)))) {
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word = 0ULL;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word 
                = ((0x0000003ffffff800ULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word) 
                   | (IData)((IData)(((0x000007fcU 
                                       & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[1U] 
                                          >> 0x0000000eU)) 
                                      | ((2U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[2U] 
                                                >> 0x0000000cU)) 
                                         | (1U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[2U] 
                                                  >> 0x00000010U)))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word 
                = ((0x00000000000007ffULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word) 
                   | ((QData)((IData)(((0x07fc0000U 
                                        & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[0U] 
                                           << 0x00000012U)) 
                                       | ((0x0003fe00U 
                                           & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[0U] 
                                              >> 7U)) 
                                          | (0x000001ffU 
                                             & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__pack_word__40__value[1U]))))) 
                      << 0x0000000bU));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word;
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0 = 1U;
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word = 0ULL;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word 
                = ((0x0000003ffffff800ULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word) 
                   | (IData)((IData)(((0x000007fcU 
                                       & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[1U] 
                                          >> 0x0000000eU)) 
                                      | ((2U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[2U] 
                                                >> 0x0000000cU)) 
                                         | (1U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[2U] 
                                                  >> 0x00000010U)))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word 
                = ((0x00000000000007ffULL & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word) 
                   | ((QData)((IData)(((0x07fc0000U 
                                        & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[0U] 
                                           << 0x00000012U)) 
                                       | ((0x0003fe00U 
                                           & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[0U] 
                                              >> 7U)) 
                                          | (0x000001ffU 
                                             & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__pack_word__48__value[1U]))))) 
                      << 0x0000000bU));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word;
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0 = 1U;
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[0U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[1U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[2U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[0U] 
                = (IData)((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[2U] 
                                              << 0x00000010U) 
                                             | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[0U] 
                                                >> 0x00000010U)))) 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[0U] 
                                                         >> 0x0000000dU))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[1U] 
                = ((0xfffffffeU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[1U]) 
                   | (IData)(((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[2U] 
                                                  << 0x00000010U) 
                                                 | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[0U] 
                                                    >> 0x00000010U)))) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[0U] 
                                                             >> 0x0000000dU))))) 
                              >> 0x00000020U)));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[1U] 
                = ((1U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[1U]) 
                   | ((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[1U])) 
                                << 0x00000010U) | (QData)((IData)(
                                                                  (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[2U] 
                                                                   >> 0x00000010U))))) 
                      << 1U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[2U] 
                = (0x0001ffffU & (((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[1U])) 
                                             << 0x00000010U) 
                                            | (QData)((IData)(
                                                              (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[2U] 
                                                               >> 0x00000010U))))) 
                                   >> 0x0000001fU) 
                                  | ((IData)(((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[1U])) 
                                                << 0x00000010U) 
                                               | (QData)((IData)(
                                                                 (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__pack_word__44__value[2U] 
                                                                  >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 1U)));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[0U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[1U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[2U];
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0 = 1U;
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[0U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[1U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[2U] = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[0U] 
                = (IData)((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[2U] 
                                              << 0x00000010U) 
                                             | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[0U] 
                                                >> 0x00000010U)))) 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[0U] 
                                                         >> 0x0000000dU))))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[1U] 
                = ((0xfffffffeU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[1U]) 
                   | (IData)(((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[2U] 
                                                  << 0x00000010U) 
                                                 | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[0U] 
                                                    >> 0x00000010U)))) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[0U] 
                                                             >> 0x0000000dU))))) 
                              >> 0x00000020U)));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[1U] 
                = ((1U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[1U]) 
                   | ((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[1U])) 
                                << 0x00000010U) | (QData)((IData)(
                                                                  (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[2U] 
                                                                   >> 0x00000010U))))) 
                      << 1U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[2U] 
                = (0x0001ffffU & (((IData)((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[1U])) 
                                             << 0x00000010U) 
                                            | (QData)((IData)(
                                                              (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[2U] 
                                                               >> 0x00000010U))))) 
                                   >> 0x0000001fU) 
                                  | ((IData)(((((QData)((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[1U])) 
                                                << 0x00000010U) 
                                               | (QData)((IData)(
                                                                 (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__pack_word__52__value[2U] 
                                                                  >> 0x00000010U)))) 
                                              >> 0x00000020U)) 
                                     << 1U)));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[0U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[1U];
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[2U];
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                  >> 1U));
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
          >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                    | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
         & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
            | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
         & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
            | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
         & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
            | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
         & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
            | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))) {
        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U];
        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U];
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__reset) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation = 0U;
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v0 = 1U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr = 0U;
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v0 = 1U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__target_y = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch = 0U;
        VL_ASSIGN_W(384, __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary, Vtb_sprite_crkdown_list__ConstPool__CONST_h997e551f_0);
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_flags = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U] = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U] = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[3U] = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[2U] = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last = 0U;
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v0 = 1U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipy = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles = 1U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles = 1U;
        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1 = 1U;
    } else {
        if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary) {
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch 
                = (1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch)));
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending = 1U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid = 0U;
        }
        if (vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel) {
            if ((0x028fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount))) {
                if (((0x01a7U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount)) 
                     | (0x017fU > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount)))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank;
                    if (((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling)) 
                         & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[0U] 
                            < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0xfeU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                    if (((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 1U)) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[1U] 
                                        < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0xfdU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                    if (((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 2U)) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[2U] 
                                        < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0xfbU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                    if (((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 3U)) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[3U] 
                                        < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0xf7U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                    if (((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 4U)) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[4U] 
                                        < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0xefU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                    if (((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 5U)) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[5U] 
                                        < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0xdfU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                    if (((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 6U)) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[6U] 
                                        < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0xbfU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                    if (((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 7U)) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[7U] 
                                        < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (0x7fU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                    }
                }
            }
        }
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req = 0U;
        if ((0x00000010U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling = 0U;
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                       & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
            } else if ((4U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling = 0U;
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                       & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    if ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
                            = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                               & (IData)(__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid)) 
                               | (0x00ffU & ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch) 
                                               == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch)) 
                                              & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary))) 
                                             << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))));
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                            = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                              - (IData)(1U)));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[0U];
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[1U];
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[2U];
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[3U];
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U];
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U];
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[2U];
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx 
                            = (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                     >> 0x00000010U));
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipy 
                            = (1U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U]);
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles 
                            = (0x000000ffU & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                                     >> 0x0000000dU))));
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles 
                            = (0x000000ffU & ((IData)(1U) 
                                              << (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x0000001dU)));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step 
                            = (0x000001ffU & ((0x40000000U 
                                               & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U])
                                               ? ((0U 
                                                   == 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                       >> 9U)))
                                                   ? 0x0040U
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                       >> 9U))))
                                               : ((0U 
                                                   == 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                       >> 1U)))
                                                   ? 0x0040U
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                       >> 1U))))));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step 
                            = ((0U == (0x000000ffU 
                                       & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                          >> 1U))) ? 0x00000040U
                                : (0x000001ffU & ((IData)(1U) 
                                                  + 
                                                  (0x000000ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                      >> 1U)))));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x 
                            = (0x00001fffU & (((0x00001000U 
                                                & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U]) 
                                               | (0x00000fffU 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                                     >> 1U))) 
                                              - (IData)(8U)));
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width 
                            = (0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum 
                                              >> 6U));
                        if ((VL_GTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x)) 
                             | VL_LTS_III(14, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_right_x), 
                                          (0x00003fffU 
                                           & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x)))))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                        } else if ((0x0040U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step))) {
                            if ((1U & (((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed)) 
                                        | VL_LTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y))) 
                                       | VL_GTES_III(14, 
                                                     (0x00003fffU 
                                                      & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_bottom_y))))) {
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y;
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0U;
                                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                            } else {
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
                                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0dU;
                                __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__value 
                                    = (0x00001fffU 
                                       & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                                          - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y)));
                                __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__Vfuncout 
                                    = (0x000007ffU 
                                       & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__value));
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row 
                                    = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__29__Vfuncout;
                            }
                        } else if ((1U & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed)) 
                                          | VL_LTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y))))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
                                = (0x0003ffffU & ((IData)(0x0000001fU) 
                                                  + 
                                                  ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_target_offset) 
                                                   << 6U)));
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows 
                                = (0x000007ffU & ((IData)(8U) 
                                                  << 
                                                  (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                   >> 0x0000001dU)));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count = 0x12U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0cU;
                        }
                    }
                } else if ((1U & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                                  | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                                     != vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[0U])))) {
                    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__word_offset 
                        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[0U]) 
                           << 3U);
                    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__Vfuncout 
                        = (0x007fffffU & ((IData)(0x00400000U) 
                                          + (0x00003fffU 
                                             & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__word_offset 
                                                >> 3U))));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__30__Vfuncout;
                    __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 1U;
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x10U;
                } else {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x 
                        = (0x00001fffU & ((IData)(4U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column 
                        = (0x000007ffU & ((IData)(4U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column)));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state 
                        = (((0x000007ffU & ((IData)(4U) 
                                            + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column))) 
                            >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_columns))
                            ? 0x13U : 0x0fU);
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if ((1U & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                           | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                              != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))))) {
                    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__word_offset 
                        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag) 
                           << 3U);
                    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__Vfuncout 
                        = (0x007fffffU & ((IData)(0x00400000U) 
                                          + (0x00003fffU 
                                             & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__word_offset 
                                                >> 3U))));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__31__Vfuncout;
                    __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 1U;
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x10U;
                } else {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)));
                    if ((1U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__emit_count))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column 
                            = (0x000007ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column)));
                        if (((0x000007ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column))) 
                             >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_columns))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count = 0U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                        } else if ((0x0040U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count = 1U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x11U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count = 0U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0fU;
                        }
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count 
                            = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__emit_count) 
                                     - (IData)(1U)));
                    }
                }
            } else if (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req) {
                __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 0U;
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid = 1U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0fU;
            }
        } else if ((8U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                        if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column) 
                             >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_columns))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                        } else if ((0U == (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum) 
                                                 >> 6U)))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column 
                                = (0x000007ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column)));
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum 
                                = (0x0000003fU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum));
                        } else if ((1U & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                                          | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))))) {
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__word_offset 
                                = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag) 
                                   << 3U);
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__Vfuncout 
                                = (0x007fffffU & ((IData)(0x00400000U) 
                                                  + 
                                                  (0x00003fffU 
                                                   & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__word_offset 
                                                      >> 3U))));
                            vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__32__Vfuncout;
                            __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 1U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x10U;
                        } else if (((((0x0040U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step)) 
                                      & (0x0040U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step))) 
                                     & (0U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column)))) 
                                    & ((0x000007ffU 
                                        & ((IData)(4U) 
                                           + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column))) 
                                       <= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_columns)))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x12U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count 
                                = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum) 
                                         >> 6U));
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum 
                                = (0x0000003fU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x11U;
                        }
                    } else if (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req) {
                        __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column = 0U;
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
                        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0 
                            = (7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                     >> 0x00000010U));
                        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0 = 1U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum = 0x20U;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0fU;
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0 
                            = (0x00003fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                              >> 0x00000010U));
                        __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0 
                            = (7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                     >> 0x00000010U));
                        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0 = 1U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid 
                            = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid) 
                               | (0x00ffU & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                                    >> 0x00000010U)))));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x 
                            = (0x00001fffU & (((0x00001000U 
                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                                                   >> 0x0000000fU)) 
                                               | (0x00000fffU 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                                                     >> 0x00000010U))) 
                                              - (IData)(8U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    if ((1U & (((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed)) 
                                | VL_GTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))) 
                               | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row) 
                                  >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_rows))))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                    } else if ((VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y)) 
                                & VL_LTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                             (0x00001fffU 
                                              & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y) 
                                                 + 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_sum) 
                                                     >> 6U))))))) {
                        if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_hit) {
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U] 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data
                                [(7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                        >> 0x00000010U))][0U];
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U] 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data
                                [(7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                        >> 0x00000010U))][1U];
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U] 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data
                                [(7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                        >> 0x00000010U))][2U];
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U] 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data
                                [(7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                        >> 0x00000010U))][3U];
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum = 0x20U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0fU;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x 
                                = (0x00001fffU & ((
                                                   (0x00001000U 
                                                    & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                                                       >> 0x0000000fU)) 
                                                   | (0x00000fffU 
                                                      & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                                                         >> 0x00000010U))) 
                                                  - (IData)(8U)));
                        } else {
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__word_offset 
                                = (0x0001fff8U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                                  >> 0x0000000dU));
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__Vfuncout 
                                = (0x007fffffU & ((IData)(0x00400000U) 
                                                  + 
                                                  (0x00003fffU 
                                                   & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__word_offset 
                                                      >> 3U))));
                            vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__33__Vfuncout;
                            __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 1U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0eU;
                        }
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                            = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y) 
                                              + (7U 
                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_sum) 
                                                    >> 6U))));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row 
                            = (0x000007ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row)));
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum 
                            = (0x0000003fU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_sum));
                    }
                } else {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
                        = (0x0003fffeU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
                                          << 1U));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder;
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient;
                    if ((1U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count = 0U;
                        if ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient 
                             >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row 
                                = (0x000007ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient);
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                                                  + 
                                                  VL_SHIFTRS_III(13,13,32, 
                                                                 (0x00001fffU 
                                                                  & VL_EXTENDS_II(13,10, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_adjust_value))), 6U)));
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum 
                                = (0x0000003fU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_adjust_value));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0dU;
                        }
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count 
                            = (0x0000001fU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count) 
                                              - (IData)(1U)));
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    if ((VL_GTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x)) 
                         | VL_LTS_III(14, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_right_x), 
                                      (0x00003fffU 
                                       & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x)))))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                    } else if ((0x0040U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step))) {
                        if ((1U & (((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed)) 
                                    | VL_LTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y))) 
                                   | VL_GTES_III(14, 
                                                 (0x00003fffU 
                                                  & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_bottom_y))))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0dU;
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__value 
                                = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                                                  - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y)));
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__Vfuncout 
                                = (0x000007ffU & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__value));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row 
                                = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__34__Vfuncout;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed)) 
                                      | VL_LTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y))))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
                            = (0x0003ffffU & ((IData)(0x0000001fU) 
                                              + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_target_offset) 
                                                 << 6U)));
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows 
                            = (0x000007ffU & ((IData)(8U) 
                                              << (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x0000001dU)));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count = 0x12U;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0cU;
                    }
                } else {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[0U];
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[1U];
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[2U];
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[3U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[1U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[2U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx 
                        = (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                 >> 0x00000010U));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipy 
                        = (1U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U]);
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles 
                        = (0x000000ffU & ((IData)(1U) 
                                          << (7U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                               >> 0x0000000dU))));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles 
                        = (0x000000ffU & ((IData)(1U) 
                                          << (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                              >> 0x0000001dU)));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step 
                        = (0x000001ffU & ((0x40000000U 
                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U])
                                           ? ((0U == 
                                               (0x000000ffU 
                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                   >> 9U)))
                                               ? 0x0040U
                                               : ((IData)(1U) 
                                                  + 
                                                  (0x000000ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                      >> 9U))))
                                           : ((0U == 
                                               (0x000000ffU 
                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                   >> 1U)))
                                               ? 0x0040U
                                               : ((IData)(1U) 
                                                  + 
                                                  (0x000000ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                      >> 1U))))));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step 
                        = ((0U == (0x000000ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                  >> 1U)))
                            ? 0x00000040U : (0x000001ffU 
                                             & ((IData)(1U) 
                                                + (0x000000ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                      >> 1U)))));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x 
                        = (0x00001fffU & (((0x00001000U 
                                            & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U]) 
                                           | (0x00000fffU 
                                              & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                                 >> 1U))) 
                                          - (IData)(8U)));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width 
                        = (0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum 
                                          >> 6U));
                    if ((VL_GTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x)) 
                         | VL_LTS_III(14, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_right_x), 
                                      (0x00003fffU 
                                       & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x)))))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                    } else if ((0x0040U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step))) {
                        if ((1U & (((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed)) 
                                    | VL_LTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y))) 
                                   | VL_GTES_III(14, 
                                                 (0x00003fffU 
                                                  & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_bottom_y))))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0dU;
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__value 
                                = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                                                  - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y)));
                            __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__Vfuncout 
                                = (0x000007ffU & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__value));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row 
                                = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__source_row_delta__35__Vfuncout;
                        }
                    } else if ((1U & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed)) 
                                      | VL_LTS_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y))))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = 0x20U;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x13U;
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
                            = (0x0003ffffU & ((IData)(0x0000001fU) 
                                              + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_target_offset) 
                                                 << 6U)));
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder = 0U;
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows 
                            = (0x000007ffU & ((IData)(8U) 
                                              << (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x0000001dU)));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count = 0x12U;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0cU;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))) {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 1U;
                }
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0x0aU;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)));
                    if ((1U < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count 
                            = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count) 
                                     - (IData)(1U)));
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][3U];
                        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3 = 1U;
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][3U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][2U];
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count = 0U;
                        if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 8U;
                        } else {
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 5U;
                        }
                    }
                } else {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)));
                    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 8U;
                    } else {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 5U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid) {
                    if ((0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count 
                            = (0x00001fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count 
                            = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count) 
                                     - (IData)(1U)));
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last 
                            = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos) 
                               >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count));
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][3U];
                        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5 = 1U;
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][3U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][2U];
                        if ((1U < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 7U;
                        } else if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos) 
                                    >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 8U;
                        } else {
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos;
                        }
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][2U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[3U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][3U];
                        __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7 = 1U;
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7[0U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][0U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7[1U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][1U];
                        __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7[2U] 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][2U];
                    } else if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos) 
                                >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) {
                        if ((0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                                = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count) 
                                                  - (IData)(1U)));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 8U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                                   & (IData)(__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                                = (((~ ((IData)(1U) 
                                        << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                                    & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid)) 
                                   | (0x00ffU & ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch) 
                                                   == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch)) 
                                                  & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary))) 
                                                 << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))));
                        }
                    } else {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos;
                    }
                } else if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active) 
                            & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active))) {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[0U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[1U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[2U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[3U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[0U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[0U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[1U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[1U];
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[2U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U];
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last 
                        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos) 
                           >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 6U;
                } else {
                    if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active) 
                         | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count 
                            = (0x00001fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)));
                    }
                    if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos) 
                         >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) {
                        if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active) 
                             | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count;
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 8U;
                        } else if ((0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                                = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count) 
                                                  - (IData)(1U)));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 8U;
                        } else {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                                   & (IData)(__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling));
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                                = (((~ ((IData)(1U) 
                                        << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                                    & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid)) 
                                   | (0x00ffU & ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch) 
                                                   == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch)) 
                                                  & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary))) 
                                                 << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))));
                        }
                    } else {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos;
                    }
                }
            } else {
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req) {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen)));
                    __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 0U;
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U];
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U];
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U];
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U] 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U];
                    if ((((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index)) 
                          & (0U == (0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U]))) 
                         | (3U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] 
                                         >> 0x0000000eU))))) {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = 1U;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending = 0U;
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
                    } else {
                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index 
                            = (0x00001fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U]);
                        if ((1U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] 
                                          >> 0x0000000eU)))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid = 1U;
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_flags 
                                = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] 
                                   >> 0x00000010U);
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top 
                                = (0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U]);
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left 
                                = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] 
                                   >> 0x00000010U);
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom 
                                = (0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U]);
                            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right 
                                = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] 
                                   >> 0x00000010U);
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 2U;
                        } else if ((2U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] 
                                                 >> 0x0000000eU)))) {
                            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 2U;
                        } else {
                            if ((0x1000U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) {
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count 
                                    = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count)));
                            } else {
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head 
                                    = (0x00000fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head)));
                            }
                            if ((VL_LTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y))) 
                                 & VL_GTS_III(14, 0x0180U, 
                                              (0x00003fffU 
                                               & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y)))))) {
                                if ((0x017fU >= (0x000001ffU 
                                                 & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y)))) {
                                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[(0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y) 
                                                                                >> 5U))] 
                                        = (__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary
                                           [(0x0000000fU 
                                             & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y) 
                                                >> 5U))] 
                                           | ((IData)(1U) 
                                              << (0x0000001fU 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y))));
                                }
                            }
                            if ((0U == (0x00001fffU 
                                        & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U]))) {
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = 1U;
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending = 0U;
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
                            } else {
                                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 2U;
                            }
                            if ((VL_LTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,14, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y))) 
                                 & VL_GTS_III(14, 0x0180U, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y)))) {
                                if ((0x017fU >= (0x000001ffU 
                                                 & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y)))) {
                                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[(0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y) 
                                                                                >> 5U))] 
                                        = (__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary
                                           [(0x0000000fU 
                                             & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y) 
                                                >> 5U))] 
                                           | ((IData)(1U) 
                                              << (0x0000001fU 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y))));
                                }
                            }
                            if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid) {
                                if ((0x0180U > (0x000001ffU 
                                                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top)))) {
                                    if ((0x017fU >= 
                                         (0x000001ffU 
                                          & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top)))) {
                                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[(0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top) 
                                                                                >> 5U))] 
                                            = (__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary
                                               [(0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top) 
                                                    >> 5U))] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top))));
                                    }
                                }
                                if ((0x0180U > (0x000001ffU 
                                                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom)))) {
                                    if ((0x017fU >= 
                                         (0x000001ffU 
                                          & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom)))) {
                                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[(0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom) 
                                                                                >> 5U))] 
                                            = (__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary
                                               [(0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom) 
                                                    >> 5U))] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x0000001fU 
                                                   & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom))));
                                    }
                                }
                                if ((0x017fU > (0x000001ffU 
                                                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top)))) {
                                    if ((0x017fU >= 
                                         (0x000001ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top))))) {
                                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[(0x0000000fU 
                                                                                & (((IData)(1U) 
                                                                                + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top)) 
                                                                                >> 5U))] 
                                            = (__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary
                                               [(0x0000000fU 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top)) 
                                                    >> 5U))] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top)))));
                                    }
                                }
                                if ((0x017fU > (0x000001ffU 
                                                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom)))) {
                                    if ((0x017fU >= 
                                         (0x000001ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom))))) {
                                        __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[(0x0000000fU 
                                                                                & (((IData)(1U) 
                                                                                + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom)) 
                                                                                >> 5U))] 
                                            = (__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary
                                               [(0x0000000fU 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom)) 
                                                    >> 5U))] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom)))));
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x2000U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen))) {
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = 1U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
            } else {
                __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__word_offset 
                    = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index) 
                       << 3U);
                __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__Vfuncout 
                    = (0x007fffffU & ((IData)(0x00400000U) 
                                      + (0x00003fffU 
                                         & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__word_offset 
                                            >> 3U))));
                vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                    = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__sprite_burst__36__Vfuncout;
                __Vdly__tb_sprite_crkdown_list__DOT__mem_req = 1U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid) {
                if ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 1U;
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                           & (IData)(__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))) 
                            & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid)) 
                           | (0x00ffU & ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch) 
                                           == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch)) 
                                          & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary))) 
                                         << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank))));
                } else {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 4U;
                }
            } else {
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 2U;
            }
        } else if ((1U & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid)) 
                          | (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel) 
                              & (0x028fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount))) 
                             & (0x017fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount)))))) {
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target = 0U;
            VL_ASSIGN_W(384, __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary, Vtb_sprite_crkdown_list__ConstPool__CONST_h997e551f_0);
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 2U;
        } else if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending) {
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target = 0U;
            VL_ASSIGN_W(384, __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary, Vtb_sprite_crkdown_list__ConstPool__CONST_h997e551f_0);
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 2U;
        } else if (((0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target)) 
                    & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid))) {
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation
                                                        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate])));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target;
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate;
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8 = 1U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req = 1U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr 
                = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate) 
                    << 7U) | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub
                   [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate]);
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid = 0U;
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation
                                                        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate])));
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate;
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8 = 1U;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
                = ((IData)(__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                   | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate))));
            __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub
                                                        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate])));
            __VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate;
            __VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8 = 1U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate))) 
                   & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid));
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__target_y 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target;
            __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target)));
            if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid) 
                 & (~ ((0x017fU >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target)) 
                       && (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary
                                 [((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target) 
                                   >> 5U)] >> (0x0000001fU 
                                               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target)))))))) {
                if ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count))) {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate))) 
                           & (IData)(__Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling));
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate))) 
                            & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid)) 
                           | (0x00ffU & ((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary))) 
                                         << (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate))));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 0U;
                } else {
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
                        = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count) 
                                          - (IData)(1U)));
                    __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 8U;
                }
            } else {
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state = 1U;
            }
        }
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U]];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U]];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2][0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2][1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2][2U];
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[3U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[0U] 
        = ((0xffffdfffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[0U]) 
           | (0x00002000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[0U] 
                             << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[0U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[0U]) 
           | (0xffff0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[0U] 
                             << 0x0000000fU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[1U] 
        = ((0x0000ffffU & (IData)((((QData)((IData)(
                                                    ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                      << 0x0000000fU) 
                                                     | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[0U] 
                                                        >> 0x00000011U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[2U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                         >> 0x00000011U))))))) 
           | (0xffff0000U & (IData)((((QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[0U] 
                                                          >> 0x00000011U)))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[2U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                           >> 0x00000011U))))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[2U] 
        = ((0x0000ffffU & (IData)(((((QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[0U] 
                                                         >> 0x00000011U)))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[2U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                          >> 0x00000011U))))) 
                                   >> 0x00000020U))) 
           | (0xffff0000U & (IData)(((((QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[0U] 
                                                           >> 0x00000011U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[2U] 
                                                          << 0x0000000fU) 
                                                         | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__41__value[1U] 
                                                            >> 0x00000011U))))) 
                                     >> 0x00000020U))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2][0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2][1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2][2U];
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[3U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[0U] 
        = ((0xffffdfffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[0U]) 
           | (0x00002000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[0U] 
                             << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[0U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[0U]) 
           | (0xffff0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[0U] 
                             << 0x0000000fU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[1U] 
        = ((0x0000ffffU & (IData)((((QData)((IData)(
                                                    ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                      << 0x0000000fU) 
                                                     | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[0U] 
                                                        >> 0x00000011U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[2U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                         >> 0x00000011U))))))) 
           | (0xffff0000U & (IData)((((QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[0U] 
                                                          >> 0x00000011U)))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[2U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                           >> 0x00000011U))))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[2U] 
        = ((0x0000ffffU & (IData)(((((QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[0U] 
                                                         >> 0x00000011U)))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[2U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                          >> 0x00000011U))))) 
                                   >> 0x00000020U))) 
           | (0xffff0000U & (IData)(((((QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[0U] 
                                                           >> 0x00000011U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[2U] 
                                                          << 0x0000000fU) 
                                                         | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__unpack_word__42__value[1U] 
                                                            >> 0x00000011U))))) 
                                     >> 0x00000020U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_1__unpack_word[3U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_0__unpack_word[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2];
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[2U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[2U]) 
           | (0x00010000U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value) 
                             << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[2U] 
        = ((0x0001dfffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[2U]) 
           | (0x00002000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value 
                                      >> 1U)) << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[1U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[1U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value 
                                      >> 2U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[1U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[1U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value 
                                     >> 0x0bU))));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[0U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[0U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value 
                                      >> 0x14U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[0U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[0U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__37__value 
                                     >> 0x1dU))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2];
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[2U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[2U]) 
           | (0x00010000U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value) 
                             << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[2U] 
        = ((0x0001dfffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[2U]) 
           | (0x00002000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value 
                                      >> 1U)) << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[1U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[1U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value 
                                      >> 2U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[1U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[1U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value 
                                     >> 0x0bU))));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[0U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[0U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value 
                                      >> 0x14U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[0U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[0U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__unpack_word__38__value 
                                     >> 0x1dU))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U] 
        = ((tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[0U] 
            << 0x00000011U) | tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_1__unpack_word[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[3U] 
        = ((tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[0U] 
            >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[1U] 
                               << 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[4U] 
        = ((tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[1U] 
            >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[2U] 
                               << 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[5U] 
        = (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_0__unpack_word[2U] 
           >> 0x0000000fU);
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair];
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[2U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[2U]) 
           | (0x00010000U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value) 
                             << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[2U] 
        = ((0x0001dfffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[2U]) 
           | (0x00002000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value 
                                      >> 1U)) << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[1U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[1U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value 
                                      >> 2U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[1U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[1U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value 
                                     >> 0x0bU))));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[0U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[0U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value 
                                      >> 0x14U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[0U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[0U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__45__value 
                                     >> 0x1dU))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair];
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[2U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[2U]) 
           | (0x00010000U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value) 
                             << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[2U] 
        = ((0x0001dfffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[2U]) 
           | (0x00002000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value 
                                      >> 1U)) << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[1U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[1U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value 
                                      >> 2U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[1U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[1U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value 
                                     >> 0x0bU))));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[0U] 
        = ((0xfe00ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[0U]) 
           | (0x01ff0000U & ((IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value 
                                      >> 0x14U)) << 0x00000010U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[0U] 
        = ((0xfffffe00U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[0U]) 
           | (0x000001ffU & (IData)((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__unpack_word__46__value 
                                     >> 0x1dU))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U] 
        = ((tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[0U] 
            << 0x00000011U) | tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_1__unpack_word[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
        = ((tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[0U] 
            >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[1U] 
                               << 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
        = ((tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[1U] 
            >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[2U] 
                               << 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[5U] 
        = (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_0__unpack_word[2U] 
           >> 0x0000000fU);
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi__v0[2U];
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo__v0[2U];
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi__v0;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo__v0;
    }
    tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U] 
                               >> 0x00000011U));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[3U] 
                               >> 0x00000011U));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U] 
        = (0x0001ffffU & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[5U] 
                           << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[4U] 
                                              >> 0x00000011U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[0U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[1U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[2U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[3U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[3U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[4U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[4U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[5U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[5U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[6U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[6U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[7U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[7U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[8U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[8U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[9U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[9U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[10U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[10U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[11U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary[11U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__emit_count 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__emit_count;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_y;
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0][3U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data__v0[3U];
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step;
    vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req 
        = __Vdly__tb_sprite_crkdown_list__DOT__mem_req;
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags__v0;
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__dest_x;
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[0U] = 0x01ffU;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[4U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[5U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[6U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[7U] = 0U;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v8;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[0U] = 0U;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[4U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[5U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[6U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[7U] = 0U;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub__v8;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[1U] = 0x01ffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[2U] = 0x01ffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[3U] = 0x01ffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[4U] = 0x01ffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[5U] = 0x01ffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[6U] = 0x01ffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[7U] = 0x01ffU;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y__v8;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][2U] = 0U;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation__v1) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][3U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][2U] = 0U;
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v3[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][3U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v4[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v3[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v4[2U];
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v5[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[1U][3U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v6[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v5[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[1U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v6[2U];
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[2U][3U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor__v7[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[2U][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip__v7[2U];
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_row;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__source_column;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U] 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[0U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[1U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U] 
        = (0x0001ffffU & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[5U] 
                           << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                                              >> 0x00000011U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__target_y;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_head;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_right_x 
        = (0x00003fffU & ((((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x)) 
                           + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width)) 
                          - (IData)(1U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right))))) 
                   >> 0x00000020U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_write_data[2U] 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid) 
            << 0x00000010U) | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_flags));
    tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder 
        = ((0x0007fffeU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder 
                           << 1U)) | (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
                                            >> 0x11U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder 
        = tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient 
        = (0x0003fffeU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient 
                          << 1U));
    if ((tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder 
         >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder 
            = (0x0007ffffU & (tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder 
                              - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient 
            = (1U | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient);
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_adjust_value 
        = (0x000003ffU & ((IData)(0x003fU) - (0x000001ffU 
                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder)));
    if ((0U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x00000401U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x01f7017fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000401U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x00004402U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x01ef017fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000402U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0403U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30234062U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000403U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0404U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x3063405eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000404U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0405U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30e34056U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000405U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0406U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x3fe34066U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000406U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0407U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x31234052U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000407U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0408U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30a3405aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000408U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0409U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20772075U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000409U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f040aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20852075U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000040aU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f040bU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20932074U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000040bU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f040cU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20bd2071U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000040cU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f040dU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20cb2070U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000040dU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f040eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x2feb207eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000040eU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f040fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20312079U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000040fU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0410U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x203f2079U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000410U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0411U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x204d2078U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000411U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0412U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20692076U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000412U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0413U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20af2072U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000413U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0414U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x2007207cU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000414U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0415U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x2023207aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000415U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0416U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x2015207bU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000416U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0417U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x2ff9207dU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000417U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0418U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20d9206fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000418U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0419U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x20a12073U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000419U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f041aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x205b2077U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000041aU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x0000441bU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x01ef013fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000041bU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f041cU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30fd306fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000041cU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x2000441dU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x01ef017fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000041dU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f041eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x21b81170U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000041eU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f041fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x315830c0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x0000041fU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0420U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x31583100U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000420U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0421U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x31583140U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000421U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0422U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30283140U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000422U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0423U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30683140U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000423U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0424U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30283100U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000424U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0425U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30683100U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000425U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0426U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x302810f0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000426U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0427U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x306810f0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000427U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0428U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x304830b0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000428U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x003f0429U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30480158U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000429U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0xffffffffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0xffffffffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0xffffffffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0xffffffffU;
    } else if ((0x00000800U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x30303030U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x30303030U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x30303030U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0x30303030U;
    } else if ((0x00002000U <= (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0x11111111U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0x11111111U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0x11111111U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0x11111111U;
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[3U] = 0U;
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 0U;
    if ((((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid)) 
          & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling))) 
         & (0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
               >> 1U)) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 1U))) & (1U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 1U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
               >> 2U)) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 2U))) & (2U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 2U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
               >> 3U)) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 3U))) & (3U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 3U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
               >> 4U)) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 4U))) & (4U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 4U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
               >> 5U)) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 5U))) & (5U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 5U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
               >> 6U)) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 6U))) & (6U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 6U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    if (((((~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
               >> 7U)) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                             >> 7U))) & (7U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank))) 
         & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = 7U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = 1U;
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U] 
        = ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                           << 1U)) | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U] 
        = (0x00003fffU & ((IData)(1U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U] 
        = (0x00003fffU & ((IData)(2U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U] 
        = (0x00003fffU & ((IData)(3U) + ((0x00002000U 
                                          & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x 
        = (0x00001fffU & (((0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[1U]) 
                           - (IData)(8U)) & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U] 
                                                           >> 0x00000010U))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_columns 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles) 
           << 3U);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_rows 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles) 
           << 3U);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_hit 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid) 
            >> (7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                      >> 0x00000010U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags
                                           [(7U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                                   >> 0x00000010U))] 
                                           == (0x00003fffU 
                                               & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U] 
                                                  >> 0x00000010U))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data[1U]);
    tb_sprite_crkdown_list__DOT__dut__DOT__d2 = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
        = (0x0001fff0U & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__d2) 
                          << 4U));
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_y = 
        (0x000000ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row) 
                        >> 3U));
    tb_sprite_crkdown_list__DOT__dut__DOT__within_y 
        = (7U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row));
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_x = 
        (0x000000ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column) 
                        >> 3U));
    tb_sprite_crkdown_list__DOT__dut__DOT__within_x 
        = (7U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column));
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipy) {
        tb_sprite_crkdown_list__DOT__dut__DOT__tile_y 
            = (0x000000ffU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles) 
                               - (IData)(1U)) - (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_y)));
        tb_sprite_crkdown_list__DOT__dut__DOT__within_y 
            = (7U & ((IData)(7U) - (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_y)));
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx) {
        tb_sprite_crkdown_list__DOT__dut__DOT__tile_x 
            = (0x000000ffU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles) 
                               - (IData)(1U)) - (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_x)));
        tb_sprite_crkdown_list__DOT__dut__DOT__within_x 
            = (7U & ((IData)(7U) - (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_x)));
    }
    tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal 
        = (0x00003fffU & (((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                           * (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles)) 
                          + (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_x)));
    tb_sprite_crkdown_list__DOT__dut__DOT__word_calc 
        = (0x0003ffffU & (((tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_x) 
                                 >> 2U))));
    tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word 
        = (0x0001ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__word_calc);
    tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble 
        = (0x0000000cU & ((~ (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_x)) 
                          << 2U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag 
        = (0x00003fffU & (tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word 
                          >> 3U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index 
        = (7U & tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word);
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index) 
                                                     << 4U)))));
    tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT__current_pen 
        = (0x0000000fU & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word) 
                          >> (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pen 
        = tb_sprite_crkdown_list__DOT__dut__DOT__current_pen;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data[0U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data[1U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data[2U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data[3U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__palette_data[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pair 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__11__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__Vfuncout 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pen))
                           ? (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pair)
                           : ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pair) 
                              >> 8U)));
    tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
        = ((0U == (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color))
            ? 0U : ((1U == (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color))
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color) 
                                           << 8U)) 
                                       | (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[0U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0U])
                  : vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0U]));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[0U] 
        = (0x0001ffffU & (((tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[0U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[0U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[0U] 
                          >> 3U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index 
        = (7U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[0U]);
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[3U];
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[0U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[0U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[0U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen))
                           ? (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair)
                           : ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
        = ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[0U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[0U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[0U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[0U]))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[1U] 
        = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[1U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[1U])
                  : vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[1U]));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[1U] 
        = (0x0001ffffU & (((tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[1U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[1U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[1U] 
                          >> 3U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index 
        = (7U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[1U]);
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[3U];
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[1U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[1U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[1U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen))
                           ? (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair)
                           : ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
        = ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[1U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[1U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[1U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[1U]))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[2U] 
        = (0x000007ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[2U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[2U])
                  : vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[2U]));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[2U] 
        = (0x0001ffffU & (((tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[2U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[2U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[2U] 
                          >> 3U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index 
        = (7U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[2U]);
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[3U];
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[2U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[2U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[2U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen))
                           ? (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair)
                           : ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
        = ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[2U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[2U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[2U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[2U]))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[3U] 
        = (0x000007ffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[3U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[3U])
                  : vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[3U]));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[3U] 
        = (0x0001ffffU & (((tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[3U] 
                                 >> 2U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[3U] 
        = (0x00003fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[3U] 
                          >> 3U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index 
        = (7U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[3U]);
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache[3U];
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__12__index) 
                                                     << 4U)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[3U] 
        = (0x0000000fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[3U] 
                          >> (0x0000000cU & ((~ vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[3U]) 
                                             << 2U))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index 
        = (7U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen) 
                 >> 1U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[0U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[1U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[2U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data[3U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__palette_data[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                  << 4U)))
                            ? 0U : (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                                    [(((IData)(0x0000000fU) 
                                       + (0x0000007fU 
                                          & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                             << 4U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                      << 4U))))) 
                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__data
                             [(3U & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                     >> 1U))] >> (0x0000001fU 
                                                  & ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__index) 
                                                     << 4U)))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__14__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry 
        = (0x000000ffU & ((1U & (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pen))
                           ? (IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair)
                           : ((IData)(__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__13__pair) 
                              >> 8U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
        = ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[3U])
            ? 0U : ((1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[3U])
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[3U] 
                                            >> 6U) 
                                           << 0x0000000eU)) 
                                       | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[3U]))));
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_first = 0x017fU;
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_last = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U])) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U]) 
                              - (IData)(8U)));
        if ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U])) {
            tb_sprite_crkdown_list__DOT__dut__DOT__clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            tb_sprite_crkdown_list__DOT__dut__DOT__clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed 
                = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__clip_last))));
        } else {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed 
                = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U] 
                                         >> 0x00000010U))));
        }
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x = 0x000001efU;
    }
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem
        [(0x000003ffU & (((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                          | (6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))
                          ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)
                          : ((8U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                              ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)
                              : ((0x13U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                  ? (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(2U)) 
                                     & (- (IData)((1U 
                                                   < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))
                                  : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(1U)) 
                                     & (- (IData)((0U 
                                                   != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))))))][0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem
        [(0x000003ffU & (((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                          | (6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))
                          ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)
                          : ((8U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                              ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)
                              : ((0x13U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                  ? (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(2U)) 
                                     & (- (IData)((1U 
                                                   < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))
                                  : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(1U)) 
                                     & (- (IData)((0U 
                                                   != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))))))][1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem
        [(0x000003ffU & (((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                          | (6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))
                          ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)
                          : ((8U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                              ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)
                              : ((0x13U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                  ? (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(2U)) 
                                     & (- (IData)((1U 
                                                   < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))
                                  : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(1U)) 
                                     & (- (IData)((0U 
                                                   != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))))))][2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem
        [(0x000003ffU & (((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                          | (6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))
                          ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)
                          : ((8U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                              ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)
                              : ((0x13U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                  ? (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(2U)) 
                                     & (- (IData)((1U 
                                                   < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))
                                  : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                      - (IData)(1U)) 
                                     & (- (IData)((0U 
                                                   != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))))))][3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[0U] = 0U;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[1U] = 0U;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U] = 0U;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[3U] = 0U;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[4U] = 0U;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[5U] = 0U;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[6U] = 0U;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U] 
        = ((0xbfffffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U]) 
           | (0x40000000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
                             << 0x0000001eU)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[3U] 
        = ((1U & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[3U]) 
           | (((IData)((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                                           << 0x0000000fU) 
                                          | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
                                             >> 0x00000011U)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[3U] 
                                                             << 9U) 
                                                            | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                                                               >> 0x00000017U)))))) 
               << 0x00000011U) | (0x0001fffeU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U])));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[4U] 
        = ((1U & ((IData)((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                                              << 0x0000000fU) 
                                             | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
                                                >> 0x00000011U)))) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[3U] 
                                                                << 9U) 
                                                               | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                                                                  >> 0x00000017U)))))) 
                  >> 0x0000000fU)) | ((0x0001fffeU 
                                       & ((IData)((
                                                   ((QData)((IData)(
                                                                    ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                                                                      << 0x0000000fU) 
                                                                     | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
                                                                        >> 0x00000011U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[3U] 
                                                                       << 9U) 
                                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                                                                         >> 0x00000017U)))))) 
                                          >> 0x0000000fU)) 
                                      | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                                                                      << 0x0000000fU) 
                                                                     | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
                                                                        >> 0x00000011U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[3U] 
                                                                       << 9U) 
                                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                                                                         >> 0x00000017U))))) 
                                                  >> 0x00000020U)) 
                                         << 0x00000011U)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[5U] 
        = ((0xfffe0000U & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[5U]) 
           | ((1U & ((IData)(((((QData)((IData)(((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                                                  << 0x0000000fU) 
                                                 | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
                                                    >> 0x00000011U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[3U] 
                                                                    << 9U) 
                                                                   | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                                                                      >> 0x00000017U))))) 
                              >> 0x00000020U)) >> 0x0000000fU)) 
              | (0x0001fffeU & ((IData)(((((QData)((IData)(
                                                           ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                                                             << 0x0000000fU) 
                                                            | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[0U] 
                                                               >> 0x00000011U)))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[3U] 
                                                              << 9U) 
                                                             | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                                                                >> 0x00000017U))))) 
                                         >> 0x00000020U)) 
                                >> 0x0000000fU))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U] 
        = ((0xfffeffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U]) 
           | (0x00010000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                             >> 1U)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U] 
        = ((0xffffdfffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U]) 
           | (0x00002000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                             >> 5U)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[1U] 
        = ((0xfe00ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[1U]) 
           | (0x01ff0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                             >> 3U)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[1U] 
        = ((0xfffffe00U & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[1U]) 
           | (0x000001ffU & ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                              << 4U) | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[1U] 
                                        >> 0x0000001cU))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[0U] 
        = ((0xfe00ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[0U]) 
           | (0x01ff0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                             << 0x0000000bU)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[0U] 
        = ((0xfffffe00U & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[0U]) 
           | (0x000001ffU & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__value[2U] 
                             >> 0x0000000eU)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[0U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[1U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[3U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[4U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[5U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[6U] 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__unpack_word__53__Vfuncout[6U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair][0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair][1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair][2U];
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[3U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[0U] 
        = ((0xffffdfffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[0U]) 
           | (0x00002000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[0U] 
                             << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[0U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[0U]) 
           | (0xffff0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[0U] 
                             << 0x0000000fU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[1U] 
        = ((0x0000ffffU & (IData)((((QData)((IData)(
                                                    ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                      << 0x0000000fU) 
                                                     | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[0U] 
                                                        >> 0x00000011U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[2U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                         >> 0x00000011U))))))) 
           | (0xffff0000U & (IData)((((QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[0U] 
                                                          >> 0x00000011U)))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[2U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                           >> 0x00000011U))))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[2U] 
        = ((0x0000ffffU & (IData)(((((QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[0U] 
                                                         >> 0x00000011U)))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[2U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                          >> 0x00000011U))))) 
                                   >> 0x00000020U))) 
           | (0xffff0000U & (IData)(((((QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[0U] 
                                                           >> 0x00000011U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[2U] 
                                                          << 0x0000000fU) 
                                                         | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__49__value[1U] 
                                                            >> 0x00000011U))))) 
                                     >> 0x00000020U))));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair][0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair][1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo
        [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair][2U];
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[3U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[0U] 
        = ((0xffffdfffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[0U]) 
           | (0x00002000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[0U] 
                             << 0x0000000dU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[0U] 
        = ((0x0000ffffU & tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[0U]) 
           | (0xffff0000U & (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[0U] 
                             << 0x0000000fU)));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[1U] 
        = ((0x0000ffffU & (IData)((((QData)((IData)(
                                                    ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                      << 0x0000000fU) 
                                                     | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[0U] 
                                                        >> 0x00000011U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[2U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                         >> 0x00000011U))))))) 
           | (0xffff0000U & (IData)((((QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[0U] 
                                                          >> 0x00000011U)))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[2U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                           >> 0x00000011U))))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[2U] 
        = ((0x0000ffffU & (IData)(((((QData)((IData)(
                                                     ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[0U] 
                                                         >> 0x00000011U)))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[2U] 
                                                        << 0x0000000fU) 
                                                       | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                          >> 0x00000011U))))) 
                                   >> 0x00000020U))) 
           | (0xffff0000U & (IData)(((((QData)((IData)(
                                                       ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                         << 0x0000000fU) 
                                                        | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[0U] 
                                                           >> 0x00000011U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        ((__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[2U] 
                                                          << 0x0000000fU) 
                                                         | (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__unpack_word__50__value[1U] 
                                                            >> 0x00000011U))))) 
                                     >> 0x00000020U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_1__unpack_word[3U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_0__unpack_word[3U];
    if ((8U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
        if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))))) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines = 0U;
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[111U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[111U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=111 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[111U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=111 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[112U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[112U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=112 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[112U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=112 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[113U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[113U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=113 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[113U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=113 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[114U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[114U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=114 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[114U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=114 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[115U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[115U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=115 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[115U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=115 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[116U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[116U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=116 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[116U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=116 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[117U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[117U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=117 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[117U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=117 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[118U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[118U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=118 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[118U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=118 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[119U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[119U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=119 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[119U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=119 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[120U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[120U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=120 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[120U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=120 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[121U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[121U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=121 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[121U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=121 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[122U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[122U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=122 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[122U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=122 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[123U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[123U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=123 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[123U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=123 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[124U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[124U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=124 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[124U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=124 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[125U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[125U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=125 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[125U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=125 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[126U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[126U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=126 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[126U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=126 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[127U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[127U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=127 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[127U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=127 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[128U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[128U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=128 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[128U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=128 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[129U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[129U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=129 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[129U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=129 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[130U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[130U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=130 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[130U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=130 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[131U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[131U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=131 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[131U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=131 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[132U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[132U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=132 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[132U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=132 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[133U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[133U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=133 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[133U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=133 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[134U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[134U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=134 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[134U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=134 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[135U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[135U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=135 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[135U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=135 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[136U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[136U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=136 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[136U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=136 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[137U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[137U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=137 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[137U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=137 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[138U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[138U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=138 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[138U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=138 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[139U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[139U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=139 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[139U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=139 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[140U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[140U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=140 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[140U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=140 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[141U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[141U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=141 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[141U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=141 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[142U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[142U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=142 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[142U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=142 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[143U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[143U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=143 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[143U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=143 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[144U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[144U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=144 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[144U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=144 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[145U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[145U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=145 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[145U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=145 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[146U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[146U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=146 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[146U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=146 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[147U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[147U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=147 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[147U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=147 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[148U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[148U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=148 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[148U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=148 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[149U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[149U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=149 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[149U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=149 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[150U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[150U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=150 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[150U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=150 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[151U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[151U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=151 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[151U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=151 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[152U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[152U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=152 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[152U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=152 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[153U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[153U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=153 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[153U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=153 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[154U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[154U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=154 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[154U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=154 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[155U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[155U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=155 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[155U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=155 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[156U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[156U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=156 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[156U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=156 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[157U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[157U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=157 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[157U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=157 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[158U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[158U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=158 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[158U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=158 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[159U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[159U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=159 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[159U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=159 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[160U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[160U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=160 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[160U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=160 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[161U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[161U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=161 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[161U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=161 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[162U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[162U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=162 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[162U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=162 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[163U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[163U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=163 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[163U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=163 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[164U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[164U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=164 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[164U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=164 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[165U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[165U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=165 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[165U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=165 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[166U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[166U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=166 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[166U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=166 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[167U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[167U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=167 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[167U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=167 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[168U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[168U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=168 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[168U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=168 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[169U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[169U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=169 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[169U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=169 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[170U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[170U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=170 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[170U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=170 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[171U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[171U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=171 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[171U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=171 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[172U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[172U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=172 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[172U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=172 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[173U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[173U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=173 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[173U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=173 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[174U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[174U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=174 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[174U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=174 never rendered by the producer\n",0);
            }
            VL_WRITEF_NX("crkdown sprite 1051: %0d/64 expected lines rendered, %0d missing\n",2
                         , '~',32,((IData)(0x00000040U) 
                                   - vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines)
                         , '~',32,vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
            if ((0U != vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines)) {
                VL_WRITEF_NX("TB_RESULT=FAIL missing=%0d\n",1
                             , '~',32,vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
            } else {
                VL_WRITEF_NX("TB_RESULT=PASS\n",0);
            }
            VL_FINISH_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\tb_sprite_crkdown_list.sv", 585, "");
        } else if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))))) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines = 0U;
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[111U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[111U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=111 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[111U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=111 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[112U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[112U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=112 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[112U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=112 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[113U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[113U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=113 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[113U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=113 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[114U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[114U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=114 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[114U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=114 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[115U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[115U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=115 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[115U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=115 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[116U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[116U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=116 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[116U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=116 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[117U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[117U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=117 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[117U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=117 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[118U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[118U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=118 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[118U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=118 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[119U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[119U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=119 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[119U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=119 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[120U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[120U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=120 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[120U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=120 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[121U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[121U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=121 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[121U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=121 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[122U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[122U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=122 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[122U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=122 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[123U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[123U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=123 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[123U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=123 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[124U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[124U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=124 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[124U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=124 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[125U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[125U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=125 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[125U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=125 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[126U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[126U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=126 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[126U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=126 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[127U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[127U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=127 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[127U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=127 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[128U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[128U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=128 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[128U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=128 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[129U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[129U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=129 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[129U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=129 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[130U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[130U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=130 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[130U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=130 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[131U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[131U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=131 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[131U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=131 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[132U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[132U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=132 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[132U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=132 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[133U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[133U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=133 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[133U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=133 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[134U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[134U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=134 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[134U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=134 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[135U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[135U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=135 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[135U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=135 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[136U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[136U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=136 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[136U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=136 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[137U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[137U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=137 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[137U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=137 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[138U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[138U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=138 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[138U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=138 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[139U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[139U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=139 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[139U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=139 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[140U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[140U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=140 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[140U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=140 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[141U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[141U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=141 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[141U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=141 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[142U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[142U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=142 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[142U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=142 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[143U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[143U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=143 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[143U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=143 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[144U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[144U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=144 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[144U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=144 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[145U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[145U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=145 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[145U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=145 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[146U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[146U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=146 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[146U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=146 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[147U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[147U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=147 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[147U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=147 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[148U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[148U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=148 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[148U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=148 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[149U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[149U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=149 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[149U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=149 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[150U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[150U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=150 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[150U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=150 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[151U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[151U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=151 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[151U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=151 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[152U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[152U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=152 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[152U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=152 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[153U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[153U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=153 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[153U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=153 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[154U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[154U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=154 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[154U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=154 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[155U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[155U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=155 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[155U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=155 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[156U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[156U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=156 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[156U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=156 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[157U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[157U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=157 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[157U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=157 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[158U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[158U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=158 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[158U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=158 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[159U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[159U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=159 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[159U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=159 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[160U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[160U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=160 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[160U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=160 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[161U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[161U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=161 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[161U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=161 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[162U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[162U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=162 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[162U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=162 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[163U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[163U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=163 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[163U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=163 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[164U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[164U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=164 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[164U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=164 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[165U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[165U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=165 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[165U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=165 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[166U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[166U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=166 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[166U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=166 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[167U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[167U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=167 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[167U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=167 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[168U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[168U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=168 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[168U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=168 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[169U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[169U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=169 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[169U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=169 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[170U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[170U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=170 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[170U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=170 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[171U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[171U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=171 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[171U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=171 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[172U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[172U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=172 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[172U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=172 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[173U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[173U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=173 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[173U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=173 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[174U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[174U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=174 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[174U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=174 never rendered by the producer\n",0);
            }
            VL_WRITEF_NX("crkdown sprite 1051: %0d/64 expected lines rendered, %0d missing\n",2
                         , '~',32,((IData)(0x00000040U) 
                                   - vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines)
                         , '~',32,vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
            if ((0U != vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines)) {
                VL_WRITEF_NX("TB_RESULT=FAIL missing=%0d\n",1
                             , '~',32,vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
            } else {
                VL_WRITEF_NX("TB_RESULT=PASS\n",0);
            }
            VL_FINISH_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\tb_sprite_crkdown_list.sv", 585, "");
        } else if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))))) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines = 0U;
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[111U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[111U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=111 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[111U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=111 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[112U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[112U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=112 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[112U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=112 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[113U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[113U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=113 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[113U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=113 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[114U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[114U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=114 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[114U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=114 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[115U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[115U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=115 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[115U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=115 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[116U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[116U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=116 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[116U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=116 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[117U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[117U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=117 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[117U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=117 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[118U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[118U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=118 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[118U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=118 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[119U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[119U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=119 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[119U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=119 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[120U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[120U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=120 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[120U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=120 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[121U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[121U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=121 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[121U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=121 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[122U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[122U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=122 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[122U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=122 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[123U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[123U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=123 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[123U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=123 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[124U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[124U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=124 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[124U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=124 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[125U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[125U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=125 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[125U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=125 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[126U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[126U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=126 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[126U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=126 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[127U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[127U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=127 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[127U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=127 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[128U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[128U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=128 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[128U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=128 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[129U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[129U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=129 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[129U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=129 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[130U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[130U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=130 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[130U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=130 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[131U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[131U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=131 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[131U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=131 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[132U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[132U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=132 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[132U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=132 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[133U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[133U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=133 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[133U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=133 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[134U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[134U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=134 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[134U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=134 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[135U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[135U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=135 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[135U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=135 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[136U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[136U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=136 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[136U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=136 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[137U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[137U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=137 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[137U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=137 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[138U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[138U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=138 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[138U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=138 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[139U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[139U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=139 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[139U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=139 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[140U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[140U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=140 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[140U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=140 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[141U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[141U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=141 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[141U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=141 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[142U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[142U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=142 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[142U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=142 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[143U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[143U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=143 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[143U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=143 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[144U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[144U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=144 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[144U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=144 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[145U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[145U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=145 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[145U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=145 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[146U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[146U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=146 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[146U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=146 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[147U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[147U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=147 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[147U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=147 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[148U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[148U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=148 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[148U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=148 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[149U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[149U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=149 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[149U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=149 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[150U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[150U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=150 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[150U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=150 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[151U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[151U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=151 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[151U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=151 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[152U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[152U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=152 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[152U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=152 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[153U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[153U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=153 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[153U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=153 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[154U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[154U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=154 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[154U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=154 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[155U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[155U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=155 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[155U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=155 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[156U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[156U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=156 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[156U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=156 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[157U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[157U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=157 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[157U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=157 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[158U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[158U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=158 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[158U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=158 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[159U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[159U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=159 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[159U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=159 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[160U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[160U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=160 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[160U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=160 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[161U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[161U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=161 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[161U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=161 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[162U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[162U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=162 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[162U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=162 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[163U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[163U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=163 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[163U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=163 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[164U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[164U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=164 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[164U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=164 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[165U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[165U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=165 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[165U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=165 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[166U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[166U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=166 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[166U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=166 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[167U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[167U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=167 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[167U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=167 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[168U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[168U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=168 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[168U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=168 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[169U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[169U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=169 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[169U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=169 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[170U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[170U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=170 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[170U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=170 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[171U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[171U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=171 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[171U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=171 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[172U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[172U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=172 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[172U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=172 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[173U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[173U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=173 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[173U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=173 never rendered by the producer\n",0);
            }
            if (VL_LIKELY((vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at[174U]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at[174U])))))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                        = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                    VL_WRITEF_NX("MISSING line=174 sprite 1051 not drawn (reached render walk=%0d)\n",1
                                 , '#',1,vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at[174U]);
                }
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
                VL_WRITEF_NX("UNFILLED line=174 never rendered by the producer\n",0);
            }
            VL_WRITEF_NX("crkdown sprite 1051: %0d/64 expected lines rendered, %0d missing\n",2
                         , '~',32,((IData)(0x00000040U) 
                                   - vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines)
                         , '~',32,vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
            if ((0U != vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines)) {
                VL_WRITEF_NX("TB_RESULT=FAIL missing=%0d\n",1
                             , '~',32,vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines);
            } else {
                VL_WRITEF_NX("TB_RESULT=PASS\n",0);
            }
            VL_FINISH_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\tb_sprite_crkdown_list.sv", 585, "");
        } else if ((0x000009c3U == vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count)) {
            if ((0x0000017fU == vlSelfRef.tb_sprite_crkdown_list__DOT__line_index)) {
                __Vdly__tb_sprite_crkdown_list__DOT__phase = 9U;
            } else {
                __Vdly__tb_sprite_crkdown_list__DOT__line_index 
                    = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__line_index);
                __Vdly__tb_sprite_crkdown_list__DOT__phase = 5U;
            }
        } else {
            __Vdly__tb_sprite_crkdown_list__DOT__phase_count 
                = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count);
        }
    } else if ((4U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
        if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
            if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel = 0U;
                vlSelfRef.tb_sprite_crkdown_list__DOT__hcount = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__phase_count = 0U;
                __Vdly__tb_sprite_crkdown_list__DOT__phase = 8U;
            } else {
                vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel = 1U;
                __Vdly__tb_sprite_crkdown_list__DOT__phase = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__vcount 
                = (0x000003ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__line_index);
            vlSelfRef.tb_sprite_crkdown_list__DOT__hcount = 0x028fU;
            vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__phase = 6U;
        } else if (VL_UNLIKELY(((0x00000f9fU == vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count)))) {
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_sprite_crkdown_list.sv:535: Assertion failed in %m: list collection failed seen=%0d index=%0d state=%0d\n",6, 'M',vlSymsp->name(),"tb_sprite_crkdown_list", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',14,(IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen)
                             , '#',13,vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index
                             , '#',5,(IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state));
                VL_STOP_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/ARTIFA~1/VERILA~1/CRKDOW~1/model\\tb_sprite_crkdown_list.sv", 535, "", false);
            }
            __Vdly__tb_sprite_crkdown_list__DOT__line_index = 0U;
            VL_WRITEF_NX("crkdown list collected: stack_count=%0d list_seen=%0d\n",2
                         , '#',13,vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count
                         , '#',14,(IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen));
            __Vdly__tb_sprite_crkdown_list__DOT__phase = 5U;
        } else {
            __Vdly__tb_sprite_crkdown_list__DOT__phase_count 
                = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count);
        }
    } else if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
        if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel = 0U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__hcount = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__phase_count = 0U;
            __Vdly__tb_sprite_crkdown_list__DOT__phase = 4U;
        } else {
            vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel = 1U;
            __Vdly__tb_sprite_crkdown_list__DOT__phase = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__phase))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__vcount = 0x017fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__hcount = 0x028fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__phase = 2U;
    } else if ((2U == vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count)) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__reset = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__phase_count = 0U;
        __Vdly__tb_sprite_crkdown_list__DOT__phase = 1U;
    } else {
        __Vdly__tb_sprite_crkdown_list__DOT__phase_count 
            = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count);
    }
    tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] 
                           << 1U)) | (0x00000fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U]));
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0][3U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem__v0[3U];
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__active_count;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__render_pos;
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi__v0[2U];
    }
    if (__VdlySet__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0][0U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0][1U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__VdlyDim0__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0][2U] 
            = __VdlyVal__tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo__v0[2U];
    }
    vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__filled_at.commit(vlSelfRef.tb_sprite_crkdown_list__DOT__filled_at);
    vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__drawn_at.commit(vlSelfRef.tb_sprite_crkdown_list__DOT__drawn_at);
    vlSelfRef.__VdlyCommitQueuetb_sprite_crkdown_list__DOT__walked_at.commit(vlSelfRef.tb_sprite_crkdown_list__DOT__walked_at);
    vlSelfRef.tb_sprite_crkdown_list__DOT__phase = __Vdly__tb_sprite_crkdown_list__DOT__phase;
    vlSelfRef.tb_sprite_crkdown_list__DOT__line_index 
        = __Vdly__tb_sprite_crkdown_list__DOT__line_index;
    vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count 
        = __Vdly__tb_sprite_crkdown_list__DOT__phase_count;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_seen;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__list_index;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__state;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count 
        = __Vdly__tb_sprite_crkdown_list__DOT__dut__DOT__stack_count;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y)) 
                          + (0x00001fffU & (((IData)(0x00000020U) 
                                             + VL_SHIFTL_III(20,20,32, 
                                                             ((0U 
                                                               == 
                                                               (0x000000ffU 
                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] 
                                                                   >> 0x00000010U)))
                                                               ? 0x00000040U
                                                               : 
                                                              (0x000001ffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U] 
                                                                      >> 0x00000010U))))), 
                                                             ((IData)(3U) 
                                                              + 
                                                              (7U 
                                                               & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[2U] 
                                                                  >> 0x0000000cU))))) 
                                            >> 6U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[0U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[1U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[2U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor[3U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[6U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step 
        = ((0U == (0x000000ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                  >> 1U))) ? 0x00000040U
            : (0x000001ffU & ((IData)(1U) + (0x000000ffU 
                                             & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                >> 1U)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, 
                                                               (((0x40000000U 
                                                                  & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U])
                                                                  ? 
                                                                 (0U 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                      >> 9U)))
                                                                  : 
                                                                 (0U 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                      >> 1U))))
                                                                 ? 0x00000040U
                                                                 : 
                                                                (0x000001ffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (0x000000ffU 
                                                                     & ((0x40000000U 
                                                                         & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U])
                                                                         ? 
                                                                        ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                          << 0x00000017U) 
                                                                         | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                            >> 9U))
                                                                         : 
                                                                        ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                          << 0x0000001fU) 
                                                                         | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                                            >> 1U))))))), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                                                    >> 0x0000000dU))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x 
        = (0x00001fffU & (((0x00001000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U]) 
                           | (0x00000fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                             >> 1U))) 
                          - (IData)(8U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                           >> 0x00000010U)) | (0x00000fffU 
                                               & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x00000011U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[2U] 
        = (0x0001ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x = 0x01efU;
    tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first = 0x017fU;
    tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[2U])) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U]) 
                              - (IData)(8U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U]) 
                              - (IData)(8U)));
        if ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[2U])) {
            tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed 
                = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last))));
        } else {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed 
                = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U] 
                                         >> 0x00000010U))));
        }
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel) 
           & ((0x028fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount)) 
              & (0x017fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line = 1U;
    if ((0x01a6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line = 0U;
    } else if ((0x01a7U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line = 1U;
    } else if ((0x017fU > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line 
            = (0x000003ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount)));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank;
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
          & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling))) 
         & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[0U] 
            == (0x000001ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 0U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 1U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 1U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[1U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 2U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 2U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[2U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 2U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 3U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 3U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[3U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 3U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 4U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 4U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[4U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 4U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 5U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 5U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[5U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 5U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 6U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 6U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[6U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 6U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 7U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 7U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[7U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 7U;
    }
    if ((0x028fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr 
            = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank) 
               << 7U);
        tb_sprite_crkdown_list__DOT__dut__DOT__display_lane = 0U;
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank) 
                << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount) 
                                          >> 2U) + 
                                         ((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount)))
                                           ? 1U : 0U))));
        tb_sprite_crkdown_list__DOT__dut__DOT__display_lane 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount)));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_enable 
        = ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req) 
             & (3U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) 
            & (0U == (0x0000c000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U]))) 
           & (~ ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index)) 
                 & (0U == (0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_write_data[0U])))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U] 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((0U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U] = 0ULL;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U] 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((1U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U] = 0ULL;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U] 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                                      >> 2U) + ((2U 
                                                 < 
                                                 (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U] = 0ULL;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U] 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
            << 7U) | (0x0000007fU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x) 
                                     >> 2U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U] = 0ULL;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__line_phys = 4U;
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[0U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U]))) 
         & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
            >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (0U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[1U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U]))) 
         & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
            >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (1U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[2U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U]))) 
         & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
            >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (2U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    }
    if (((((((((0x12U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
              & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                 == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[3U])) 
             & VL_GTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U], 
                           ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x)))) 
            & VL_LTES_III(14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U], 
                          ((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x)))) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U]))) 
          & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,14, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U]))) 
         & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
            >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (3U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren = 0x0fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U] = 0ULL;
        tb_sprite_crkdown_list__DOT__dut__DOT__line_phys = 4U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U] = 0ULL;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U] = 0ULL;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U] = 0ULL;
    }
    if ((((4U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
          | (5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) 
         | (6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))) {
        if ((1U & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot))) {
            __Vtemp_19[0U] = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                               << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U] 
                                                  >> 0x00000011U));
            __Vtemp_19[1U] = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                               << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                                                  >> 0x00000011U));
            __Vtemp_19[2U] = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[5U] 
                               << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                                                  >> 0x00000011U));
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
        } else {
            __Vtemp_19[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[0U];
            __Vtemp_19[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[1U];
            __Vtemp_19[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U];
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[2U];
            tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[3U];
        }
    } else {
        __Vtemp_19[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[0U];
        __Vtemp_19[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[1U];
        __Vtemp_19[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U];
        tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[0U];
        tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[1U];
        tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[2U];
        tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[3U];
    }
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U] 
        = __Vtemp_19[0U];
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U] 
        = __Vtemp_19[1U];
    tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U] 
        = (0x0001ffffU & __Vtemp_19[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot 
        = (0x00000fffU & ((0x1000U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))
                           ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count)
                           : (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid 
        = ((~ (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot)) 
           & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid 
        = ((0U == (3U & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot))) 
           & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_right_x 
        = (0x00003fffU & ((((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x)) 
                           + (0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum 
                                             >> 6U))) 
                          - (IData)(1U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y)) 
                          + (0x000007ffU & ((IData)(8U) 
                                            << (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                >> 0x0000001dU)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_target_offset 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                          - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid)
            ? 4U : ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid)
                     ? 2U : 1U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__Vfuncout 
        = (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[0U] 
           >> 0x00000010U);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[2U]);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1)))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_height 
        = (0x00001fffU & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum 
                          >> 6U));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y)) 
                          + (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_height)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U])) {
        tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed 
            = ((0x00002000U & tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U])
                ? ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active 
        = (((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__Vfuncout 
        = (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__data[0U] 
           >> 0x00000010U);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__23__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__data[2U]);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1)))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height 
        = (0x00001fffU & (tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum 
                          >> 6U));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y)) 
                          + (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U])) {
        tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U])
                ? ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active 
        = (((((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed) 
              & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid)) 
             & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__Vfuncout 
        = (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__data[0U] 
           >> 0x00000010U);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__25__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__data[2U]);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1)))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height 
        = (0x00001fffU & (tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum 
                          >> 6U));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y)) 
                          + (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U])) {
        tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U])
                ? ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[0U] 
                                         >> 0x00000010U)))));
    }
    tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active 
        = (((((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__Vfuncout 
        = (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__data[0U] 
           >> 0x00000010U);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__27__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__data[2U]);
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__Vfuncout;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1)))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4) 
                                                                    >> 0x0cU))))));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height 
        = (0x00001fffU & (tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum 
                          >> 6U));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y 
        = ((0x00001000U & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4) 
                           << 1U)) | (0x00000fffU & (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y)) 
                          + (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U])) {
        tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed 
            = ((0x00002000U & tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U])
                ? ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U] 
                                         >> 0x00000010U)))));
    }
    tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active 
        = (((((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][2U] 
        = (0x0001ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][0U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][1U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[2U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[3U] 
        = tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0U][3U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1U][3U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2U][3U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0U][2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1U][2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2U][2U] = 0U;
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen = 0U;
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[0U]) {
        if ((0U == tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][2U];
            }
        }
        tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[1U]) {
        if ((0U == tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][2U];
            }
        }
        tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[2U]) {
        if ((0U == tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][2U];
            }
        }
        tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[3U]) {
        if ((0U == tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][0U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][1U];
            tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][2U];
        } else if (VL_GTS_III(32, 4U, tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][2U];
            }
        }
        tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count 
        = (7U & tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos) 
                          + (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance)));
    tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot 
        = (0x00000fffU & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance) 
                          + (IData)(tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] = 0U;
    if ((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
        if (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid) 
             & (0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count)))) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable = 1U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U] 
                = tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    << 0x00000011U) | tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U]);
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                    >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                    >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                   >> 0x0000000fU);
        } else if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable = 1U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U] 
                = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                    << 0x00000011U) | tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U]);
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                    >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                    >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                    >> 0x0000000fU) | (tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                   >> 0x0000000fU);
        } else if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable = 1U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U] 
                    << 0x00000011U) | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U]);
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U] 
                   >> 0x0000000fU);
        }
    } else if ((6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable = 1U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[0U] 
                << 0x00000011U) | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip[2U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[0U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[1U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[1U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[2U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[2U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[3U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] 
            = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor[3U] 
               >> 0x0000000fU);
    } else if ((7U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable 
            = (0U != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
                << 0x00000011U) | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[0U][2U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][0U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][1U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] 
            = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][2U] 
                >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
                                   << 0x00000011U));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] 
            = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[0U][3U] 
               >> 0x0000000fU);
    }
    if ((4U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & ((IData)(1U) + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot) 
                              >> 1U));
    } else if ((((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                 | (6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) 
                | (7U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & ((IData)(1U) + ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot) 
                              >> 1U));
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & 0U);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & 0U);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sprite_bank_ownership.h for the primary calling header

#include "Vtb_sprite_bank_ownership__pch.h"

void Vtb_sprite_bank_ownership___024root___nba_comb__TOP__0(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___nba_comb__TOP__0\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_2__palette_entry;
    SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____VlemCall_1__burst_word;
    SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag;
    tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag = 0;
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
    VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor;
    VL_ZERO_W(128, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_descriptor);
    VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip;
    VL_ZERO_W(81, tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_first_clip);
    IData/*31:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen;
    tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_seen = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
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
        tb_sprite_bank_ownership__DOT__dut__DOT__display_lane = 0U;
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_read_addr 
            = ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank) 
               << 7U);
    } else {
        tb_sprite_bank_ownership__DOT__dut__DOT__display_lane 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount)));
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_read_addr 
            = (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__display_bank) 
                << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount) 
                                          >> 2U) + 
                                         ((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__hcount)))
                                           ? 1U : 0U))));
    }
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_write_enable 
        = ((((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__cache_ack_pending) 
             & (3U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) 
            & (0U == (0x0000c000U & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U]))) 
           & (~ ((0U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__list_index)) 
                 & (0U == (0x0000ffffU & vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__read_data[0U])))));
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
    if ((((4U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)) 
          | (5U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state))) 
         | (6U == (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__state)))) {
        if ((1U & (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot))) {
            __Vtemp_2[0U] = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[3U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[2U] 
                                                 >> 0x00000011U));
            __Vtemp_2[1U] = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[4U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[3U] 
                                                 >> 0x00000011U));
            __Vtemp_2[2U] = ((vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[5U] 
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
            __Vtemp_2[0U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[0U];
            __Vtemp_2[1U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[1U];
            __Vtemp_2[2U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[2U];
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
        __Vtemp_2[0U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q[2U];
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
        = __Vtemp_2[0U];
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[1U] 
        = __Vtemp_2[1U];
    tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_q[2U] 
        = (0x0001ffffU & __Vtemp_2[2U]);
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
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_hit 
        = (vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_valid
           [vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_index] 
           & ((IData)(tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_tag) 
              == vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_tag
              [vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_index]));
    vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 0U;
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
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
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
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
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
            vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
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
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable = 1U;
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
        vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable 
            = (0U != (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_count));
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
}

void Vtb_sprite_bank_ownership___024root___timing_ready(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___timing_ready\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h84374f4f__0.ready("@(posedge tb_sprite_bank_ownership.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h84374f0e__0.ready("@(negedge tb_sprite_bank_ownership.clk)");
    }
}

void Vtb_sprite_bank_ownership___024root___timing_resume(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___timing_resume\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h84374f4f__0.moveToResumeQueue(
                                                          "@(posedge tb_sprite_bank_ownership.clk)");
    vlSelfRef.__VtrigSched_h84374f0e__0.moveToResumeQueue(
                                                          "@(negedge tb_sprite_bank_ownership.clk)");
    vlSelfRef.__VtrigSched_h84374f4f__0.resume("@(posedge tb_sprite_bank_ownership.clk)");
    vlSelfRef.__VtrigSched_h84374f0e__0.resume("@(negedge tb_sprite_bank_ownership.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sprite_bank_ownership___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_sprite_bank_ownership___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_sprite_bank_ownership___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_sprite_bank_ownership___024root___act_comb__TOP__0(Vtb_sprite_bank_ownership___024root* vlSelf);

bool Vtb_sprite_bank_ownership___024root___eval_phase__act(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_phase__act\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0 
            = vlSelfRef.tb_sprite_bank_ownership__DOT__clk;
    }
    Vtb_sprite_bank_ownership___024root___timing_ready(vlSelf);
    Vtb_sprite_bank_ownership___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sprite_bank_ownership___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_sprite_bank_ownership___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_sprite_bank_ownership___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_sprite_bank_ownership___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_sprite_bank_ownership___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_sprite_bank_ownership___024root___eval_phase__inact(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_phase__inact\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/artifacts/verilator/sprite_bank_headless_baseline\\tb_sprite_bank_ownership.sv", 8, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_sprite_bank_ownership___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_sprite_bank_ownership___024root___nba_sequent__TOP__0(Vtb_sprite_bank_ownership___024root* vlSelf);

bool Vtb_sprite_bank_ownership___024root___eval_phase__nba(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_phase__nba\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_sprite_bank_ownership___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sprite_bank_ownership___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sprite_bank_ownership___024root___nba_comb__TOP__0(vlSelf);
            }
        }
        Vtb_sprite_bank_ownership___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_sprite_bank_ownership___024root___eval(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sprite_bank_ownership___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/artifacts/verilator/sprite_bank_headless_baseline\\tb_sprite_bank_ownership.sv", 8, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/artifacts/verilator/sprite_bank_headless_baseline\\tb_sprite_bank_ownership.sv", 8, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_sprite_bank_ownership___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/artifacts/verilator/sprite_bank_headless_baseline\\tb_sprite_bank_ownership.sv", 8, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_sprite_bank_ownership___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_sprite_bank_ownership___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_sprite_bank_ownership___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_sprite_bank_ownership___024root____VbeforeTrig_h84374f4f__0(Vtb_sprite_bank_ownership___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root____VbeforeTrig_h84374f4f__0\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_sprite_bank_ownership___024root____VbeforeTrig_h84374f0e__0(Vtb_sprite_bank_ownership___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root____VbeforeTrig_h84374f0e__0\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_sprite_bank_ownership__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0 
        = vlSelfRef.tb_sprite_bank_ownership__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f4f__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h84374f0e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_sprite_bank_ownership___024root___eval_debug_assertions(Vtb_sprite_bank_ownership___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_bank_ownership___024root___eval_debug_assertions\n"); );
    Vtb_sprite_bank_ownership__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

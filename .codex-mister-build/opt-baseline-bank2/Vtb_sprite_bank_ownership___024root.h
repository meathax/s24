// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sprite_bank_ownership.h for the primary calling header

#ifndef VERILATED_VTB_SPRITE_BANK_OWNERSHIP___024ROOT_H_
#define VERILATED_VTB_SPRITE_BANK_OWNERSHIP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sprite_bank_ownership__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sprite_bank_ownership___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__clk;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__reset;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__ce_pixel;
        CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__burst_request_index;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_hit;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__cache_ack_pending;
        CData/*3:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__line_b_wren;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_write_enable;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_enable;
        CData/*4:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__state;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__display_bank;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__fill_bank;
        CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__line_valid;
        CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__bank_filling;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__fill_epoch;
        CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__fill_generation;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__next_display_bank;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__next_display_ready;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__fill_candidate_valid;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__list_cache_valid;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__cache_refresh_pending;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__frame_epoch;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__frame_boundary;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_valid;
        CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_valid;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_index;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_hit;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_valid;
        CData/*5:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__x_accum;
        CData/*5:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__y_accum;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__emit_count;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__flipx;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__flipy;
        CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__size_x_tiles;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__size_x_shift;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__size_y_shift;
        CData/*7:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__size_y_mask;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__vertical_allowed;
        CData/*4:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_count;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_active;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan1_active;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_pair_valid;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_valid;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_last;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active_count;
        CData/*2:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_count;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_last;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_vertical_allowed;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_list_valid;
        CData/*0:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scrub_req;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sprite_bank_ownership__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*9:0*/ tb_sprite_bank_ownership__DOT__hcount;
        SData/*9:0*/ tb_sprite_bank_ownership__DOT__vcount;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__burst_lookup_tag;
        SData/*10:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair2;
        SData/*9:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__display_read_addr;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__target_y;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__render_next_target;
    };
    struct {
        SData/*9:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__next_display_line;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__list_index;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__list_seen;
        SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_flags;
        SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_top;
        SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_left;
        SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_bottom;
        SData/*15:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__current_clip_right;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__stack_count;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__render_pos;
        SData/*11:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__stack_head;
        SData/*11:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__stack_write_slot;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__data_cache_tag;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__zoomx_step;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__zoomy_step;
        SData/*10:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__source_row;
        SData/*10:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__source_column;
        SData/*10:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__total_rows;
        SData/*10:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__total_columns;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__dest_y;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__dest_x;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_min_x;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_max_x;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_x;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_output_width;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_right_x;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__palette_base;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__wanted_tag;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__x_sum;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__y_sum;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_zoomy_step;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_origin_y;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_bottom_y;
        SData/*8:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_divisor;
        SData/*10:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_total_rows;
        SData/*11:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_target_offset;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_pos;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_count;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_append_pos;
        SData/*11:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__stack_scan_slot;
        SData/*10:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_read_pair;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__list_origin_y;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__list_bottom_y;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_pos;
        SData/*11:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_next_slot;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_origin_x;
        SData/*13:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_right_x;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_min_x;
        SData/*12:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_setup_clip_max_x;
        SData/*9:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scrub_addr;
        VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_q;
        VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__read_data;
        IData/*31:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_init;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_write_data;
        VlWide<8>/*255:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair2_q;
        VlWide<6>/*161:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair2_q;
        VlWide<7>/*208:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_q;
        VlWide<7>/*208:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_write_data;
        VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_render_descriptor;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_render_clip;
        VlWide<8>/*255:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_pair_q;
        VlWide<6>/*161:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_pair_q;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip1;
        VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_descriptor;
    };
    struct {
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_second_clip;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__render_clip;
        VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor;
        VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__palette_table;
        VlWide<4>/*127:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__data_cache;
        IData/*17:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_dividend;
        IData/*17:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_quotient;
        IData/*18:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_remainder;
        IData/*18:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_remainder;
        IData/*17:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__ydiv_next_quotient;
        IData/*19:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_width_sum;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__scan_clip3;
        VlWide<12>/*383:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__line_boundary;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word;
        VlWide<3>/*80:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word;
        VlWide<4>/*118:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b;
        QData/*33:0*/ tb_sprite_bank_ownership__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a;
        QData/*37:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word;
        QData/*37:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word;
        QData/*37:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word;
        QData/*37:0*/ tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word;
        VlUnpacked<CData/*5:0*/, 256> tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_tag;
        VlUnpacked<CData/*0:0*/, 256> tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_valid;
        VlUnpacked<CData/*1:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line_b_category;
        VlUnpacked<SData/*9:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line_b_addr;
        VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line_b_data;
        VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line0_render_q;
        VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line1_render_q;
    };
    struct {
        VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line2_render_q;
        VlUnpacked<QData/*33:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__line3_render_q;
        VlUnpacked<CData/*7:0*/, 8> tb_sprite_bank_ownership__DOT__dut__DOT__bank_generation;
        VlUnpacked<SData/*8:0*/, 8> tb_sprite_bank_ownership__DOT__dut__DOT__bank_line_y;
        VlUnpacked<VlWide<4>/*127:0*/, 8> tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_data;
        VlUnpacked<SData/*13:0*/, 8> tb_sprite_bank_ownership__DOT__dut__DOT__palette_cache_tags;
        VlUnpacked<IData/*16:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_line_value;
        VlUnpacked<SData/*13:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_dest_x;
        VlUnpacked<SData/*10:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_col;
        VlUnpacked<CData/*2:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_within_x;
        VlUnpacked<SData/*15:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_data_word;
        VlUnpacked<IData/*16:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_word;
        VlUnpacked<SData/*13:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_tag;
        VlUnpacked<CData/*3:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_pen;
        VlUnpacked<CData/*7:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__lane_color;
        VlUnpacked<VlWide<4>/*127:0*/, 3> tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_descriptor;
        VlUnpacked<VlWide<3>/*80:0*/, 3> tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_pending_clip;
        VlUnpacked<VlWide<4>/*127:0*/, 3> tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_descriptor;
        VlUnpacked<VlWide<3>/*80:0*/, 3> tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_batch_pending_clip;
        VlUnpacked<VlWide<4>/*127:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_descriptor;
        VlUnpacked<VlWide<3>/*80:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_clip;
        VlUnpacked<CData/*0:0*/, 4> tb_sprite_bank_ownership__DOT__dut__DOT__scan_quad_active;
        VlUnpacked<CData/*6:0*/, 8> tb_sprite_bank_ownership__DOT__dut__DOT__bank_scrub;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem;
        VlUnpacked<QData/*33:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem;
        VlUnpacked<QData/*37:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo;
        VlUnpacked<QData/*37:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi;
        VlUnpacked<VlWide<3>/*80:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo;
        VlUnpacked<VlWide<3>/*80:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi;
        VlUnpacked<QData/*37:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo;
        VlUnpacked<QData/*37:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi;
        VlUnpacked<VlWide<3>/*80:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo;
        VlUnpacked<VlWide<3>/*80:0*/, 2048> tb_sprite_bank_ownership__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi;
        VlUnpacked<VlWide<4>/*118:0*/, 1024> tb_sprite_bank_ownership__DOT__dut__DOT__active_cache_ram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 256> tb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_ram__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 256>, false, CData/*0:0*/, 1> __VdlyCommitQueuetb_sprite_bank_ownership__DOT__dut__DOT__burst_cache_valid;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h84374f4f__0;
    VlTriggerScheduler __VtrigSched_h84374f0e__0;

    // INTERNAL VARIABLES
    Vtb_sprite_bank_ownership__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_sprite_bank_ownership___024root(Vtb_sprite_bank_ownership__Syms* symsp, const char* namep);
    ~Vtb_sprite_bank_ownership___024root();
    VL_UNCOPYABLE(Vtb_sprite_bank_ownership___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

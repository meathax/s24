// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sspirits_long_list.h for the primary calling header

#include "Vtb_sspirits_long_list__pch.h"

void Vtb_sspirits_long_list___024root___ctor_var_reset(Vtb_sspirits_long_list___024root* vlSelf);

Vtb_sspirits_long_list___024root::Vtb_sspirits_long_list___024root(Vtb_sspirits_long_list__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_sspirits_long_list___024root___ctor_var_reset(this);
}

void Vtb_sspirits_long_list___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sspirits_long_list___024root::~Vtb_sspirits_long_list___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Savable
void Vtb_sspirits_long_list___024root::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x278e605c434ac682ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<clk;
    os<<tb_sspirits_long_list__DOT__reset;
    os<<tb_sspirits_long_list__DOT__ce_pixel;
    os<<tb_sspirits_long_list__DOT__mem_req;
    os<<tb_sspirits_long_list__DOT__dut__DOT__burst_request_index;
    os<<tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_index;
    os<<tb_sspirits_long_list__DOT__dut__DOT__burst_cache_hit;
    os<<tb_sspirits_long_list__DOT__dut__DOT__cache_ack_pending;
    os<<tb_sspirits_long_list__DOT__dut__DOT__read_ack;
    os<<tb_sspirits_long_list__DOT__dut__DOT__line_b_wren;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_write_enable;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable;
    os<<tb_sspirits_long_list__DOT__dut__DOT__state;
    os<<tb_sspirits_long_list__DOT__dut__DOT__display_bank;
    os<<tb_sspirits_long_list__DOT__dut__DOT__fill_bank;
    os<<tb_sspirits_long_list__DOT__dut__DOT__line_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__bank_filling;
    os<<tb_sspirits_long_list__DOT__dut__DOT__fill_epoch;
    os<<tb_sspirits_long_list__DOT__dut__DOT__fill_generation;
    os<<tb_sspirits_long_list__DOT__dut__DOT__next_display_bank;
    os<<tb_sspirits_long_list__DOT__dut__DOT__fill_candidate;
    os<<tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__list_cache_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__cache_refresh_pending;
    os<<tb_sspirits_long_list__DOT__dut__DOT__frame_epoch;
    os<<tb_sspirits_long_list__DOT__dut__DOT__frame_boundary;
    os<<tb_sspirits_long_list__DOT__dut__DOT__current_clip_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__palette_cache_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__palette_cache_index;
    os<<tb_sspirits_long_list__DOT__dut__DOT__palette_cache_hit;
    os<<tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__x_accum;
    os<<tb_sspirits_long_list__DOT__dut__DOT__y_accum;
    os<<tb_sspirits_long_list__DOT__dut__DOT__emit_count;
    os<<tb_sspirits_long_list__DOT__dut__DOT__flipx;
    os<<tb_sspirits_long_list__DOT__dut__DOT__flipy;
    os<<tb_sspirits_long_list__DOT__dut__DOT__size_x_tiles;
    os<<tb_sspirits_long_list__DOT__dut__DOT__size_y_tiles;
    os<<tb_sspirits_long_list__DOT__dut__DOT__size_x_shift;
    os<<tb_sspirits_long_list__DOT__dut__DOT__size_y_mask;
    os<<tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_count;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_active;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan1_active;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_second_last;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active_count;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_count;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_last;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_list_valid;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scrub_req;
    os<<__VstlFirstIteration;
    os<<__VstlPhaseResult;
    os<<__Vtrigprevexpr___TOP__clk__0;
    os<<__VactPhaseResult;
    os<<__VnbaPhaseResult;
    os<<tb_sspirits_long_list__DOT__hcount;
    os<<tb_sspirits_long_list__DOT__vcount;
    os<<tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_tag;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair2;
    os<<tb_sspirits_long_list__DOT__dut__DOT__display_read_addr;
    os<<tb_sspirits_long_list__DOT__dut__DOT__target_y;
    os<<tb_sspirits_long_list__DOT__dut__DOT__render_next_target;
    os<<tb_sspirits_long_list__DOT__dut__DOT__next_display_line;
    os<<tb_sspirits_long_list__DOT__dut__DOT__list_index;
    os<<tb_sspirits_long_list__DOT__dut__DOT__list_seen;
    os<<tb_sspirits_long_list__DOT__dut__DOT__current_clip_flags;
    os<<tb_sspirits_long_list__DOT__dut__DOT__current_clip_top;
    os<<tb_sspirits_long_list__DOT__dut__DOT__current_clip_left;
    os<<tb_sspirits_long_list__DOT__dut__DOT__current_clip_bottom;
    os<<tb_sspirits_long_list__DOT__dut__DOT__current_clip_right;
    os<<tb_sspirits_long_list__DOT__dut__DOT__stack_count;
    os<<tb_sspirits_long_list__DOT__dut__DOT__render_pos;
    os<<tb_sspirits_long_list__DOT__dut__DOT__stack_head;
    os<<tb_sspirits_long_list__DOT__dut__DOT__stack_write_slot;
    os<<tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag;
    os<<tb_sspirits_long_list__DOT__dut__DOT__zoomx_step;
    os<<tb_sspirits_long_list__DOT__dut__DOT__zoomy_step;
    os<<tb_sspirits_long_list__DOT__dut__DOT__source_row;
    os<<tb_sspirits_long_list__DOT__dut__DOT__source_column;
    os<<tb_sspirits_long_list__DOT__dut__DOT__total_rows;
    os<<tb_sspirits_long_list__DOT__dut__DOT__total_columns;
    os<<tb_sspirits_long_list__DOT__dut__DOT__dest_y;
    os<<tb_sspirits_long_list__DOT__dut__DOT__dest_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__clip_min_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__clip_max_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_output_width;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_right_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__palette_base;
    os<<tb_sspirits_long_list__DOT__dut__DOT__wanted_tag;
    os<<tb_sspirits_long_list__DOT__dut__DOT__x_sum;
    os<<tb_sspirits_long_list__DOT__dut__DOT__y_sum;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_zoomy_step;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_y;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_bottom_y;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_divisor;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_total_rows;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_adjust_value;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_target_offset;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_pos;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_count;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair;
    os<<tb_sspirits_long_list__DOT__dut__DOT__list_origin_y;
    os<<tb_sspirits_long_list__DOT__dut__DOT__list_bottom_y;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scan_next_pos;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_setup_origin_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_setup_right_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_min_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_max_x;
    os<<tb_sspirits_long_list__DOT__dut__DOT__scrub_addr;
    os<<tb_sspirits_long_list__DOT__mem_addr;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__mem_data[__Vi0];
    }
    os<<tb_sspirits_long_list__DOT__phase;
    os<<tb_sspirits_long_list__DOT__clocks;
    os<<tb_sspirits_long_list__DOT__render_clocks;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__burst_cache_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__read_data[__Vi0];
    }
    os<<tb_sspirits_long_list__DOT__dut__DOT__burst_cache_init;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__clip_write_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__active_render_descriptor[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__scan_second_clip[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__render_clip[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__palette_table[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__data_cache[__Vi0];
    }
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_dividend;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_quotient;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_remainder;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_remainder;
    os<<tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_quotient;
    os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_width_sum;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line_boundary[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[__Vi0];
    }
    os<<__VactIterCount;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b;
    os<<tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a;
    os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word;
    os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word;
    os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word;
    os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__burst_cache_tag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__burst_cache_valid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line_b_category[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line_b_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line0_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line1_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line2_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__line3_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__bank_generation[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__palette_cache_data[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__palette_cache_tags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_col[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_tag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_pen[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__lane_color[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_clip[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__bank_scrub[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os<<tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<tb_sspirits_long_list__DOT__dut__DOT__burst_cache_ram__DOT__mem[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__VstlTriggered[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__VactTriggered[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__VnbaTriggered[__Vi0];
    }
}
void Vtb_sspirits_long_list___024root::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x278e605c434ac682ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>clk;
    os>>tb_sspirits_long_list__DOT__reset;
    os>>tb_sspirits_long_list__DOT__ce_pixel;
    os>>tb_sspirits_long_list__DOT__mem_req;
    os>>tb_sspirits_long_list__DOT__dut__DOT__burst_request_index;
    os>>tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_index;
    os>>tb_sspirits_long_list__DOT__dut__DOT__burst_cache_hit;
    os>>tb_sspirits_long_list__DOT__dut__DOT__cache_ack_pending;
    os>>tb_sspirits_long_list__DOT__dut__DOT__read_ack;
    os>>tb_sspirits_long_list__DOT__dut__DOT__line_b_wren;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_write_enable;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_enable;
    os>>tb_sspirits_long_list__DOT__dut__DOT__state;
    os>>tb_sspirits_long_list__DOT__dut__DOT__display_bank;
    os>>tb_sspirits_long_list__DOT__dut__DOT__fill_bank;
    os>>tb_sspirits_long_list__DOT__dut__DOT__line_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__bank_filling;
    os>>tb_sspirits_long_list__DOT__dut__DOT__fill_epoch;
    os>>tb_sspirits_long_list__DOT__dut__DOT__fill_generation;
    os>>tb_sspirits_long_list__DOT__dut__DOT__next_display_bank;
    os>>tb_sspirits_long_list__DOT__dut__DOT__fill_candidate;
    os>>tb_sspirits_long_list__DOT__dut__DOT__fill_candidate_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__list_cache_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__cache_refresh_pending;
    os>>tb_sspirits_long_list__DOT__dut__DOT__frame_epoch;
    os>>tb_sspirits_long_list__DOT__dut__DOT__frame_boundary;
    os>>tb_sspirits_long_list__DOT__dut__DOT__current_clip_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__palette_cache_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__palette_cache_index;
    os>>tb_sspirits_long_list__DOT__dut__DOT__palette_cache_hit;
    os>>tb_sspirits_long_list__DOT__dut__DOT__data_cache_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__x_accum;
    os>>tb_sspirits_long_list__DOT__dut__DOT__y_accum;
    os>>tb_sspirits_long_list__DOT__dut__DOT__emit_count;
    os>>tb_sspirits_long_list__DOT__dut__DOT__flipx;
    os>>tb_sspirits_long_list__DOT__dut__DOT__flipy;
    os>>tb_sspirits_long_list__DOT__dut__DOT__size_x_tiles;
    os>>tb_sspirits_long_list__DOT__dut__DOT__size_y_tiles;
    os>>tb_sspirits_long_list__DOT__dut__DOT__size_x_shift;
    os>>tb_sspirits_long_list__DOT__dut__DOT__size_y_mask;
    os>>tb_sspirits_long_list__DOT__dut__DOT__vertical_allowed;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_count;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_active;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan1_active;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_second_last;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active_count;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_count;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_last;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_setup_vertical_allowed;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_list_valid;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scrub_req;
    os>>__VstlFirstIteration;
    os>>__VstlPhaseResult;
    os>>__Vtrigprevexpr___TOP__clk__0;
    os>>__VactPhaseResult;
    os>>__VnbaPhaseResult;
    os>>tb_sspirits_long_list__DOT__hcount;
    os>>tb_sspirits_long_list__DOT__vcount;
    os>>tb_sspirits_long_list__DOT__dut__DOT__burst_lookup_tag;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair2;
    os>>tb_sspirits_long_list__DOT__dut__DOT__display_read_addr;
    os>>tb_sspirits_long_list__DOT__dut__DOT__target_y;
    os>>tb_sspirits_long_list__DOT__dut__DOT__render_next_target;
    os>>tb_sspirits_long_list__DOT__dut__DOT__next_display_line;
    os>>tb_sspirits_long_list__DOT__dut__DOT__list_index;
    os>>tb_sspirits_long_list__DOT__dut__DOT__list_seen;
    os>>tb_sspirits_long_list__DOT__dut__DOT__current_clip_flags;
    os>>tb_sspirits_long_list__DOT__dut__DOT__current_clip_top;
    os>>tb_sspirits_long_list__DOT__dut__DOT__current_clip_left;
    os>>tb_sspirits_long_list__DOT__dut__DOT__current_clip_bottom;
    os>>tb_sspirits_long_list__DOT__dut__DOT__current_clip_right;
    os>>tb_sspirits_long_list__DOT__dut__DOT__stack_count;
    os>>tb_sspirits_long_list__DOT__dut__DOT__render_pos;
    os>>tb_sspirits_long_list__DOT__dut__DOT__stack_head;
    os>>tb_sspirits_long_list__DOT__dut__DOT__stack_write_slot;
    os>>tb_sspirits_long_list__DOT__dut__DOT__data_cache_tag;
    os>>tb_sspirits_long_list__DOT__dut__DOT__zoomx_step;
    os>>tb_sspirits_long_list__DOT__dut__DOT__zoomy_step;
    os>>tb_sspirits_long_list__DOT__dut__DOT__source_row;
    os>>tb_sspirits_long_list__DOT__dut__DOT__source_column;
    os>>tb_sspirits_long_list__DOT__dut__DOT__total_rows;
    os>>tb_sspirits_long_list__DOT__dut__DOT__total_columns;
    os>>tb_sspirits_long_list__DOT__dut__DOT__dest_y;
    os>>tb_sspirits_long_list__DOT__dut__DOT__dest_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__clip_min_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__clip_max_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_output_width;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_right_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__palette_base;
    os>>tb_sspirits_long_list__DOT__dut__DOT__wanted_tag;
    os>>tb_sspirits_long_list__DOT__dut__DOT__x_sum;
    os>>tb_sspirits_long_list__DOT__dut__DOT__y_sum;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_zoomy_step;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_origin_y;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_bottom_y;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_divisor;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_total_rows;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_adjust_value;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_target_offset;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_pos;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_count;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_read_pair;
    os>>tb_sspirits_long_list__DOT__dut__DOT__list_origin_y;
    os>>tb_sspirits_long_list__DOT__dut__DOT__list_bottom_y;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scan_next_pos;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_setup_origin_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_setup_right_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_min_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__active_setup_clip_max_x;
    os>>tb_sspirits_long_list__DOT__dut__DOT__scrub_addr;
    os>>tb_sspirits_long_list__DOT__mem_addr;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__mem_data[__Vi0];
    }
    os>>tb_sspirits_long_list__DOT__phase;
    os>>tb_sspirits_long_list__DOT__clocks;
    os>>tb_sspirits_long_list__DOT__render_clocks;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__burst_cache_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__read_data[__Vi0];
    }
    os>>tb_sspirits_long_list__DOT__dut__DOT__burst_cache_init;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__clip_write_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair2_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair2_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__active_cache_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__active_cache_write_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__active_render_descriptor[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__active_render_clip[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_pair_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_pair_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__scan_clip1[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__scan_second_descriptor[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__scan_second_clip[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__render_clip[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__palette_table[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__data_cache[__Vi0];
    }
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_dividend;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_quotient;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_remainder;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_remainder;
    os>>tb_sspirits_long_list__DOT__dut__DOT__ydiv_next_quotient;
    os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_width_sum;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line_boundary[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_3__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT____VlemCall_2__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_3__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT____VlemCall_2__pack_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__active_cache_ram__DOT____VlemCall_0__pack_word[__Vi0];
    }
    os>>__VactIterCount;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b;
    os>>tb_sspirits_long_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a;
    os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_3__pack_word;
    os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT____VlemCall_2__pack_word;
    os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_3__pack_word;
    os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT____VlemCall_2__pack_word;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__burst_cache_tag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__burst_cache_valid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line_b_category[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line_b_addr[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line_b_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line0_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line1_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line2_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__line3_render_q[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__bank_generation[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__bank_line_y[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__palette_cache_data[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__palette_cache_tags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_line_value[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_dest_x[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_col[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_within_x[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_data_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_word[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_tag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_pen[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__lane_color[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_descriptor[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_pending_clip[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_batch_pending_clip[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_descriptor[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_clip[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__scan_quad_active[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__bank_scrub[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        os>>tb_sspirits_long_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>tb_sspirits_long_list__DOT__dut__DOT__burst_cache_ram__DOT__mem[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__VstlTriggered[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__VactTriggered[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__VnbaTriggered[__Vi0];
    }
}

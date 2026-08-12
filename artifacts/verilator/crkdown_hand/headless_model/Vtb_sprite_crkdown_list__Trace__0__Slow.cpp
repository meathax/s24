// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_sprite_crkdown_list__Syms.h"


VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_sub__TOP__s24_pkg__0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____11(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____12(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____13(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____14(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____24(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____25(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____31(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_sub__TOP__0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_sub__TOP__0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "s24_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_sprite_crkdown_list___024root__trace_init_sub__TOP__s24_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb_sprite_crkdown_list", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"ce_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"hcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"vcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"pixel0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"pixel1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"pixel2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"pixel3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rank0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rank1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"rank2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"rank3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"mem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"mem_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,4);
    VL_TRACE_DECL_WIDE(tracep,c+16,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+707,0,"BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,4);
    VL_TRACE_DECL_BUS(tracep,c+708,0,"TARGET_W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+709,0,"TARGET_W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"target_lines",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"missing_lines",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+710,0,"seen_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+711,0,"walked_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"mem_latency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"mem_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"init_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"phase",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"phase_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"line_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"ln",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"ce_pixel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"hcount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"vcount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"pixel0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"pixel1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"pixel2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"pixel3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rank0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rank1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"rank2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"rank3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,4);
    VL_TRACE_DECL_WIDE(tracep,c+16,0,"mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"mem_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"cache_invalidate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+713,0,"cache_invalidate_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"STACK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+715,0,"STACK_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ACTIVE_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"STACK_COUNT_LIMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+718,0,"STACK_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+719,0,"BURST_CACHE_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"burst_request_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"burst_lookup_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_WIDE(tracep,c+30,0,"burst_cache_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+34,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"burst_cache_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"cache_ack_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"read_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"burst_cache_fill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"burst_cache_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"line_b_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "line_b_category", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 1,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"LINE_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"LINE_BANK_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"LINE_GEN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"LINE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "line_b_addr", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line_b_data", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+52+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"descriptor_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"descriptor_write_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"descriptor_write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+34,0,"descriptor_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+63,0,"clip_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_WIDE(tracep,c+66,0,"descriptor_stack_pair2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+74,0,"clip_stack_pair2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 161,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"descriptor_read_pair2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"active_cache_read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"active_cache_write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_WIDE(tracep,c+83,0,"active_cache_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 208,0);
    VL_TRACE_DECL_WIDE(tracep,c+90,0,"active_cache_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 208,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"active_cache_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+98,0,"active_render_descriptor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+102,0,"active_render_clip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"display_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"fill_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"line_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"bank_filling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"fill_epoch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"display_read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_PUSH_PREFIX(tracep, "line0_display_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+112+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line1_display_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+120+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line2_display_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+128+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line3_display_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+136+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line0_render_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+144+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line1_render_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+152+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line2_render_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+160+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line3_render_q", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+168+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 33,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_QUAD(tracep,c+176,0,"line0_display_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_QUAD(tracep,c+178,0,"line1_display_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_QUAD(tracep,c+180,0,"line2_display_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_QUAD(tracep,c+182,0,"line3_display_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"display_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"fill_generation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);

    Vtb_sprite_crkdown_list___024root__trace_init_dtype____11(vlSelf, tracep, "bank_generation", 0, c+186, VerilatedTraceSigDirection::NONE);

    Vtb_sprite_crkdown_list___024root__trace_init_dtype____12(vlSelf, tracep, "bank_line_y", 0, c+194, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"target_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"render_next_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"next_display_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"next_display_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"fill_candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+207,0,"fill_candidate_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"next_display_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+723,0,"bank_scan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"reclaim_scan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"list_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"list_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"list_cache_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"cache_refresh_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"frame_epoch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"frame_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"current_clip_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"current_clip_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"current_clip_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"current_clip_bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"current_clip_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"current_clip_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+222,0,"stack_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"render_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+224,0,"stack_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"stack_write_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_WIDE(tracep,c+226,0,"descriptor_stack_pair_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"clip_stack_pair_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 161,0);
    VL_TRACE_DECL_WIDE(tracep,c+240,0,"descriptor_stack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+244,0,"scan_descriptor1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+248,0,"clip_stack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_WIDE(tracep,c+251,0,"scan_clip1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_WIDE(tracep,c+254,0,"scan_second_descriptor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+258,0,"scan_second_clip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_WIDE(tracep,c+261,0,"render_clip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_WIDE(tracep,c+264,0,"descriptor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+268,0,"palette_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+272,0,"data_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);

    Vtb_sprite_crkdown_list___024root__trace_init_dtype____13(vlSelf, tracep, "palette_cache_data", 0, c+276, VerilatedTraceSigDirection::NONE);

    Vtb_sprite_crkdown_list___024root__trace_init_dtype____14(vlSelf, tracep, "palette_cache_tags", 0, c+308, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"palette_cache_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"palette_cache_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"palette_cache_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"data_cache_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+320,0,"data_cache_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_line_value", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+321+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 16,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_dest_x", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+325+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 13,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_col", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+329+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 10,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_within_x", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+333+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 2,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_data_word", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+337+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_word", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+341+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 16,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_tag", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+345+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 13,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_pen", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+349+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane_color", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+353+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+724,0,"lane_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+724,0,"lane_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+357,0,"line_phys",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+358,0,"zoomx_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"x_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"y_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"emit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"source_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"source_column",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"total_rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"total_columns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"dest_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"dest_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"flipx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"flipy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"size_x_tiles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"size_y_tiles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"size_x_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"size_y_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"wanted_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"wanted_nibble",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"current_pen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+378,0,"mapped_color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"line_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"vertical_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"clip_min_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"clip_max_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"clip_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"clip_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"descriptor_origin_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"descriptor_output_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"descriptor_right_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"d5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"mem_w0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"mem_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"mem_w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"mem_w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"mem_w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"mem_w5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"palette_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"tile_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"within_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"within_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"word_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+404,0,"tile_row_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"tile_ordinal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"wanted_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+407,0,"wanted_data_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"x_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"y_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"descriptor_zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"descriptor_total_rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"descriptor_origin_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"descriptor_bottom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+414,0,"ydiv_dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+415,0,"ydiv_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"ydiv_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"ydiv_next_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"ydiv_divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"ydiv_total_rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"ydiv_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"ydiv_shifted_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"ydiv_next_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"ydiv_adjust_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"descriptor_target_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"scan_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"active_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"stack_scan_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"descriptor_read_pair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"scan_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"scan_w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"scan1_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"scan1_w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"render_w0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"render_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+435,0,"render_w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"render_w5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"render_zoomx_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"descriptor_width_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+439,0,"list_zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"list_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"list_height_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+442,0,"list_origin_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+443,0,"list_bottom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+444,0,"scan_zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+445,0,"scan_height_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"scan_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"scan_origin_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+448,0,"scan_bottom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+449,0,"scan_vertical_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+450,0,"scan_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"scan1_zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+452,0,"scan1_height_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"scan1_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"scan1_origin_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+455,0,"scan1_bottom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"scan1_vertical_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+457,0,"scan1_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+458,0,"scan_descriptor2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+462,0,"scan_descriptor3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+466,0,"scan_clip2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_WIDE(tracep,c+469,0,"scan_clip3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"scan2_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+473,0,"scan2_w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"scan3_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"scan3_w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+476,0,"scan2_zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"scan3_zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"scan2_height_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"scan3_height_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"scan2_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+481,0,"scan3_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+482,0,"scan2_origin_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+483,0,"scan3_origin_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"scan2_bottom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"scan3_bottom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"scan2_vertical_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"scan3_vertical_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+488,0,"scan2_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+489,0,"scan3_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+490,0,"scan_pair_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+491,0,"scan_quad_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"scan_advance",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+493,0,"scan_next_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+494,0,"scan_next_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"scan_second_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+496,0,"scan_quad_active_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+497,0,"scan_quad_pending_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+498,0,"scan_quad_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+499,0,"scan_quad_first_descriptor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+503,0,"scan_quad_first_clip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 80,0);

    Vtb_sprite_crkdown_list___024root__trace_init_dtype____24(vlSelf, tracep, "scan_quad_pending_descriptor", 0, c+506, VerilatedTraceSigDirection::NONE);

    Vtb_sprite_crkdown_list___024root__trace_init_dtype____25(vlSelf, tracep, "scan_quad_pending_clip", 0, c+518, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "scan_quad_batch_pending_descriptor", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+527+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 127,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "scan_quad_batch_pending_clip", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+539+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 80,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "scan_quad_descriptor", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+548+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 127,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "scan_quad_clip", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+564+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 80,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "scan_quad_active", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+576+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+724,0,"scan_quad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+580,0,"scan_quad_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+581,0,"active_setup_origin_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+582,0,"active_setup_right_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"active_setup_origin_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"active_setup_bottom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+583,0,"active_setup_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"active_setup_zoomy_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"active_setup_total_rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+584,0,"active_setup_clip_min_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+585,0,"active_setup_clip_max_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+586,0,"active_setup_clip_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+587,0,"active_setup_clip_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BIT(tracep,c+588,0,"active_setup_vertical_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"active_setup_target_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_WIDE(tracep,c+589,0,"line_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 383,0);
    VL_TRACE_DECL_BIT(tracep,c+601,0,"active_list_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"line_b_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"scrub_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+603,0,"scrub_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);

    Vtb_sprite_crkdown_list___024root__trace_init_dtype____31(vlSelf, tracep, "bank_scrub", 0, c+604, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "active_cache_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+725,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+726,0,"PACKED_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_WIDE(tracep,c+83,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 208,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_WIDE(tracep,c+90,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 208,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "burst_cache_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+612,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+30,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+613,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+16,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "clip_stack_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+727,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+728,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+729,0,"PACKED_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 161,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+63,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"write_high",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "clip_stack_ram2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+727,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+728,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+729,0,"PACKED_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+74,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 161,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+63,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 80,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"write_high",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "descriptor_stack_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+730,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+728,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+727,0,"PACKED_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+226,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+34,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"write_high",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "descriptor_stack_ram2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+730,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+728,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+727,0,"PACKED_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+66,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_WIDE(tracep,c+34,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"write_high",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_line_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "line0_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+614,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+616,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+617,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+619,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+620,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line1_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+622,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+616,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+617,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+624,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+625,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line2_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+627,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+616,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+617,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+629,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+630,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line3_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+632,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+616,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+617,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+634,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+635,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_line_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "line0_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+637,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+640,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+643,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line1_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+645,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+640,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+647,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+648,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line2_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+650,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+640,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+652,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+653,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line3_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+655,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+640,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+657,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+658,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_line_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "line0_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+660,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+663,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+665,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+666,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line1_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+668,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+663,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+670,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+671,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line2_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+673,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+663,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+675,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+676,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line3_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+678,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+663,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+680,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+681,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_line_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "line0_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+683,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+685,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+686,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+688,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+689,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line1_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+691,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+685,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+686,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+693,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+694,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line2_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+696,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+685,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+686,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+698,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+699,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "line3_ram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+731,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+701,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+685,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+686,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+703,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+704,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____11(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____11(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype____11\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____11(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____11(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____11\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____12(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____12(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype____12\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____12(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____12(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____12\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 8,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____13(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____13(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype____13\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____13(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____13(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____13\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+0+i*4,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 127,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____14(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____14(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype____14\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____14(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____14(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____14\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 13,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____24(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____24(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype____24\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____24(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____24(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____24\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+0+i*4,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 127,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____25(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____25(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype____25\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____25(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____25(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____25\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+0+i*3,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 80,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____31(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype____31(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype____31\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____31(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____31(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_dtype_sub____31\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 6,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_sub__TOP__s24_pkg__0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_sub__TOP__s24_pkg__0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+733,0,"SDR_BOOT_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+734,0,"SDR_ROMBOARD_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+735,0,"SDR_FLOPPY_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"SDR_FDKEY_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"SDR_WORKA_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+738,0,"SDR_WORKB_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+739,0,"SDR_TILE_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+740,0,"SDR_CHAR_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+741,0,"SDR_PALETTE_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+742,0,"SDR_SPRITE_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+743,0,"INPUT_GENERIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+744,0,"INPUT_GGROUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+745,0,"INPUT_QUIZ4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+746,0,"INPUT_QROUKA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+747,0,"INPUT_MAHJONG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+748,0,"ANALOGUE_STANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+749,0,"ANALOGUE_ROUGHRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+750,0,"IRQ_YM2151",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+751,0,"IRQ_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"IRQ_VBLANK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+752,0,"IRQ_SPRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+753,0,"IRQ_FRC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_init_top(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_init_top\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sprite_crkdown_list___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_sprite_crkdown_list___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_sprite_crkdown_list___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_register(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_register\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_sprite_crkdown_list___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_sprite_crkdown_list___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_sprite_crkdown_list___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_sprite_crkdown_list___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_const_0_sub_0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_const_0\n"); );
    // Body
    Vtb_sprite_crkdown_list___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sprite_crkdown_list___024root*>(voidSelf);
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_sprite_crkdown_list___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_const_0_sub_0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_const_0_sub_0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+707,(0x00400000U),23);
    bufp->fullSData(oldp+708,(0x306fU),16);
    bufp->fullSData(oldp+709,(0x30fdU),16);
    bufp->fullBit(oldp+710,(vlSelfRef.tb_sprite_crkdown_list__DOT__seen_target));
    bufp->fullBit(oldp+711,(vlSelfRef.tb_sprite_crkdown_list__DOT__walked_target));
    bufp->fullBit(oldp+712,(0U));
    bufp->fullSData(oldp+713,(0U),14);
    bufp->fullIData(oldp+714,(0x00001000U),32);
    bufp->fullIData(oldp+715,(0x0000000cU),32);
    bufp->fullIData(oldp+716,(0x0000000aU),32);
    bufp->fullSData(oldp+717,(0x1000U),13);
    bufp->fullSData(oldp+718,(0x0fffU),13);
    bufp->fullIData(oldp+719,(0x00000100U),32);
    bufp->fullIData(oldp+720,(8U),32);
    bufp->fullIData(oldp+721,(3U),32);
    bufp->fullIData(oldp+722,(0x00000022U),32);
    bufp->fullIData(oldp+723,(8U),32);
    bufp->fullIData(oldp+724,(4U),32);
    bufp->fullIData(oldp+725,(0x000000d1U),32);
    bufp->fullIData(oldp+726,(0x00000077U),32);
    bufp->fullIData(oldp+727,(0x00000051U),32);
    bufp->fullIData(oldp+728,(0x0000000bU),32);
    bufp->fullIData(oldp+729,(0x00000026U),32);
    bufp->fullIData(oldp+730,(0x00000080U),32);
    bufp->fullQData(oldp+731,(0ULL),34);
    bufp->fullIData(oldp+733,(0U),27);
    bufp->fullIData(oldp+734,(0x00100000U),27);
    bufp->fullIData(oldp+735,(0x00800000U),27);
    bufp->fullIData(oldp+736,(0x00a00000U),27);
    bufp->fullIData(oldp+737,(0x01000000U),27);
    bufp->fullIData(oldp+738,(0x01040000U),27);
    bufp->fullIData(oldp+739,(0x01080000U),27);
    bufp->fullIData(oldp+740,(0x01100000U),27);
    bufp->fullIData(oldp+741,(0x01180000U),27);
    bufp->fullIData(oldp+742,(0x04000000U),27);
    bufp->fullCData(oldp+743,(0U),8);
    bufp->fullCData(oldp+744,(1U),8);
    bufp->fullCData(oldp+745,(2U),8);
    bufp->fullCData(oldp+746,(3U),8);
    bufp->fullCData(oldp+747,(4U),8);
    bufp->fullCData(oldp+748,(0U),2);
    bufp->fullCData(oldp+749,(1U),2);
    bufp->fullIData(oldp+750,(1U),32);
    bufp->fullIData(oldp+751,(2U),32);
    bufp->fullIData(oldp+752,(4U),32);
    bufp->fullIData(oldp+753,(5U),32);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_0_sub_0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_0\n"); );
    // Body
    Vtb_sprite_crkdown_list___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sprite_crkdown_list___024root*>(voidSelf);
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_sprite_crkdown_list___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____1(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____2(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____3(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*13:0*/, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____4(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 3>& __VdtypeVar);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____5(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*80:0*/, 3>& __VdtypeVar);
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____6(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 8>& __VdtypeVar);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_0_sub_0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_0_sub_0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_latency),32);
    bufp->fullBit(oldp+1,(vlSelfRef.tb_sprite_crkdown_list__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel));
    bufp->fullSData(oldp+3,(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount),10);
    bufp->fullSData(oldp+4,(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount),10);
    bufp->fullSData(oldp+5,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel0),14);
    bufp->fullSData(oldp+6,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel1),14);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel2),14);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel3),14);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank0),11);
    bufp->fullSData(oldp+10,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank1),11);
    bufp->fullSData(oldp+11,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank2),11);
    bufp->fullSData(oldp+12,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank3),11);
    bufp->fullBit(oldp+13,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req));
    bufp->fullBit(oldp+14,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_ack));
    bufp->fullIData(oldp+15,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr),23);
    bufp->fullWData(oldp+16,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data),128);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_sprite_crkdown_list__DOT__target_lines),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_wait),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_sprite_crkdown_list__DOT__init_line),32);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_sprite_crkdown_list__DOT__phase),4);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_sprite_crkdown_list__DOT__line_index),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_sprite_crkdown_list__DOT__ln),32);
    bufp->fullSData(oldp+28,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag),14);
    bufp->fullSData(oldp+29,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_lookup_tag),14);
    bufp->fullWData(oldp+30,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_q),128);
    bufp->fullWData(oldp+34,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data),128);
    bufp->fullBit(oldp+38,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_hit));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_ack_pending));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__read_ack));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_enable));
    bufp->fullIData(oldp+42,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_init),32);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren),4);
    bufp->fullCData(oldp+44,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0]),2);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1]),2);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2]),2);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3]),2);
    bufp->fullSData(oldp+48,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0]),10);
    bufp->fullSData(oldp+49,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1]),10);
    bufp->fullSData(oldp+50,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2]),10);
    bufp->fullSData(oldp+51,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3]),10);
    bufp->fullQData(oldp+52,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0]),34);
    bufp->fullQData(oldp+54,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1]),34);
    bufp->fullQData(oldp+56,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2]),34);
    bufp->fullQData(oldp+58,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3]),34);
    bufp->fullBit(oldp+60,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_enable));
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot))));
    bufp->fullSData(oldp+62,((0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                             >> 1U))),11);
    bufp->fullWData(oldp+63,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_data),81);
    bufp->fullWData(oldp+66,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q),256);
    bufp->fullWData(oldp+74,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q),162);
    bufp->fullSData(oldp+80,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2),11);
    bufp->fullSData(oldp+81,((0x000003ffU & (((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                                              | (6U 
                                                 == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))
                                              ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)
                                              : ((8U 
                                                  == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                                  ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                    - (IData)(2U)) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))
                                                   : 
                                                  (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                    - (IData)(1U)) 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))))))),10);
    bufp->fullSData(oldp+82,((0x000003ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count))),10);
    bufp->fullWData(oldp+83,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q),209);
    bufp->fullWData(oldp+90,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data),209);
    bufp->fullBit(oldp+97,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable));
    bufp->fullWData(oldp+98,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor),128);
    bufp->fullWData(oldp+102,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip),81);
    bufp->fullCData(oldp+105,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state),5);
    bufp->fullCData(oldp+106,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank),3);
    bufp->fullCData(oldp+107,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank),3);
    bufp->fullCData(oldp+108,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid),8);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling),8);
    bufp->fullBit(oldp+110,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch));
    bufp->fullSData(oldp+111,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr),10);
    bufp->fullQData(oldp+112,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[0]),34);
    bufp->fullQData(oldp+114,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[1]),34);
    bufp->fullQData(oldp+116,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[2]),34);
    bufp->fullQData(oldp+118,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[3]),34);
    bufp->fullQData(oldp+120,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[0]),34);
    bufp->fullQData(oldp+122,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[1]),34);
    bufp->fullQData(oldp+124,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[2]),34);
    bufp->fullQData(oldp+126,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[3]),34);
    bufp->fullQData(oldp+128,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[0]),34);
    bufp->fullQData(oldp+130,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[1]),34);
    bufp->fullQData(oldp+132,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[2]),34);
    bufp->fullQData(oldp+134,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[3]),34);
    bufp->fullQData(oldp+136,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[0]),34);
    bufp->fullQData(oldp+138,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[1]),34);
    bufp->fullQData(oldp+140,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[2]),34);
    bufp->fullQData(oldp+142,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[3]),34);
    bufp->fullQData(oldp+144,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[0]),34);
    bufp->fullQData(oldp+146,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[1]),34);
    bufp->fullQData(oldp+148,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[2]),34);
    bufp->fullQData(oldp+150,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[3]),34);
    bufp->fullQData(oldp+152,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[0]),34);
    bufp->fullQData(oldp+154,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[1]),34);
    bufp->fullQData(oldp+156,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[2]),34);
    bufp->fullQData(oldp+158,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[3]),34);
    bufp->fullQData(oldp+160,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[0]),34);
    bufp->fullQData(oldp+162,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[1]),34);
    bufp->fullQData(oldp+164,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[2]),34);
    bufp->fullQData(oldp+166,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[3]),34);
    bufp->fullQData(oldp+168,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[0]),34);
    bufp->fullQData(oldp+170,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[1]),34);
    bufp->fullQData(oldp+172,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[2]),34);
    bufp->fullQData(oldp+174,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[3]),34);
    bufp->fullQData(oldp+176,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_sel),34);
    bufp->fullQData(oldp+178,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_sel),34);
    bufp->fullQData(oldp+180,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_sel),34);
    bufp->fullQData(oldp+182,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_sel),34);
    bufp->fullCData(oldp+184,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_lane),2);
    bufp->fullCData(oldp+185,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation),8);
    Vtb_sprite_crkdown_list___024root__trace_full_dtype____0(vlSelf, bufp, 186, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation);
    Vtb_sprite_crkdown_list___024root__trace_full_dtype____1(vlSelf, bufp, 194, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y);
    bufp->fullSData(oldp+202,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y),9);
    bufp->fullSData(oldp+203,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target),9);
    bufp->fullCData(oldp+204,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank),3);
    bufp->fullBit(oldp+205,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready));
    bufp->fullCData(oldp+206,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate),3);
    bufp->fullBit(oldp+207,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid));
    bufp->fullSData(oldp+208,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line),10);
    bufp->fullIData(oldp+209,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__reclaim_scan),32);
    bufp->fullSData(oldp+210,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index),13);
    bufp->fullSData(oldp+211,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen),14);
    bufp->fullBit(oldp+212,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid));
    bufp->fullBit(oldp+213,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending));
    bufp->fullBit(oldp+214,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch));
    bufp->fullBit(oldp+215,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary));
    bufp->fullSData(oldp+216,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_flags),16);
    bufp->fullSData(oldp+217,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top),16);
    bufp->fullSData(oldp+218,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left),16);
    bufp->fullSData(oldp+219,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom),16);
    bufp->fullSData(oldp+220,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right),16);
    bufp->fullBit(oldp+221,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid));
    bufp->fullSData(oldp+222,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count),13);
    bufp->fullSData(oldp+223,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos),13);
    bufp->fullSData(oldp+224,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head),12);
    bufp->fullSData(oldp+225,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot),12);
    bufp->fullWData(oldp+226,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q),256);
    bufp->fullWData(oldp+234,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q),162);
    bufp->fullWData(oldp+240,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q),128);
    __Vtemp_1[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
    __Vtemp_1[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
    __Vtemp_1[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
    __Vtemp_1[3U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
    bufp->fullWData(oldp+244,(__Vtemp_1),128);
    bufp->fullWData(oldp+248,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q),81);
    bufp->fullWData(oldp+251,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1),81);
    bufp->fullWData(oldp+254,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor),128);
    bufp->fullWData(oldp+258,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip),81);
    bufp->fullWData(oldp+261,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip),81);
    bufp->fullWData(oldp+264,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor),128);
    bufp->fullWData(oldp+268,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table),128);
    bufp->fullWData(oldp+272,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache),128);
    Vtb_sprite_crkdown_list___024root__trace_full_dtype____2(vlSelf, bufp, 276, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data);
    Vtb_sprite_crkdown_list___024root__trace_full_dtype____3(vlSelf, bufp, 308, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags);
    bufp->fullCData(oldp+316,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid),8);
    bufp->fullCData(oldp+317,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_index),3);
    bufp->fullBit(oldp+318,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_hit));
    bufp->fullSData(oldp+319,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag),14);
    bufp->fullBit(oldp+320,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid));
    bufp->fullIData(oldp+321,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0]),17);
    bufp->fullIData(oldp+322,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1]),17);
    bufp->fullIData(oldp+323,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2]),17);
    bufp->fullIData(oldp+324,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3]),17);
    bufp->fullSData(oldp+325,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0]),14);
    bufp->fullSData(oldp+326,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1]),14);
    bufp->fullSData(oldp+327,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2]),14);
    bufp->fullSData(oldp+328,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3]),14);
    bufp->fullSData(oldp+329,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0]),11);
    bufp->fullSData(oldp+330,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[1]),11);
    bufp->fullSData(oldp+331,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[2]),11);
    bufp->fullSData(oldp+332,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[3]),11);
    bufp->fullCData(oldp+333,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[0]),3);
    bufp->fullCData(oldp+334,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[1]),3);
    bufp->fullCData(oldp+335,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[2]),3);
    bufp->fullCData(oldp+336,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[3]),3);
    bufp->fullSData(oldp+337,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[0]),16);
    bufp->fullSData(oldp+338,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[1]),16);
    bufp->fullSData(oldp+339,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[2]),16);
    bufp->fullSData(oldp+340,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[3]),16);
    bufp->fullIData(oldp+341,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[0]),17);
    bufp->fullIData(oldp+342,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[1]),17);
    bufp->fullIData(oldp+343,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[2]),17);
    bufp->fullIData(oldp+344,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[3]),17);
    bufp->fullSData(oldp+345,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[0]),14);
    bufp->fullSData(oldp+346,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[1]),14);
    bufp->fullSData(oldp+347,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[2]),14);
    bufp->fullSData(oldp+348,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[3]),14);
    bufp->fullCData(oldp+349,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[0]),4);
    bufp->fullCData(oldp+350,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[1]),4);
    bufp->fullCData(oldp+351,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[2]),4);
    bufp->fullCData(oldp+352,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[3]),4);
    bufp->fullCData(oldp+353,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[0]),8);
    bufp->fullCData(oldp+354,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[1]),8);
    bufp->fullCData(oldp+355,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[2]),8);
    bufp->fullCData(oldp+356,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[3]),8);
    bufp->fullIData(oldp+357,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys),32);
    bufp->fullSData(oldp+358,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step),9);
    bufp->fullSData(oldp+359,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step),9);
    bufp->fullCData(oldp+360,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum),6);
    bufp->fullCData(oldp+361,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum),6);
    bufp->fullCData(oldp+362,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__emit_count),3);
    bufp->fullSData(oldp+363,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row),11);
    bufp->fullSData(oldp+364,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column),11);
    bufp->fullSData(oldp+365,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles) 
                               << 3U)),11);
    bufp->fullSData(oldp+366,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles) 
                               << 3U)),11);
    bufp->fullSData(oldp+367,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y),13);
    bufp->fullSData(oldp+368,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x),13);
    bufp->fullBit(oldp+369,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx));
    bufp->fullBit(oldp+370,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipy));
    bufp->fullCData(oldp+371,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles),8);
    bufp->fullCData(oldp+372,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles),8);
    bufp->fullCData(oldp+373,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift),3);
    bufp->fullCData(oldp+374,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_mask),8);
    bufp->fullIData(oldp+375,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word),17);
    bufp->fullCData(oldp+376,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble),4);
    bufp->fullCData(oldp+377,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_pen),4);
    bufp->fullCData(oldp+378,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color),8);
    bufp->fullIData(oldp+379,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value),17);
    bufp->fullBit(oldp+380,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed));
    bufp->fullSData(oldp+381,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x),13);
    bufp->fullSData(oldp+382,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x),13);
    bufp->fullSData(oldp+383,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_first),13);
    bufp->fullSData(oldp+384,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_last),13);
    bufp->fullSData(oldp+385,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x),13);
    bufp->fullSData(oldp+386,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width),13);
    bufp->fullSData(oldp+387,((0x00003fffU & ((((0x00002000U 
                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x) 
                                                    << 1U)) 
                                                | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x)) 
                                               + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width)) 
                                              - (IData)(1U)))),14);
    bufp->fullSData(oldp+388,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d2),16);
    bufp->fullSData(oldp+389,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d3),16);
    bufp->fullSData(oldp+390,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                               >> 0x00000010U)),16);
    bufp->fullSData(oldp+391,((0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U])),16);
    bufp->fullSData(oldp+392,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                               >> 0x00000010U)),16);
    bufp->fullSData(oldp+393,((0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[1U])),16);
    bufp->fullSData(oldp+394,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[1U] 
                               >> 0x00000010U)),16);
    bufp->fullSData(oldp+395,((0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U])),16);
    bufp->fullSData(oldp+396,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
                               >> 0x00000010U)),16);
    bufp->fullSData(oldp+397,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_base),14);
    bufp->fullIData(oldp+398,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base),17);
    bufp->fullCData(oldp+399,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_x),8);
    bufp->fullCData(oldp+400,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y),8);
    bufp->fullCData(oldp+401,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_x),3);
    bufp->fullCData(oldp+402,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y),3);
    bufp->fullIData(oldp+403,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__word_calc),18);
    bufp->fullSData(oldp+404,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_row_offset),14);
    bufp->fullSData(oldp+405,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal),14);
    bufp->fullSData(oldp+406,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag),14);
    bufp->fullSData(oldp+407,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word),16);
    bufp->fullSData(oldp+408,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum),9);
    bufp->fullSData(oldp+409,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_sum),9);
    bufp->fullSData(oldp+410,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step),9);
    bufp->fullSData(oldp+411,((0x000007ffU & ((IData)(8U) 
                                              << (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x0000001dU)))),11);
    bufp->fullSData(oldp+412,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y),13);
    bufp->fullSData(oldp+413,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_bottom_y),14);
    bufp->fullIData(oldp+414,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend),18);
    bufp->fullIData(oldp+415,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient),18);
    bufp->fullIData(oldp+416,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder),19);
    bufp->fullIData(oldp+417,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder),19);
    bufp->fullSData(oldp+418,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor),9);
    bufp->fullSData(oldp+419,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows),11);
    bufp->fullCData(oldp+420,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count),5);
    bufp->fullIData(oldp+421,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder),19);
    bufp->fullIData(oldp+422,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient),18);
    bufp->fullSData(oldp+423,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_adjust_value),10);
    bufp->fullSData(oldp+424,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_target_offset),12);
    bufp->fullSData(oldp+425,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos),13);
    bufp->fullSData(oldp+426,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count),13);
    bufp->fullSData(oldp+427,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot),12);
    bufp->fullSData(oldp+428,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair),11);
    bufp->fullSData(oldp+429,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1),16);
    bufp->fullSData(oldp+430,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4),16);
    bufp->fullSData(oldp+431,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1),16);
    bufp->fullSData(oldp+432,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4),16);
    bufp->fullSData(oldp+433,((0x0000ffffU & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                               << 0x0000000fU) 
                                              | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U] 
                                                 >> 0x00000011U)))),16);
    bufp->fullSData(oldp+434,((0x0000ffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                              >> 1U))),16);
    bufp->fullSData(oldp+435,((0x0000ffffU & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                               << 0x0000000fU) 
                                              | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                 >> 0x00000011U)))),16);
    bufp->fullSData(oldp+436,((0x0000ffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                              >> 1U))),16);
    bufp->fullSData(oldp+437,((((0x40000000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U])
                                 ? (0U == (0x000000ffU 
                                           & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                              >> 9U)))
                                 : (0U == (0x000000ffU 
                                           & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                              >> 1U))))
                                ? 0x00000040U : (0x000001ffU 
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
                                                            >> 1U)))))))),9);
    bufp->fullIData(oldp+438,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum),20);
    bufp->fullSData(oldp+439,(((0U == (0x000000ffU 
                                       & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                          >> 0x00000010U)))
                                ? 0x00000040U : (0x000001ffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                        >> 0x00000010U)))))),9);
    bufp->fullSData(oldp+440,((0x00001fffU & (((IData)(0x00000020U) 
                                               + VL_SHIFTL_III(20,20,32, 
                                                               ((0U 
                                                                 == 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                     >> 0x00000010U)))
                                                                 ? 0x00000040U
                                                                 : 
                                                                (0x000001ffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                        >> 0x00000010U))))), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
                                                                    >> 0x0000000cU))))) 
                                              >> 6U))),13);
    bufp->fullIData(oldp+441,((0x000fffffU & ((IData)(0x00000020U) 
                                              + VL_SHIFTL_III(20,20,32, 
                                                              ((0U 
                                                                == 
                                                                (0x000000ffU 
                                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                    >> 0x00000010U)))
                                                                ? 0x00000040U
                                                                : 
                                                               (0x000001ffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (0x000000ffU 
                                                                    & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                       >> 0x00000010U))))), 
                                                              ((IData)(3U) 
                                                               + 
                                                               (7U 
                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
                                                                   >> 0x0000000cU))))))),20);
    bufp->fullSData(oldp+442,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y),13);
    bufp->fullSData(oldp+443,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y),14);
    bufp->fullSData(oldp+444,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step),9);
    bufp->fullIData(oldp+445,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum),20);
    bufp->fullSData(oldp+446,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height),13);
    bufp->fullSData(oldp+447,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y),13);
    bufp->fullSData(oldp+448,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y),14);
    bufp->fullBit(oldp+449,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed));
    bufp->fullBit(oldp+450,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active));
    bufp->fullSData(oldp+451,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step),9);
    bufp->fullIData(oldp+452,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum),20);
    bufp->fullSData(oldp+453,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height),13);
    bufp->fullSData(oldp+454,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y),13);
    bufp->fullSData(oldp+455,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y),14);
    bufp->fullBit(oldp+456,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed));
    bufp->fullBit(oldp+457,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active));
    __Vtemp_2[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
    __Vtemp_2[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
    __Vtemp_2[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
    __Vtemp_2[3U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
    bufp->fullWData(oldp+458,(__Vtemp_2),128);
    __Vtemp_3[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
    __Vtemp_3[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
    __Vtemp_3[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
    __Vtemp_3[3U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
    bufp->fullWData(oldp+462,(__Vtemp_3),128);
    __Vtemp_6[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[0U];
    __Vtemp_6[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[1U];
    __Vtemp_6[2U] = (0x0001ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U]);
    bufp->fullWData(oldp+466,(__Vtemp_6),81);
    bufp->fullWData(oldp+469,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3),81);
    bufp->fullSData(oldp+472,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1),16);
    bufp->fullSData(oldp+473,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4),16);
    bufp->fullSData(oldp+474,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1),16);
    bufp->fullSData(oldp+475,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4),16);
    bufp->fullSData(oldp+476,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step),9);
    bufp->fullSData(oldp+477,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step),9);
    bufp->fullIData(oldp+478,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum),20);
    bufp->fullIData(oldp+479,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum),20);
    bufp->fullSData(oldp+480,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height),13);
    bufp->fullSData(oldp+481,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height),13);
    bufp->fullSData(oldp+482,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y),13);
    bufp->fullSData(oldp+483,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y),13);
    bufp->fullSData(oldp+484,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y),14);
    bufp->fullSData(oldp+485,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y),14);
    bufp->fullBit(oldp+486,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed));
    bufp->fullBit(oldp+487,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed));
    bufp->fullBit(oldp+488,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active));
    bufp->fullBit(oldp+489,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active));
    bufp->fullBit(oldp+490,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid));
    bufp->fullBit(oldp+491,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid));
    bufp->fullCData(oldp+492,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance),3);
    bufp->fullSData(oldp+493,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos),13);
    bufp->fullSData(oldp+494,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot),12);
    bufp->fullBit(oldp+495,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last));
    bufp->fullCData(oldp+496,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count),3);
    bufp->fullCData(oldp+497,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count),3);
    bufp->fullBit(oldp+498,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last));
    bufp->fullWData(oldp+499,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor),128);
    bufp->fullWData(oldp+503,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip),81);
    Vtb_sprite_crkdown_list___024root__trace_full_dtype____4(vlSelf, bufp, 506, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor);
    Vtb_sprite_crkdown_list___024root__trace_full_dtype____5(vlSelf, bufp, 518, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip);
    bufp->fullWData(oldp+527,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0]),128);
    bufp->fullWData(oldp+531,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1]),128);
    bufp->fullWData(oldp+535,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2]),128);
    bufp->fullWData(oldp+539,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0]),81);
    bufp->fullWData(oldp+542,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1]),81);
    bufp->fullWData(oldp+545,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2]),81);
    bufp->fullWData(oldp+548,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0]),128);
    bufp->fullWData(oldp+552,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1]),128);
    bufp->fullWData(oldp+556,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2]),128);
    bufp->fullWData(oldp+560,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3]),128);
    bufp->fullWData(oldp+564,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0]),81);
    bufp->fullWData(oldp+567,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1]),81);
    bufp->fullWData(oldp+570,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2]),81);
    bufp->fullWData(oldp+573,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3]),81);
    bufp->fullBit(oldp+576,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[0]));
    bufp->fullBit(oldp+577,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[1]));
    bufp->fullBit(oldp+578,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[2]));
    bufp->fullBit(oldp+579,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[3]));
    bufp->fullIData(oldp+580,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen),32);
    bufp->fullSData(oldp+581,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x),13);
    bufp->fullSData(oldp+582,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_right_x),14);
    bufp->fullSData(oldp+583,((0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum 
                                              >> 6U))),13);
    bufp->fullSData(oldp+584,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x),13);
    bufp->fullSData(oldp+585,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x),13);
    bufp->fullSData(oldp+586,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first),13);
    bufp->fullSData(oldp+587,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last),13);
    bufp->fullBit(oldp+588,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed));
    bufp->fullWData(oldp+589,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary),384);
    bufp->fullBit(oldp+601,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid));
    bufp->fullBit(oldp+602,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req));
    bufp->fullSData(oldp+603,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr),10);
    Vtb_sprite_crkdown_list___024root__trace_full_dtype____6(vlSelf, bufp, 604, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub);
    bufp->fullCData(oldp+612,((0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag))),8);
    bufp->fullCData(oldp+613,((0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_lookup_tag))),8);
    bufp->fullQData(oldp+614,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a),34);
    bufp->fullSData(oldp+616,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U]),10);
    bufp->fullQData(oldp+617,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U]),34);
    bufp->fullBit(oldp+619,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                             & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
    bufp->fullQData(oldp+620,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b),34);
    bufp->fullQData(oldp+622,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a),34);
    bufp->fullBit(oldp+624,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                             & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
    bufp->fullQData(oldp+625,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b),34);
    bufp->fullQData(oldp+627,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a),34);
    bufp->fullBit(oldp+629,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                             & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
    bufp->fullQData(oldp+630,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b),34);
    bufp->fullQData(oldp+632,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a),34);
    bufp->fullBit(oldp+634,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                             & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
    bufp->fullQData(oldp+635,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b),34);
    bufp->fullQData(oldp+637,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a),34);
    bufp->fullSData(oldp+639,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U]),10);
    bufp->fullQData(oldp+640,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U]),34);
    bufp->fullBit(oldp+642,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
    bufp->fullQData(oldp+643,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b),34);
    bufp->fullQData(oldp+645,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a),34);
    bufp->fullBit(oldp+647,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
    bufp->fullQData(oldp+648,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b),34);
    bufp->fullQData(oldp+650,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a),34);
    bufp->fullBit(oldp+652,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
    bufp->fullQData(oldp+653,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b),34);
    bufp->fullQData(oldp+655,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a),34);
    bufp->fullBit(oldp+657,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
    bufp->fullQData(oldp+658,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b),34);
    bufp->fullQData(oldp+660,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a),34);
    bufp->fullSData(oldp+662,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U]),10);
    bufp->fullQData(oldp+663,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U]),34);
    bufp->fullBit(oldp+665,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
    bufp->fullQData(oldp+666,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b),34);
    bufp->fullQData(oldp+668,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a),34);
    bufp->fullBit(oldp+670,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
    bufp->fullQData(oldp+671,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b),34);
    bufp->fullQData(oldp+673,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a),34);
    bufp->fullBit(oldp+675,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
    bufp->fullQData(oldp+676,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b),34);
    bufp->fullQData(oldp+678,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a),34);
    bufp->fullBit(oldp+680,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
    bufp->fullQData(oldp+681,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b),34);
    bufp->fullQData(oldp+683,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a),34);
    bufp->fullSData(oldp+685,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U]),10);
    bufp->fullQData(oldp+686,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U]),34);
    bufp->fullBit(oldp+688,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
    bufp->fullQData(oldp+689,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b),34);
    bufp->fullQData(oldp+691,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a),34);
    bufp->fullBit(oldp+693,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
    bufp->fullQData(oldp+694,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b),34);
    bufp->fullQData(oldp+696,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a),34);
    bufp->fullBit(oldp+698,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
    bufp->fullQData(oldp+699,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b),34);
    bufp->fullQData(oldp+701,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a),34);
    bufp->fullBit(oldp+703,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                              >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                        | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
    bufp->fullQData(oldp+704,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b),34);
    bufp->fullBit(oldp+706,(vlSelfRef.clk));
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_dtype____0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->fullCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->fullCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->fullCData(oldp+7,(__VdtypeVar[7]),8);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____1(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_dtype____1\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),9);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),9);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),9);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),9);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),9);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),9);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),9);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),9);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____2(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_dtype____2\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullWData(oldp+0,(__VdtypeVar[0]),128);
    bufp->fullWData(oldp+4,(__VdtypeVar[1]),128);
    bufp->fullWData(oldp+8,(__VdtypeVar[2]),128);
    bufp->fullWData(oldp+12,(__VdtypeVar[3]),128);
    bufp->fullWData(oldp+16,(__VdtypeVar[4]),128);
    bufp->fullWData(oldp+20,(__VdtypeVar[5]),128);
    bufp->fullWData(oldp+24,(__VdtypeVar[6]),128);
    bufp->fullWData(oldp+28,(__VdtypeVar[7]),128);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____3(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*13:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_dtype____3\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),14);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),14);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),14);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),14);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),14);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),14);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),14);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),14);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____4(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_dtype____4\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullWData(oldp+0,(__VdtypeVar[0]),128);
    bufp->fullWData(oldp+4,(__VdtypeVar[1]),128);
    bufp->fullWData(oldp+8,(__VdtypeVar[2]),128);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____5(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*80:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_dtype____5\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullWData(oldp+0,(__VdtypeVar[0]),81);
    bufp->fullWData(oldp+3,(__VdtypeVar[1]),81);
    bufp->fullWData(oldp+6,(__VdtypeVar[2]),81);
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root__trace_full_dtype____6(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_full_dtype____6\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),7);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),7);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),7);
    bufp->fullCData(oldp+3,(__VdtypeVar[3]),7);
    bufp->fullCData(oldp+4,(__VdtypeVar[4]),7);
    bufp->fullCData(oldp+5,(__VdtypeVar[5]),7);
    bufp->fullCData(oldp+6,(__VdtypeVar[6]),7);
    bufp->fullCData(oldp+7,(__VdtypeVar[7]),7);
}

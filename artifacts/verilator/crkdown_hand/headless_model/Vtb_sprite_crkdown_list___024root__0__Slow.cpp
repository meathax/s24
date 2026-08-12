// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sprite_crkdown_list.h for the primary calling header

#include "Vtb_sprite_crkdown_list__pch.h"

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___eval_static(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___eval_static\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_sprite_crkdown_list__DOT__reset = 1U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__hcount = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__vcount = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__mem_ack = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__target_lines = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__mem_latency = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__mem_wait = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__phase = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__line_index = 0U;
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___eval_initial(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___eval_initial\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        std::ignore = VL_VALUEPLUSARGS_INI(32, "MEM_LATENCY=%d"s, 
                                           vlSelfRef.tb_sprite_crkdown_list__DOT__mem_latency);
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___eval_final(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___eval_final\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sprite_crkdown_list___024root___eval_phase__stl(Vtb_sprite_crkdown_list___024root* vlSelf);

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___eval_settle(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___eval_settle\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sprite_crkdown_list___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("C:/Users/meath/OneDrive/DOCUME~1/SEGASY~1/artifacts/verilator/crkdown_hand/headless_model\\tb_sprite_crkdown_list.sv", 16, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_sprite_crkdown_list___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_sprite_crkdown_list___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sprite_crkdown_list___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_sprite_crkdown_list___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___stl_sequent__TOP__0(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___stl_sequent__TOP__0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_1__palette_entry;
    SData/*15:0*/ tb_sprite_crkdown_list__DOT__dut__DOT____VlemCall_0__burst_word;
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__data);
    SData/*15:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__data;
    VL_ZERO_W(128, __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__data);
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
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_columns 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles) 
           << 3U);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__total_rows 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles) 
           << 3U);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_enable 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req) 
           & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_ack));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot 
        = (0x00000fffU & ((0x1000U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))
                           ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count)
                           : (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_right_x 
        = (0x00003fffU & ((((0x00002000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x) 
                                            << 1U)) 
                            | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x)) 
                           + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width)) 
                          - (IData)(1U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel) 
           & ((0x028fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount)) 
              & (0x017fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount))));
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_first = 0x017fU;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_last = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U])) {
        if ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[2U])) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed 
                = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_last))));
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
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x 
            = (0x00001fffU & ((0x000001ffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip[0U]) 
                              - (IData)(8U)));
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x = 0x000001efU;
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_data[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_data[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right))))) 
                   >> 0x00000020U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_data[2U] 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid) 
            << 0x00000010U) | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_flags));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__read_ack 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_ack) 
           | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_ack_pending));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                           >> 0x00000010U)) | (0x00000fffU 
                                               & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x00000011U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder 
        = ((0x0007fffeU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder 
                           << 1U)) | (1U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend 
                                            >> 0x11U)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient 
        = (0x0003fffeU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient 
                          << 1U));
    if ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder 
         >= (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder 
            = (0x0007ffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder 
                              - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient 
            = (1U | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient);
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_adjust_value 
        = (0x000003ffU & ((IData)(0x003fU) - (0x000001ffU 
                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[2U] 
        = (0x0001ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x = 0x01efU;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first = 0x017fU;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last = 0U;
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
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first 
                = (0x00001fffU & ((0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[1U] 
                                                  >> 0x00000010U)) 
                                  - (IData)(1U)));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last 
                = (0x00001fffU & ((IData)(1U) + (0x000001ffU 
                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip[0U] 
                                                    >> 0x00000010U))));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed 
                = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first)) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last))));
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 0U;
    if ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
          & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling))) 
         & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[0U] 
            == (0x000001ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 1U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 1U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[1U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 1U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 2U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 2U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[2U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 2U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 3U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 3U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[3U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 3U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 4U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 4U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[4U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 4U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 5U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 5U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[5U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 5U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 6U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 6U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[6U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 6U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid) 
           >> 7U) & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling) 
                        >> 7U))) & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[7U] 
                                    == (0x000001ffU 
                                        & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = 7U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = 1U;
    }
    if ((0x028fU == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr 
            = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank) 
               << 7U);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_lane = 0U;
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank) 
                << 7U) | (0x0000007fU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount) 
                                          >> 2U) + 
                                         ((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount)))
                                           ? 1U : 0U))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_lane 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount)));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a;
    if ((0U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x00000401U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x01f7017fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000401U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x00004402U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x01ef017fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000402U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0403U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30234062U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000403U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0404U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x3063405eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000404U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0405U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30e34056U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000405U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0406U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x3fe34066U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000406U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0407U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x31234052U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000407U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0408U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30a3405aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000408U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0409U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20772075U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000409U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f040aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20852075U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000040aU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f040bU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20932074U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000040bU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f040cU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20bd2071U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000040cU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f040dU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20cb2070U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000040dU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f040eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x2feb207eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000040eU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f040fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20312079U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000040fU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0410U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x203f2079U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000410U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0411U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x204d2078U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000411U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0412U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20692076U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000412U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0413U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20af2072U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000413U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0414U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x2007207cU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000414U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0415U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x2023207aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000415U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0416U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x2015207bU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000416U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0417U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x2ff9207dU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000417U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0418U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20d9206fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000418U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0419U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x20a12073U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000419U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f041aU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x205b2077U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000041aU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x0000441bU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x01ef013fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000041bU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f041cU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30fd306fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000041cU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x2000441dU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x01ef017fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000041dU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f041eU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x21b81170U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000041eU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f041fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x315830c0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x0000041fU == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0420U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x31583100U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000420U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0421U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x31583140U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000421U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0422U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30283140U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000422U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0423U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30683140U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000423U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0424U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30283100U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000424U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0425U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30683100U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000425U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0426U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x302810f0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000426U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0427U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x306810f0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000427U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0428U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x304830b0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000428U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x003f0429U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x08001000U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30480158U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000429U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0xffffffffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0xffffffffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0xffffffffU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0xffffffffU;
    } else if ((0x00000800U == (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x30303030U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x30303030U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x30303030U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0x30303030U;
    } else if ((0x00002000U <= (0x007fffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr 
                                               - (IData)(0x00400000U))))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0x11111111U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0x11111111U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0x11111111U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0x11111111U;
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U] = 0U;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U] = 0U;
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b;
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d2 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__6__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__Vfuncout 
        = (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__data[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d3 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__7__Vfuncout;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_base 
        = (0x00003fffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d3));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_index 
        = (7U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_base));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_hit 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid) 
            >> (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_index)) 
           & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags
              [vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_index] 
              == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_base)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
        = (0x0001fff0U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d2) 
                          << 4U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row) 
                          >> 3U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y 
        = (7U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_x 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column) 
                          >> 3U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_x 
        = (7U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column));
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipy) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y 
            = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
               ^ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_mask));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y 
            = (7U & ((IData)(7U) - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y)));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_row_offset 
        = ((4U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift))
            ? ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift))
                ? ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift))
                    ? (0x00003f80U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                                      << 7U)) : ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                                                 << 6U))
                : ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift))
                    ? ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                       << 5U) : ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                                 << 4U))) : ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                                                  << 3U)
                                                  : 
                                                 ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                                                  << 2U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y) 
                                                  << 1U)
                                                  : (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y))));
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_x 
            = (0x000000ffU & (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles) 
                               - (IData)(1U)) - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_x)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_x 
            = (7U & ((IData)(7U) - (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_x)));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal 
        = (0x00003fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_row_offset) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_x)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__word_calc 
        = (0x0003ffffU & (((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
                                          << 1U)) + 
                          (1U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_x) 
                                 >> 2U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word 
        = (0x0001ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__word_calc);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble 
        = (0x0000000cU & ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_x)) 
                          << 2U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag 
        = (0x00003fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word 
                          >> 3U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_lookup_tag;
    if ((0x00000010U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))) {
                        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag 
                            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag 
                        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_base;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index;
            }
        }
    }
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__index 
        = (7U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word);
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__9__Vfuncout;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_pen 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word) 
                          >> (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble)));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__pen 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_pen;
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__palette_entry__10__Vfuncout;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
        = ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color))
            ? 0U : ((1U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color))
                     ? 0x00012000U : (0x00011000U | 
                                      ((0x0000c000U 
                                        & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color) 
                                           << 8U)) 
                                       | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[0U] 
        = (7U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx)
                  ? ((IData)(7U) - vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0U])
                  : vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0U]));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[0U] 
        = (0x0001ffffU & (((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
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
        = (0x0001ffffU & (((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
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
        = (0x0001ffffU & (((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
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
        = (0x0001ffffU & (((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base 
                            + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal) 
                               << 4U)) + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y) 
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[3U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U] 
        = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[4U] 
            << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[3U] 
                               >> 0x00000011U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U] 
        = (0x0001ffffU & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[5U] 
                           << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[4U] 
                                              >> 0x00000011U)));
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos)));
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
    if ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_lane))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[0U];
    } else if ((1U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_lane))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[1U];
    } else if ((2U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_lane))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[2U];
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[3U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_sel 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[3U];
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_ack_pending) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_q[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_q[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_q[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[3U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_q[3U];
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[3U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data[3U];
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_hit 
        = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_valid
           [(0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag))] 
           & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag) 
              == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_tag
              [(0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag))]));
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys = 4U;
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
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (0U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
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
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (1U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
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
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (2U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
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
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U]);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank) 
                << 7U) | (0x0000007fU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3U] 
                                         >> 2U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U])))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3U] 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    } else if ((((((((((0x11U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                       & (3U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                      & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid)) 
                     & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag) 
                        == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag))) 
                    & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x))) 
                   & VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x))) 
                  & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                 & VL_GTS_III(32, 0x000001f0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x)))) 
                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                   >> 0x10U))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys 
            = (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[(3U 
                                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                     >> 0x0eU));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[(3U 
                                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
            = (((QData)((IData)((1U | ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation) 
                                       << 1U)))) << 0x00000019U) 
               | (QData)((IData)(((0x01ffc000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                  << 0x0000000eU)) 
                                  | (0x00003fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value)))));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))) 
                & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren)) 
               | (0x0fU & ((1U & ((0U == (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                >> 0x0eU)))
                                   ? ((~ (IData)((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                  >> 0x19U))) 
                                      | ((0x000000ffU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                     >> 0x1aU))) 
                                         != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                               >> 0x0eU)))
                                       ? ((~ (IData)(
                                                     (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                      [
                                                      (3U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                      >> 0x19U))) 
                                          | ((0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q
                                                         [
                                                         (3U 
                                                          & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                         >> 0x1aU))) 
                                             != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value 
                                                     >> 0x0eU)))
                                           ? ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation)))
                                           : ((~ (IData)(
                                                         (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                          [
                                                          (3U 
                                                           & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                          >> 0x19U))) 
                                              | ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q
                                                             [
                                                             (3U 
                                                              & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys)] 
                                                             >> 0x1aU))) 
                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation))))))) 
                           << (3U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys))));
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren = 0x0fU;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U] = 0ULL;
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys = 4U;
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
        if ((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot))) {
            __Vtemp_8[0U] = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U] 
                                                 >> 0x00000011U));
            __Vtemp_8[1U] = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[3U] 
                                                 >> 0x00000011U));
            __Vtemp_8[2U] = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[5U] 
                              << 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[4U] 
                                                 >> 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
        } else {
            __Vtemp_8[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[0U];
            __Vtemp_8[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[1U];
            __Vtemp_8[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[3U];
        }
    } else {
        __Vtemp_8[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[0U];
        __Vtemp_8[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[1U];
        __Vtemp_8[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[0U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[1U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[2U];
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
            = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[3U];
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U] 
        = (0x0001ffffU & __Vtemp_8[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid 
        = ((~ (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot)) 
           & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid 
        = ((0U == (3U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot))) 
           & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
              < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_enable 
        = ((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__read_ack) 
             & (3U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) 
            & (0U == (0x0000c000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U]))) 
           & (~ ((0U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index)) 
                 & (0U == (0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U])))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y 
        = ((0x00001000U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
                           << 1U)) | (0x00000fffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U]));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance 
        = ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid)
            ? 4U : ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid)
                     ? 2U : 1U));
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__Vfuncout 
        = (__Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__data[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__21__Vfuncout;
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U];
    __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__data[2U]);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__22__Vfuncout;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4) 
                                                                    >> 0x0cU))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height 
        = (0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum 
                          >> 6U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y 
        = ((0x00001000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4) 
                           << 1U)) | (0x00000fffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y)) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U])) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U])
                ? ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active 
        = (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y)));
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1 
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__24__Vfuncout;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4) 
                                                                    >> 0x0cU))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height 
        = (0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum 
                          >> 6U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y 
        = ((0x00001000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4) 
                           << 1U)) | (0x00000fffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y)) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U])) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[2U])
                ? ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed) 
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
                : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active 
        = (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid)) 
             & ((0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y)));
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1 
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__26__Vfuncout;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4) 
                                                                    >> 0x0cU))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height 
        = (0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum 
                          >> 6U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y 
        = ((0x00001000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4) 
                           << 1U)) | (0x00000fffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y)) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U])) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U])
                ? ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed) 
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
                : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active 
        = (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(2U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y)));
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1 
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4 
        = __Vfunc_tb_sprite_crkdown_list__DOT__dut__DOT__burst_word__28__Vfuncout;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step 
        = ((0U == (0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1)))
            ? 0x00000040U : (0x000001ffU & ((IData)(1U) 
                                            + (0x000000ffU 
                                               & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1)))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum 
        = (0x000fffffU & ((IData)(0x00000020U) + VL_SHIFTL_III(20,20,32, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4) 
                                                                    >> 0x0cU))))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height 
        = (0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum 
                          >> 6U));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y 
        = ((0x00001000U & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4) 
                           << 1U)) | (0x00000fffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y)) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed 
        = (0x0180U > (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y));
    if ((0x00010000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U])) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed 
            = ((0x00002000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U])
                ? ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed) 
                   & (VL_LTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                  (0x00001fffU & ((0x000001ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U] 
                                                      >> 0x00000010U)) 
                                                  - (IData)(1U)))) 
                      | VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), 
                                    (0x00001fffU & 
                                     ((IData)(1U) + 
                                      (0x000001ffU 
                                       & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U] 
                                          >> 0x00000010U)))))))
                : (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed) 
                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                       >= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U] 
                                          >> 0x00000010U)))) 
                   & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y) 
                      <= (0x000001ffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U] 
                                         >> 0x00000010U)))));
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active 
        = (((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed) 
              & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid)) 
             & ((0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos))) 
                < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count))) 
            & VL_GTES_III(13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y))) 
           & VL_LTS_III(14, (0x00003fffU & VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y))), (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U];
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
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U];
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
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[0U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[1U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3[2U];
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[0U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[1U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[2U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[3U] 
        = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] = 0U;
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] = 0U;
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
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen = 0U;
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[0U]) {
        if ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][2U];
        } else if (VL_GTS_III(32, 4U, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0U][2U];
            }
        }
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[1U]) {
        if ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][2U];
        } else if (VL_GTS_III(32, 4U, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1U][2U];
            }
        }
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[2U]) {
        if ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][2U];
        } else if (VL_GTS_III(32, 4U, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2U][2U];
            }
        }
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[3U]) {
        if ((0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][2U];
        } else if (VL_GTS_III(32, 4U, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen)) {
            if ((2U >= (3U & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                              - (IData)(1U))))) {
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][2U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][3U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3U][3U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][0U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][0U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][1U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][1U];
                vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[(3U 
                                                                                & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
                                                                                - (IData)(1U)))][2U] 
                    = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3U][2U];
            }
        }
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen 
            = ((IData)(1U) + vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    }
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count 
        = (7U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen);
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y 
        = (0x00003fffU & (VL_EXTENDS_II(14,13, (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y)) 
                          + (0x00001fffU & (((IData)(0x00000020U) 
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
                                            >> 6U))));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance)));
    vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance) 
                          + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot)));
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
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    << 0x00000011U) | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip[2U]);
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[0U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[1U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[2U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor[3U] 
                   >> 0x0000000fU);
        } else if (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active) {
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable = 1U;
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[0U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[0U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[1U] 
                = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[1U];
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[2U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                    << 0x00000011U) | vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q[2U]);
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[3U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[0U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[4U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[1U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[5U] 
                = ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[2U] 
                    >> 0x0000000fU) | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
                                       << 0x00000011U));
            vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data[6U] 
                = (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q[3U] 
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
            = (0x000007ffU & ((IData)(1U) + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot) 
                              >> 1U));
    } else if ((((5U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                 | (6U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))) 
                | (7U == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))) {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & ((IData)(1U) + ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot) 
                                             >> 1U)));
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot) 
                              >> 1U));
    } else {
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2 
            = (0x000007ffU & 0U);
        vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair 
            = (0x000007ffU & 0U);
    }
}

VL_ATTR_COLD bool Vtb_sprite_crkdown_list___024root___eval_phase__stl(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___eval_phase__stl\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_sprite_crkdown_list___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_sprite_crkdown_list___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_sprite_crkdown_list___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_sprite_crkdown_list___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sprite_crkdown_list___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sprite_crkdown_list___024root___ctor_var_reset(Vtb_sprite_crkdown_list___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root___ctor_var_reset\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->tb_sprite_crkdown_list__DOT__pixel0 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3600825966561766993ull);
    vlSelf->tb_sprite_crkdown_list__DOT__pixel1 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18257012593368089647ull);
    vlSelf->tb_sprite_crkdown_list__DOT__pixel2 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12895259207573037282ull);
    vlSelf->tb_sprite_crkdown_list__DOT__pixel3 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16031145329793016143ull);
    vlSelf->tb_sprite_crkdown_list__DOT__rank0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12524802315936811642ull);
    vlSelf->tb_sprite_crkdown_list__DOT__rank1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4541972223998522315ull);
    vlSelf->tb_sprite_crkdown_list__DOT__rank2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16576339791454551910ull);
    vlSelf->tb_sprite_crkdown_list__DOT__rank3 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7929303120969124446ull);
    vlSelf->tb_sprite_crkdown_list__DOT__mem_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13845960187385897781ull);
    vlSelf->tb_sprite_crkdown_list__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16375706896534526660ull);
    vlSelf->tb_sprite_crkdown_list__DOT__seen_target = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8325778647307188968ull);
    vlSelf->tb_sprite_crkdown_list__DOT__walked_target = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2455576934073792347ull);
    for (int __Vi0 = 0; __Vi0 < 384; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__drawn_at[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8015902326330322992ull);
    }
    for (int __Vi0 = 0; __Vi0 < 384; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__walked_at[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1344579188683066025ull);
    }
    for (int __Vi0 = 0; __Vi0 < 384; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__filled_at[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15868043838474530033ull);
    }
    for (int __Vi0 = 0; __Vi0 < 384; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__missed_deadline_at[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8506722647476615742ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__init_line = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15127788544048089723ull);
    vlSelf->tb_sprite_crkdown_list__DOT__ln = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4730053427388973962ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(1, __VscopeHash, 8390420005755303892ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9737433407504500594ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16287519954918011719ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14088547921402048399ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_lookup_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7097503309039203514ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_q, __VscopeHash, 13084390535297934758ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13508333407553018434ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__cache_ack_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14690393959657302030ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__read_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1984190059627082964ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_init = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10861419961545107287ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1883416989422336638ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5771962145017405750ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5803515424637279694ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11569578651447167268ull);
    }
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q, __VscopeHash, 3138640164642614991ull);
    VL_SCOPED_RAND_RESET_W(162, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q, __VscopeHash, 6872061060576101909ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12096326933542737531ull);
    VL_SCOPED_RAND_RESET_W(209, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q, __VscopeHash, 14383473938324758723ull);
    VL_SCOPED_RAND_RESET_W(209, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data, __VscopeHash, 5576671606046526154ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4041381628000410261ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor, __VscopeHash, 6430874657867684585ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip, __VscopeHash, 6277827201265953676ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15644957259195789311ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__display_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7636382474971970182ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17805552408481812667ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12595152770895029338ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16554097858821945265ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3693614130125640348ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10522548306865014158ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6031861067170747508ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7636223663070608822ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 698209357538447135ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2980447352255555761ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1541232957741261814ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11443721152527195190ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1016039034128399418ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18406855239002283051ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_sel = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16480578800635958637ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_sel = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 221975206616134642ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_sel = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14690906448279263447ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_sel = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18153339254066380533ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__display_lane = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9969580410243980966ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 807357918036796236ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16049814113173108449ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7351053524171547747ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__target_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11894293057217366444ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8312853845656310001ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15449255801007174006ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16967714404211719861ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2398483687636178769ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12248971866978127063ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1132481971751243518ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__reclaim_scan = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14955720643025202983ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__list_index = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 946175922951611509ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__list_seen = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15965115420538185945ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6145333640210179735ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8845662927480535815ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 948214599510943434ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6028285094575289340ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_flags = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7922561294075554664ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7108924106795889430ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16436829563603118960ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2893208018404245625ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17155559112221291406ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9559714139750008293ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__stack_count = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 917070269199388003ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__render_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11978518341041096343ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__stack_head = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1984774437960441946ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11894140358600017557ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q, __VscopeHash, 3914185754616954659ull);
    VL_SCOPED_RAND_RESET_W(162, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q, __VscopeHash, 7260734966263873722ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q, __VscopeHash, 18393699688454819146ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q, __VscopeHash, 4584357856136282594ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1, __VscopeHash, 5803729219870269340ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor, __VscopeHash, 8138552061413034628ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip, __VscopeHash, 9864775400356443650ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__render_clip, __VscopeHash, 9741887069690739946ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor, __VscopeHash, 9246712596004777032ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__palette_table, __VscopeHash, 9466815320115157614ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__data_cache, __VscopeHash, 14449796226620873233ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data[__Vi0], __VscopeHash, 4864739377631293986ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1625698817674597474ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9284071004019156760ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9413365905342177492ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2739870505114493038ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6063061988193305333ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1283772153836567181ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14086631267394105171ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2287080838151051573ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1293268282593468443ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2957257549250797368ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13334148926263764208ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9802958510024823196ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1893633388132760424ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5301748513541848847ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14200809780263047941ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_phys = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2169339943982108505ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6143680605502890102ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4412771703917624891ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__x_accum = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16054342776671330438ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__y_accum = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18355629149273086098ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__emit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10747567139818203370ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__source_row = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4373892731270758882ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__source_column = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12106572468392303278ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__total_rows = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12434873071368603897ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__total_columns = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4055737417475129993ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__dest_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12782348446473078733ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__dest_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13334495679400230649ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__flipx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7552846480489211232ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__flipy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3238680417875601834ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11691367451425348598ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4559422452276650509ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9445759935175814202ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__size_y_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7223071796675152570ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5095612805545390028ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16765515797204032795ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__current_pen = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14963135934597307540ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16990658466636759453ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_value = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13769709457761579681ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15720284472803354575ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15541957787749857125ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1129616301968982973ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_first = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4132384783382693087ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_last = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 489828633202031985ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7207460055218397570ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5385379552019403242ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_right_x = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5703544878453210264ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__d2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6757184022181423293ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__d3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17246768579988117964ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__palette_base = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1560276808738879518ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__tile_base = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2811783302661224492ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__tile_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8104413163492976536ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__tile_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2405875168434032005ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__within_x = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18072960829345077087ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__within_y = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13849521075170383716ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__word_calc = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16643181174071635229ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__tile_row_offset = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2063882763179236481ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1420995661520922353ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16423279403224388846ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14289280955622459815ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__x_sum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5467612754301480022ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__y_sum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3442615677073732130ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12207106285647793479ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12551698484039192456ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14180576736414273441ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7077925140373954235ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4883028193142014233ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 4686357497737195020ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 16935056511198367655ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18303671431550920868ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10097324644367665919ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16547960727751595902ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 14983776162204104766ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 134911239775207670ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_adjust_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9580930302549042527ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_target_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8078275833794676520ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11744912268642123538ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_count = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2435014028491281475ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14063940179955913440ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13896647867395515335ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3610222582763791291ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12961986338960577296ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15073503071628912931ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6545436100765808044ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17932527564566770615ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10069637402133920340ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16651451279879540619ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7428635870526736971ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8189041286862348094ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_height = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13749869990567720408ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8134747175786564204ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2923138654678960373ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1257216021372761643ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11862062811281957103ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15113442724186196129ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10517102823556180386ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3327403155917164957ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9574144742184482658ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2961415800998249282ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15220073434133732985ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 21595210242977302ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3, __VscopeHash, 9606411391133836384ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3734194181210365877ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3870392281860589208ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2699539852194328045ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 234453252136509396ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2458652694425853490ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9182192538496957923ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7768634338871653831ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5783480657351378311ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10256105969898217192ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12417324342919389848ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13258248460827634895ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14174074867779377419ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8817401502222879450ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 127340859821237647ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12430458849124186640ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1089696578750642060ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9321302533215026271ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11943625312603708013ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11808882256737240330ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16687585458204567560ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12424946548071581514ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3077455473900882296ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18288778299855715738ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11154575140679266355ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17982982457225914786ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4794997204120801156ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7649172850948779050ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor, __VscopeHash, 9893338347639456200ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip, __VscopeHash, 3668258144846458692ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor[__Vi0], __VscopeHash, 4192376871631307647ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip[__Vi0], __VscopeHash, 5936343962534432620ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[__Vi0], __VscopeHash, 16953307607366596731ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[__Vi0], __VscopeHash, 262911751359517740ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[__Vi0], __VscopeHash, 9228207981682393604ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[__Vi0], __VscopeHash, 5126521264955063922ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3784646758004646265ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8287147201666607090ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14610772968276457054ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_right_x = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11578474735047622218ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13626629799385934067ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 180311735566873657ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16225798086718961708ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5762081067973902311ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14245318171793800723ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary, __VscopeHash, 11655206555500279051ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13108848710675390421ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4809299788517649651ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8940476039754229888ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1115368401445699270ull);
    }
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b = 0;
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10697065736056412611ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10638096320977265036ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7201652195418805741ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__3__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8350506649046345518ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3949082581902487902ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12306674426831000486ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3300329068296657581ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__2__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2326129278748411980ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16382401726241763314ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17101890370365963231ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6045282586150880613ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__1__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6977072231915430002ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line3_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9205105639437860304ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line2_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6818841952498677663ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line1_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10556508046055932278ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__gen_line_lane__BRA__0__KET____DOT__line0_ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9265244334772995894ull);
    }
    VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_data, __VscopeHash, 3049232019939962382ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9003462957599292431ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_lo[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 16405726252058346187ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__mem_hi[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 15205001299866030474ull);
    }
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data, __VscopeHash, 18100647462064021696ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_lo[__Vi0], __VscopeHash, 545475031695613876ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__mem_hi[__Vi0], __VscopeHash, 9282969016864542637ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_lo[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 10344222729572875059ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram__DOT__mem_hi[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 10441185343694003143ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_lo[__Vi0], __VscopeHash, 5961186096754067354ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram__DOT__mem_hi[__Vi0], __VscopeHash, 7414783163262968582ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(119, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_ram__DOT__mem[__Vi0], __VscopeHash, 15900271352748069140ull);
    }
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data, __VscopeHash, 16134467214685091711ull);
    vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8844149469031070960ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__mem[__Vi0], __VscopeHash, 17104151324676687253ull);
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
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

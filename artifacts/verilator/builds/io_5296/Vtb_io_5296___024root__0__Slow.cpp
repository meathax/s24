// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_io_5296.h for the primary calling header

#include "Vtb_io_5296__pch.h"

void Vtb_io_5296___024root___timing_ready(Vtb_io_5296___024root* vlSelf);

VL_ATTR_COLD void Vtb_io_5296___024root___eval_static(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_static\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_io_5296__DOT__clk = 0U;
        vlSelfRef.tb_io_5296__DOT__reset = 1U;
        vlSelfRef.tb_io_5296__DOT__wr = 0U;
        vlSelfRef.tb_io_5296__DOT__addr = 0U;
        vlSelfRef.tb_io_5296__DOT__din = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0 = 0U;
    Vtb_io_5296___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_io_5296___024root___eval_final(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_final\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_io_5296___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_io_5296___024root___eval_phase__stl(Vtb_io_5296___024root* vlSelf);

VL_ATTR_COLD void Vtb_io_5296___024root___eval_settle(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_settle\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_io_5296___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verif\\tb_io_5296.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_io_5296___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_io_5296___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_io_5296___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_io_5296___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_io_5296___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___trigger_anySet__stl\n"); );
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

void Vtb_io_5296___024root___act_comb__TOP__0(Vtb_io_5296___024root* vlSelf);

VL_ATTR_COLD bool Vtb_io_5296___024root___eval_phase__stl(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_phase__stl\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_io_5296___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_io_5296___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_io_5296___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_io_5296___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_io_5296___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_io_5296___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_io_5296.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_io_5296.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_io_5296___024root___ctor_var_reset(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___ctor_var_reset\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_io_5296__DOT__dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3972437028152507953ull);
    vlSelf->tb_io_5296__DOT__port_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15595967603198295594ull);
    vlSelf->tb_io_5296__DOT__port_dir = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4004934271383716633ull);
    vlSelf->tb_io_5296__DOT__port_write = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7917193137044452874ull);
    vlSelf->tb_io_5296__DOT__cnt2_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7888775634603534649ull);
    vlSelf->tb_io_5296__DOT__ckot_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13675905191706226433ull);
    vlSelf->tb_io_5296__DOT__mahjong_line = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10996292010938548312ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_io_5296__DOT__dut__DOT__latch[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14264022062943992347ull);
    }
    vlSelf->tb_io_5296__DOT__dut__DOT__cnt_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12663732800160184178ull);
    vlSelf->tb_io_5296__DOT__dut__DOT__cnt2_div_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13311793177593663915ull);
    vlSelf->tb_io_5296__DOT__dut__DOT__ckot_div_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6648574480068625416ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

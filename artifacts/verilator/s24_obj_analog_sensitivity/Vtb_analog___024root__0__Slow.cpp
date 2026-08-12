// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_analog.h for the primary calling header

#include "Vtb_analog__pch.h"

void Vtb_analog___024root___timing_ready(Vtb_analog___024root* vlSelf);

VL_ATTR_COLD void Vtb_analog___024root___eval_static(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_static\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_analog__DOT__clk = 0U;
        vlSelfRef.tb_analog__DOT__reset = 1U;
        vlSelfRef.tb_analog__DOT__sx = 0U;
        vlSelfRef.tb_analog__DOT__uaddr = 0U;
        vlSelfRef.tb_analog__DOT__select = 0U;
        vlSelfRef.tb_analog__DOT__shift = 0U;
        vlSelfRef.tb_analog__DOT__din = 0U;
        vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
        vlSelfRef.tb_analog__DOT__stick_x = 0U;
        vlSelfRef.tb_analog__DOT__digital_left = 0U;
        vlSelfRef.tb_analog__DOT__digital_right = 0U;
        vlSelfRef.tb_analog__DOT__analogue_profile = 0U;
        vlSelfRef.tb_analog__DOT__stick_enable = 1U;
        vlSelfRef.tb_analog__DOT__stick_sensitivity = 1U;
        vlSelfRef.tb_analog__DOT__wheel_spinner = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_analog__DOT__clk__0 = 0U;
    Vtb_analog___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_analog___024root___eval_final(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_final\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_analog___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_analog___024root___eval_phase__stl(Vtb_analog___024root* vlSelf);

VL_ATTR_COLD void Vtb_analog___024root___eval_settle(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_settle\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_analog___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_analog___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_analog___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_analog___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_analog___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_analog___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___trigger_anySet__stl\n"); );
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

void Vtb_analog___024root___act_comb__TOP__0(Vtb_analog___024root* vlSelf);

VL_ATTR_COLD bool Vtb_analog___024root___eval_phase__stl(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_phase__stl\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_analog___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_analog___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_analog___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_analog___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_analog___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_analog___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_analog.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_analog___024root___ctor_var_reset(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___ctor_var_reset\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_analog__DOT__udout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14078799047674487688ull);
    vlSelf->tb_analog__DOT__wheel_out = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2801473671359591496ull);
    vlSelf->tb_analog__DOT__wheel__DOT__stick_abs = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15248810096496800156ull);
    vlSelf->tb_analog__DOT__wheel__DOT__stick_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16629594958037461345ull);
    vlSelf->tb_analog__DOT__wheel__DOT__rough_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2357364206457621371ull);
    vlSelf->tb_analog__DOT__wheel__DOT__rough_accum = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7336680396714371914ull);
    vlSelf->tb_analog__DOT__wheel__DOT__rough_step = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12834726851034853136ull);
    vlSelf->tb_analog__DOT__wheel__DOT__steering_step = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11466710595566441884ull);
    vlSelf->tb_analog__DOT__wheel__DOT__stick_toggle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12247098038769924002ull);
    vlSelf->tb_analog__DOT__wheel__DOT__hw_toggle_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10968076566381764795ull);
    vlSelf->tb_analog__DOT__wheel__DOT__stick_toggle_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17672737124240752811ull);
    vlSelf->tb_analog__DOT__adc__DOT__shifter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2509115816495312800ull);
    vlSelf->tb_analog__DOT__upd__DOT__count_x = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 287181978227038813ull);
    vlSelf->tb_analog__DOT__upd__DOT__count_y = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15621258158110714058ull);
    vlSelf->tb_analog__DOT__upd__DOT__toggle_x_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15745027192687706635ull);
    vlSelf->tb_analog__DOT__upd__DOT__toggle_y_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17467225739323455656ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_analog__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

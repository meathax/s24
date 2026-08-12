// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fdc.h for the primary calling header

#include "Vtb_fdc__pch.h"

void Vtb_fdc___024root___timing_ready(Vtb_fdc___024root* vlSelf);

VL_ATTR_COLD void Vtb_fdc___024root___eval_static(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_static\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_fdc__DOT__clk = 0U;
        vlSelfRef.tb_fdc__DOT__reset = 1U;
        vlSelfRef.tb_fdc__DOT__index_pulse = 0U;
        vlSelfRef.tb_fdc__DOT__track_size = 0U;
        vlSelfRef.tb_fdc__DOT__bus_rd = 0U;
        vlSelfRef.tb_fdc__DOT__bus_wr = 0U;
        vlSelfRef.tb_fdc__DOT__bus_addr = 0U;
        vlSelfRef.tb_fdc__DOT__bus_din = 0U;
        vlSelfRef.tb_fdc__DOT__media_ack = 0U;
        vlSelfRef.tb_fdc__DOT__stretch_ack = 0U;
        vlSelfRef.tb_fdc__DOT__media_rdata = 0U;
        vlSelfRef.tb_fdc__DOT__requests = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0 = 0U;
    Vtb_fdc___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_fdc___024root___eval_final(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_final\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fdc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fdc___024root___eval_phase__stl(Vtb_fdc___024root* vlSelf);

VL_ATTR_COLD void Vtb_fdc___024root___eval_settle(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_settle\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fdc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("artifacts/verilator/fdc_prefetch\\tb_fdc.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_fdc___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_fdc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fdc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fdc___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fdc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___trigger_anySet__stl\n"); );
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

void Vtb_fdc___024root___act_comb__TOP__0(Vtb_fdc___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fdc___024root___eval_phase__stl(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___eval_phase__stl\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_fdc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_fdc___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_fdc___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_fdc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fdc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fdc___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_fdc.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_fdc.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fdc___024root___ctor_var_reset(Vtb_fdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fdc___024root___ctor_var_reset\n"); );
    Vtb_fdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fdc__DOT__bus_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5143717936367894688ull);
    vlSelf->tb_fdc__DOT__bus_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9907875786934715533ull);
    vlSelf->tb_fdc__DOT__media_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6252664500633414530ull);
    vlSelf->tb_fdc__DOT__media_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3481578199288055316ull);
    vlSelf->tb_fdc__DOT__media_addr = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 5335231494362030799ull);
    vlSelf->tb_fdc__DOT__media_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 208627699724053661ull);
    for (int __Vi0 = 0; __Vi0 < 23040; ++__Vi0) {
        vlSelf->tb_fdc__DOT__media[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14729143198513445697ull);
    }
    vlSelf->tb_fdc__DOT__dut__DOT__mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1851401960101993134ull);
    vlSelf->tb_fdc__DOT__dut__DOT__status = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4207919873032635796ull);
    vlSelf->tb_fdc__DOT__dut__DOT__track = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 530367333910505149ull);
    vlSelf->tb_fdc__DOT__dut__DOT__sector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9712974137568835277ull);
    vlSelf->tb_fdc__DOT__dut__DOT__data_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5760617616834805914ull);
    vlSelf->tb_fdc__DOT__dut__DOT__physical_track = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8722021071769154212ull);
    vlSelf->tb_fdc__DOT__dut__DOT__irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1842015065250273157ull);
    vlSelf->tb_fdc__DOT__dut__DOT__drq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12719855106414689574ull);
    vlSelf->tb_fdc__DOT__dut__DOT__span = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13637906963185705026ull);
    vlSelf->tb_fdc__DOT__dut__DOT__position = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17943999520318094970ull);
    vlSelf->tb_fdc__DOT__dut__DOT__track_base = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 4411760513719029187ull);
    vlSelf->tb_fdc__DOT__dut__DOT__bus_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5528764249005111752ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_fdc__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

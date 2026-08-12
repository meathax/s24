// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_analog.h for the primary calling header

#include "Vtb_analog__pch.h"

VlCoroutine Vtb_analog___024root___eval_initial__TOP__Vtiming__0(Vtb_analog___024root* vlSelf);
VlCoroutine Vtb_analog___024root___eval_initial__TOP__Vtiming__1(Vtb_analog___024root* vlSelf);

void Vtb_analog___024root___eval_initial(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_initial\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_analog___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_analog___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(Vtb_analog___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_analog___024root___eval_initial__TOP__Vtiming__0(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_analog__DOT__saved_toggle;
    tb_analog__DOT__saved_toggle = 0;
    IData/*31:0*/ tb_analog__DOT__unnamedblk1__DOT__code;
    tb_analog__DOT__unnamedblk1__DOT__code = 0;
    IData/*31:0*/ tb_analog__DOT__unnamedblk2__DOT__code;
    tb_analog__DOT__unnamedblk2__DOT__code = 0;
    IData/*31:0*/ tb_analog__DOT__unnamedblk3__DOT__response;
    tb_analog__DOT__unnamedblk3__DOT__response = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__12__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__12__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__12__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__12__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__12__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__12__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__15__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__15__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__15__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__15__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__15__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__15__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__18__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__18__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__18__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__18__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__18__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__18__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__21__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__21__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__21__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__21__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__21__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__21__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__24__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__24__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__24__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__24__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__24__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__24__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__27__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__27__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__27__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__27__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__27__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__27__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__30__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__30__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__30__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__30__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__30__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__30__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__33__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__33__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__33__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__33__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__33__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__33__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__36__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__36__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__36__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__36__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__36__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__36__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__39__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__39__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__39__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__39__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__39__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__39__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__43__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__43__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__43__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__43__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__43__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__43__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__46__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__46__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__46__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__46__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__46__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__46__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__49__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__49__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__49__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__49__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__49__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__49__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__52__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__52__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__52__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__52__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__52__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__52__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__55__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__55__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__55__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__55__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__55__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__55__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__59__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__59__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__59__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__59__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__59__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__59__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__62__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__62__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__62__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__62__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__62__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__62__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__65__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__65__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__65__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__65__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__65__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__65__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__68__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__68__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__68__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__68__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__68__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__68__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__71__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__71__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__71__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__71__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__71__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__71__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__74__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__74__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__74__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__74__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__74__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__74__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__77__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__77__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__77__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__77__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__77__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__77__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__80__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__80__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__80__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__80__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__80__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__80__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__83__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__83__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__83__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__83__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__83__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__83__old_toggle = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__86__ticks;
    __Vtask_tb_analog__DOT__collect_wheel__86__ticks = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__86__total;
    __Vtask_tb_analog__DOT__collect_wheel__86__total = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__86__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_analog__DOT__collect_wheel__86__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__collect_wheel__86__old_toggle;
    __Vtask_tb_analog__DOT__collect_wheel__86__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__89__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__89__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__89__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__89__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__89__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__89__old_toggle = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__92__ticks;
    __Vtask_tb_analog__DOT__collect_wheel__92__ticks = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__92__total;
    __Vtask_tb_analog__DOT__collect_wheel__92__total = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__92__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_analog__DOT__collect_wheel__92__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__collect_wheel__92__old_toggle;
    __Vtask_tb_analog__DOT__collect_wheel__92__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__96__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__96__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__96__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__96__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__96__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__96__old_toggle = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__99__ticks;
    __Vtask_tb_analog__DOT__collect_wheel__99__ticks = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__99__total;
    __Vtask_tb_analog__DOT__collect_wheel__99__total = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__99__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_analog__DOT__collect_wheel__99__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__collect_wheel__99__old_toggle;
    __Vtask_tb_analog__DOT__collect_wheel__99__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__102__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__102__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__102__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__102__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__102__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__102__old_toggle = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__105__ticks;
    __Vtask_tb_analog__DOT__collect_wheel__105__ticks = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__105__total;
    __Vtask_tb_analog__DOT__collect_wheel__105__total = 0;
    IData/*31:0*/ __Vtask_tb_analog__DOT__collect_wheel__105__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_analog__DOT__collect_wheel__105__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__collect_wheel__105__old_toggle;
    __Vtask_tb_analog__DOT__collect_wheel__105__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__108__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__108__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__108__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__108__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__108__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__108__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__111__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__111__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__111__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__111__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__111__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__111__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__114__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__114__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__114__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__114__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__114__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__114__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__117__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__117__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__117__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__117__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__117__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__117__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__120__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__120__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__120__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__120__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__120__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__120__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__123__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__123__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__123__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__123__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__123__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__123__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__126__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__126__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__126__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__126__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__126__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__126__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__129__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__129__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__129__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__129__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__129__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__129__old_toggle = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__132__expect_event;
    __Vtask_tb_analog__DOT__wheel_event__132__expect_event = 0;
    CData/*7:0*/ __Vtask_tb_analog__DOT__wheel_event__132__expect_delta;
    __Vtask_tb_analog__DOT__wheel_event__132__expect_delta = 0;
    CData/*0:0*/ __Vtask_tb_analog__DOT__wheel_event__132__old_toggle;
    __Vtask_tb_analog__DOT__wheel_event__132__old_toggle = 0;
    // Body
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__reset = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__sx = 0x0105U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__uread = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__uread = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         93);
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_analog__DOT__udout))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:94: Assertion failed in %m: uPD4701 +delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(vlSelfRef.tb_analog__DOT__udout));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 94, "", false);
    }
    vlSelfRef.tb_analog__DOT__sx = 0x00feU;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__uaddr = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         98);
    vlSelfRef.tb_analog__DOT__uaddr = 0U;
    vlSelfRef.tb_analog__DOT__uread = 1U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_analog__DOT__udout))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:99: Assertion failed in %m: uPD4701 latched high nibble mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(vlSelfRef.tb_analog__DOT__udout));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 99, "", false);
    }
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__uread = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         100);
    if (VL_UNLIKELY(((3U != (IData)(vlSelfRef.tb_analog__DOT__udout))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:101: Assertion failed in %m: uPD4701 -delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(vlSelfRef.tb_analog__DOT__udout));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 101, "", false);
    }
    vlSelfRef.tb_analog__DOT__sx = 0x0104U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__uaddr = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         103);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_analog__DOT__udout))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:104: Assertion failed in %m: uPD4701 high byte moved with no read latch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(vlSelfRef.tb_analog__DOT__udout));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 104, "", false);
    }
    tb_analog__DOT__saved_toggle = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                          >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_spinner = 0x0106U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                              >> 8U)) == (IData)(tb_analog__DOT__saved_toggle)) 
                      | (6U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:110: Assertion failed in %m: native spinner positive delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 110, "", false);
    }
    tb_analog__DOT__saved_toggle = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                          >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_spinner = 0x00fdU;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                              >> 8U)) == (IData)(tb_analog__DOT__saved_toggle)) 
                      | (0xfdU != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:113: Assertion failed in %m: native spinner negative delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 113, "", false);
    }
    vlSelfRef.tb_analog__DOT__hotrod_io = 1U;
    vlSelfRef.tb_analog__DOT__pedal_button1 = 0x0fU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         117);
    if (VL_UNLIKELY(((0xffffffffU != ((((IData)(vlSelfRef.tb_analog__DOT__pedal_out3) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSelfRef.tb_analog__DOT__pedal_out2) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSelfRef.tb_analog__DOT__pedal_out1) 
                                          << 8U) | (IData)(vlSelfRef.tb_analog__DOT__pedal_out0))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:119: Assertion failed in %m: Hot Rod pedal Button 1 full-scale merge mismatch\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 119, "", false);
    }
    vlSelfRef.tb_analog__DOT__pedal_button1 = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         120);
    if (VL_UNLIKELY(((0x78ff34ffU != ((((IData)(vlSelfRef.tb_analog__DOT__pedal_out3) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSelfRef.tb_analog__DOT__pedal_out2) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSelfRef.tb_analog__DOT__pedal_out1) 
                                          << 8U) | (IData)(vlSelfRef.tb_analog__DOT__pedal_out0))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:122: Assertion failed in %m: Hot Rod per-player pedal merge mismatch\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 122, "", false);
    }
    vlSelfRef.tb_analog__DOT__hotrod_io = 0U;
    vlSelfRef.tb_analog__DOT__pedal_button1 = 0x0fU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         123);
    if (VL_UNLIKELY(((0x78563412U != ((((IData)(vlSelfRef.tb_analog__DOT__pedal_out3) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSelfRef.tb_analog__DOT__pedal_out2) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSelfRef.tb_analog__DOT__pedal_out1) 
                                          << 8U) | (IData)(vlSelfRef.tb_analog__DOT__pedal_out0))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:125: Assertion failed in %m: non-Hot Rod pedal mapping changed by Button 1\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 125, "", false);
    }
    vlSelfRef.tb_analog__DOT__din = 2U;
    vlSelfRef.tb_analog__DOT__select = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__select = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         128);
    vlSelfRef.tb_analog__DOT__shift = 1U;
    if (VL_UNLIKELY(((0x80U != (0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:129: Assertion failed in %m: MSM6253 bit7 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 129, "", false);
    }
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__shift = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         130);
    if (VL_UNLIKELY(((0U != (0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:131: Assertion failed in %m: MSM6253 bit6 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 131, "", false);
    }
    vlSelfRef.tb_analog__DOT__shift = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__shift = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         132);
    if (VL_UNLIKELY(((0x80U != (0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:133: Assertion failed in %m: MSM6253 bit5 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 133, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 1U;
    __Vtask_tb_analog__DOT__wheel_event__12__expect_delta = 0xf9U;
    __Vtask_tb_analog__DOT__wheel_event__12__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__12__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__12__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__12__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__12__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__12__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__12__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__12__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__12__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 0U;
    vlSelfRef.tb_analog__DOT__digital_right = 1U;
    __Vtask_tb_analog__DOT__wheel_event__15__expect_delta = 7U;
    __Vtask_tb_analog__DOT__wheel_event__15__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__15__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__15__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__15__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__15__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__15__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__15__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__15__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__15__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_right = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x0bU;
    __Vtask_tb_analog__DOT__wheel_event__18__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__18__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__18__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__18__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__18__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__18__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__18__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__18__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__18__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__18__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_x = 0x0cU;
    __Vtask_tb_analog__DOT__wheel_event__21__expect_delta = 1U;
    __Vtask_tb_analog__DOT__wheel_event__21__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__21__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__21__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__21__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__21__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__21__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__21__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__21__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__21__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_x = 8U;
    __Vtask_tb_analog__DOT__wheel_event__24__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__24__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__24__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__24__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__24__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__24__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__24__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__24__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__24__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__24__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 1U;
    vlSelfRef.tb_analog__DOT__digital_right = 1U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    __Vtask_tb_analog__DOT__wheel_event__27__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__27__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__27__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__27__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__27__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__27__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__27__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__27__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__27__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__27__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 0U;
    vlSelfRef.tb_analog__DOT__digital_right = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    __Vtask_tb_analog__DOT__wheel_event__30__expect_delta = 0x0dU;
    __Vtask_tb_analog__DOT__wheel_event__30__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__30__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__30__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__30__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__30__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__30__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__30__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__30__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__30__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_x = 0x40U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         161);
    if (VL_UNLIKELY((((4U != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base)) 
                      | (4U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:163: Assertion failed in %m: Hot Rod low-curve mapping base=%0d speed=%0d\n",5, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',6,(IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base)
                     , '#',8,vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10);
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 163, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__33__expect_delta = 4U;
    __Vtask_tb_analog__DOT__wheel_event__33__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__33__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__33__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__33__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__33__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__33__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__33__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__33__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__33__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_x = 0x62U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         166);
    if (VL_UNLIKELY((((9U != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base)) 
                      | (8U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:168: Assertion failed in %m: Hot Rod mid-curve mapping base=%0d speed=%0d\n",5, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',6,(IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base)
                     , '#',8,vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10);
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 168, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__36__expect_delta = 8U;
    __Vtask_tb_analog__DOT__wheel_event__36__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__36__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__36__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__36__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__36__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__36__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__36__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__36__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__36__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__analogue_profile = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0U;
    __Vtask_tb_analog__DOT__wheel_event__39__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__39__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__39__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__39__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__39__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__39__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__39__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__39__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__39__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__39__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__analogue_profile = 1U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    __Vtask_tb_analog__DOT__wheel_event__43__expect_delta = 2U;
    __Vtask_tb_analog__DOT__wheel_event__43__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__43__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__43__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__43__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__43__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__43__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__43__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__43__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__43__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__46__expect_delta = 3U;
    __Vtask_tb_analog__DOT__wheel_event__46__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__46__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__46__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__46__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__46__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__46__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__46__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__46__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__46__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__49__expect_delta = 2U;
    __Vtask_tb_analog__DOT__wheel_event__49__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__49__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__49__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__49__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__49__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__49__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__49__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__49__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__49__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__52__expect_delta = 3U;
    __Vtask_tb_analog__DOT__wheel_event__52__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__52__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__52__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__52__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__52__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__52__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__52__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__52__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__52__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__analogue_profile = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0U;
    __Vtask_tb_analog__DOT__wheel_event__55__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__55__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__55__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__55__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__55__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__55__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__55__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__55__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__55__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__55__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__analogue_profile = 1U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x40U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (VL_UNLIKELY(((0x0105U != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:184: Assertion failed in %m: Rough Racer intermediate old-Q8 rate=%0d\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',11,(IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 184, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__59__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__59__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__59__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__59__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__59__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__59__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__59__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__59__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__59__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__59__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__62__expect_delta = 1U;
    __Vtask_tb_analog__DOT__wheel_event__62__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__62__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__62__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__62__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__62__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__62__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__62__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__62__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__62__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__65__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__65__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__65__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__65__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__65__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__65__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__65__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__65__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__65__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__65__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__68__expect_delta = 1U;
    __Vtask_tb_analog__DOT__wheel_event__68__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__68__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__68__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__68__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__68__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__68__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__68__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__68__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__68__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_x = 0U;
    vlSelfRef.tb_analog__DOT__digital_left = 1U;
    __Vtask_tb_analog__DOT__wheel_event__71__expect_delta = 0xfcU;
    __Vtask_tb_analog__DOT__wheel_event__71__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__71__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__71__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__71__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__71__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__71__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__71__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__71__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__71__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 0U;
    vlSelfRef.tb_analog__DOT__digital_right = 1U;
    __Vtask_tb_analog__DOT__wheel_event__74__expect_delta = 4U;
    __Vtask_tb_analog__DOT__wheel_event__74__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__74__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__74__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__74__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__74__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__74__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__74__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__74__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__74__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 1U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    __Vtask_tb_analog__DOT__wheel_event__77__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__77__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__77__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__77__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__77__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__77__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__77__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__77__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__77__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__77__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 0U;
    vlSelfRef.tb_analog__DOT__digital_right = 0U;
    vlSelfRef.tb_analog__DOT__analogue_profile = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    vlSelfRef.tb_analog__DOT__response_code = 0U;
    vlSelfRef.tb_analog__DOT__speed_code = 7U;
    __Vtask_tb_analog__DOT__wheel_event__80__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__80__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__80__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__80__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__80__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__80__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__80__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__80__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__80__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__80__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    tb_analog__DOT__unnamedblk1__DOT__code = 0U;
    while (VL_GTS_III(32, 7U, tb_analog__DOT__unnamedblk1__DOT__code)) {
        vlSelfRef.tb_analog__DOT__speed_code = (7U 
                                                & tb_analog__DOT__unnamedblk1__DOT__code);
        __Vtask_tb_analog__DOT__wheel_event__83__expect_delta = 0U;
        __Vtask_tb_analog__DOT__wheel_event__83__expect_event = 0U;
        __Vtask_tb_analog__DOT__wheel_event__83__old_toggle = 0;
        __Vtask_tb_analog__DOT__wheel_event__83__old_toggle 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                     >> 8U));
        vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        if (__Vtask_tb_analog__DOT__wheel_event__83__expect_event) {
            if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                      >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__83__old_toggle)) 
                              | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                                 != (IData)(__Vtask_tb_analog__DOT__wheel_event__83__expect_delta)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__83__old_toggle)
                             , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                            >> 8U))
                             , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                             , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__83__expect_delta));
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
            }
        } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__83__old_toggle))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
        }
        __Vtask_tb_analog__DOT__collect_wheel__86__ticks = 4U;
        __Vtask_tb_analog__DOT__collect_wheel__86__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        __Vtask_tb_analog__DOT__collect_wheel__86__total = 0;
        __Vtask_tb_analog__DOT__collect_wheel__86__old_toggle = 0;
        __Vtask_tb_analog__DOT__collect_wheel__86__total = 0U;
        __Vtask_tb_analog__DOT__collect_wheel__86__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_analog__DOT__collect_wheel__86__ticks;
        while (VL_LTS_III(32, 0U, __Vtask_tb_analog__DOT__collect_wheel__86__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            __Vtask_tb_analog__DOT__collect_wheel__86__old_toggle 
                = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                         >> 8U));
            vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
            Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                             "@(posedge tb_analog.clk)");
            co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_analog.clk)", 
                                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                                 51);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                 51);
            vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
            Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                             "@(posedge tb_analog.clk)");
            co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_analog.clk)", 
                                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                                 51);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                 51);
            if (((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                        >> 8U)) != (IData)(__Vtask_tb_analog__DOT__collect_wheel__86__old_toggle))) {
                __Vtask_tb_analog__DOT__collect_wheel__86__total 
                    = (__Vtask_tb_analog__DOT__collect_wheel__86__total 
                       + (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
            }
            __Vtask_tb_analog__DOT__collect_wheel__86__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_analog__DOT__collect_wheel__86__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_analog__DOT__i = __Vtask_tb_analog__DOT__collect_wheel__86__total;
        if ((0U == tb_analog__DOT__unnamedblk1__DOT__code)) {
            if (VL_UNLIKELY(((0x00000034U != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:202: Assertion failed in %m: Hot Rod 100%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 202, "", false);
            }
        } else if ((1U == tb_analog__DOT__unnamedblk1__DOT__code)) {
            if (VL_UNLIKELY(((0x0000000dU != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:203: Assertion failed in %m: Hot Rod 25%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 203, "", false);
            }
        } else if ((2U == tb_analog__DOT__unnamedblk1__DOT__code)) {
            if (VL_UNLIKELY(((0x0000001aU != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:204: Assertion failed in %m: Hot Rod 50%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 204, "", false);
            }
        } else if ((3U == tb_analog__DOT__unnamedblk1__DOT__code)) {
            if (VL_UNLIKELY(((0x00000027U != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:205: Assertion failed in %m: Hot Rod 75%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 205, "", false);
            }
        } else if ((4U == tb_analog__DOT__unnamedblk1__DOT__code)) {
            if (VL_UNLIKELY(((0x00000041U != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:206: Assertion failed in %m: Hot Rod 125%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 206, "", false);
            }
        } else if ((5U == tb_analog__DOT__unnamedblk1__DOT__code)) {
            if (VL_UNLIKELY(((0x0000004eU != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:207: Assertion failed in %m: Hot Rod 150%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 207, "", false);
            }
        } else if ((6U == tb_analog__DOT__unnamedblk1__DOT__code)) {
            if (VL_UNLIKELY(((0x0000005bU != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:208: Assertion failed in %m: Hot Rod 175%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 208, "", false);
            }
        }
        tb_analog__DOT__unnamedblk1__DOT__code = ((IData)(1U) 
                                                  + tb_analog__DOT__unnamedblk1__DOT__code);
    }
    vlSelfRef.tb_analog__DOT__speed_code = 7U;
    __Vtask_tb_analog__DOT__wheel_event__89__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__89__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__89__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__89__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__89__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__89__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__89__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__89__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__89__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__89__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__collect_wheel__92__ticks = 4U;
    __Vtask_tb_analog__DOT__collect_wheel__92__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_analog__DOT__collect_wheel__92__total = 0;
    __Vtask_tb_analog__DOT__collect_wheel__92__old_toggle = 0;
    __Vtask_tb_analog__DOT__collect_wheel__92__total = 0U;
    __Vtask_tb_analog__DOT__collect_wheel__92__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_analog__DOT__collect_wheel__92__ticks;
    while (VL_LTS_III(32, 0U, __Vtask_tb_analog__DOT__collect_wheel__92__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        __Vtask_tb_analog__DOT__collect_wheel__92__old_toggle 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                     >> 8U));
        vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        if (((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__collect_wheel__92__old_toggle))) {
            __Vtask_tb_analog__DOT__collect_wheel__92__total 
                = (__Vtask_tb_analog__DOT__collect_wheel__92__total 
                   + (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        }
        __Vtask_tb_analog__DOT__collect_wheel__92__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_analog__DOT__collect_wheel__92__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_analog__DOT__i = __Vtask_tb_analog__DOT__collect_wheel__92__total;
    if (VL_UNLIKELY(((0x00000034U != vlSelfRef.tb_analog__DOT__i)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:212: Assertion failed in %m: Hot Rod reserved speed did not default to 100%%: %0d\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_analog__DOT__i);
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 212, "", false);
    }
    vlSelfRef.tb_analog__DOT__analogue_profile = 1U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    tb_analog__DOT__unnamedblk2__DOT__code = 0U;
    while (VL_GTS_III(32, 7U, tb_analog__DOT__unnamedblk2__DOT__code)) {
        vlSelfRef.tb_analog__DOT__speed_code = (7U 
                                                & tb_analog__DOT__unnamedblk2__DOT__code);
        __Vtask_tb_analog__DOT__wheel_event__96__expect_delta = 0U;
        __Vtask_tb_analog__DOT__wheel_event__96__expect_event = 0U;
        __Vtask_tb_analog__DOT__wheel_event__96__old_toggle = 0;
        __Vtask_tb_analog__DOT__wheel_event__96__old_toggle 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                     >> 8U));
        vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        if (__Vtask_tb_analog__DOT__wheel_event__96__expect_event) {
            if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                      >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__96__old_toggle)) 
                              | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                                 != (IData)(__Vtask_tb_analog__DOT__wheel_event__96__expect_delta)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__96__old_toggle)
                             , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                            >> 8U))
                             , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                             , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__96__expect_delta));
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
            }
        } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__96__old_toggle))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
        }
        __Vtask_tb_analog__DOT__collect_wheel__99__ticks = 8U;
        __Vtask_tb_analog__DOT__collect_wheel__99__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        __Vtask_tb_analog__DOT__collect_wheel__99__total = 0;
        __Vtask_tb_analog__DOT__collect_wheel__99__old_toggle = 0;
        __Vtask_tb_analog__DOT__collect_wheel__99__total = 0U;
        __Vtask_tb_analog__DOT__collect_wheel__99__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_analog__DOT__collect_wheel__99__ticks;
        while (VL_LTS_III(32, 0U, __Vtask_tb_analog__DOT__collect_wheel__99__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            __Vtask_tb_analog__DOT__collect_wheel__99__old_toggle 
                = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                         >> 8U));
            vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
            Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                             "@(posedge tb_analog.clk)");
            co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_analog.clk)", 
                                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                                 51);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                 51);
            vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
            Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                             "@(posedge tb_analog.clk)");
            co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_analog.clk)", 
                                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                                 51);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                 51);
            if (((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                        >> 8U)) != (IData)(__Vtask_tb_analog__DOT__collect_wheel__99__old_toggle))) {
                __Vtask_tb_analog__DOT__collect_wheel__99__total 
                    = (__Vtask_tb_analog__DOT__collect_wheel__99__total 
                       + (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
            }
            __Vtask_tb_analog__DOT__collect_wheel__99__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_analog__DOT__collect_wheel__99__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_analog__DOT__i = __Vtask_tb_analog__DOT__collect_wheel__99__total;
        if ((0U == tb_analog__DOT__unnamedblk2__DOT__code)) {
            if (VL_UNLIKELY(((0x00000014U != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:219: Assertion failed in %m: Rough Racer 100%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk2", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 219, "", false);
            }
        } else if ((1U == tb_analog__DOT__unnamedblk2__DOT__code)) {
            if (VL_UNLIKELY(((5U != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:220: Assertion failed in %m: Rough Racer 25%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk2", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 220, "", false);
            }
        } else if ((2U == tb_analog__DOT__unnamedblk2__DOT__code)) {
            if (VL_UNLIKELY(((0x0000000aU != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:221: Assertion failed in %m: Rough Racer 50%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk2", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 221, "", false);
            }
        } else if ((3U == tb_analog__DOT__unnamedblk2__DOT__code)) {
            if (VL_UNLIKELY(((0x0000000fU != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:222: Assertion failed in %m: Rough Racer 75%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk2", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 222, "", false);
            }
        } else if ((4U == tb_analog__DOT__unnamedblk2__DOT__code)) {
            if (VL_UNLIKELY(((0x00000019U != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:223: Assertion failed in %m: Rough Racer 125%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk2", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 223, "", false);
            }
        } else if ((5U == tb_analog__DOT__unnamedblk2__DOT__code)) {
            if (VL_UNLIKELY(((0x0000001eU != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:224: Assertion failed in %m: Rough Racer 150%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk2", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 224, "", false);
            }
        } else if ((6U == tb_analog__DOT__unnamedblk2__DOT__code)) {
            if (VL_UNLIKELY(((0x00000023U != vlSelfRef.tb_analog__DOT__i)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:225: Assertion failed in %m: Rough Racer 175%% aggregate %0d\n",4, 'M',vlSymsp->name(),"tb_analog.unnamedblk2", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.tb_analog__DOT__i);
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 225, "", false);
            }
        }
        tb_analog__DOT__unnamedblk2__DOT__code = ((IData)(1U) 
                                                  + tb_analog__DOT__unnamedblk2__DOT__code);
    }
    vlSelfRef.tb_analog__DOT__speed_code = 7U;
    __Vtask_tb_analog__DOT__wheel_event__102__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__102__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__102__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__102__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__102__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__102__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__102__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__102__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__102__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__102__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__collect_wheel__105__ticks = 8U;
    __Vtask_tb_analog__DOT__collect_wheel__105__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_analog__DOT__collect_wheel__105__total = 0;
    __Vtask_tb_analog__DOT__collect_wheel__105__old_toggle = 0;
    __Vtask_tb_analog__DOT__collect_wheel__105__total = 0U;
    __Vtask_tb_analog__DOT__collect_wheel__105__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_analog__DOT__collect_wheel__105__ticks;
    while (VL_LTS_III(32, 0U, __Vtask_tb_analog__DOT__collect_wheel__105__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        __Vtask_tb_analog__DOT__collect_wheel__105__old_toggle 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                     >> 8U));
        vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        if (((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__collect_wheel__105__old_toggle))) {
            __Vtask_tb_analog__DOT__collect_wheel__105__total 
                = (__Vtask_tb_analog__DOT__collect_wheel__105__total 
                   + (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        }
        __Vtask_tb_analog__DOT__collect_wheel__105__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_analog__DOT__collect_wheel__105__tb_analog__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_analog__DOT__i = __Vtask_tb_analog__DOT__collect_wheel__105__total;
    if (VL_UNLIKELY(((0x00000014U != vlSelfRef.tb_analog__DOT__i)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:229: Assertion failed in %m: Rough reserved speed did not default to 100%%: %0d\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_analog__DOT__i);
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 229, "", false);
    }
    vlSelfRef.tb_analog__DOT__analogue_profile = 0U;
    vlSelfRef.tb_analog__DOT__speed_code = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x62U;
    vlSelfRef.tb_analog__DOT__response_code = 1U;
    __Vtask_tb_analog__DOT__wheel_event__108__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__108__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__108__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__108__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__108__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__108__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__108__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__108__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__108__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__108__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__i = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10;
    vlSelfRef.tb_analog__DOT__response_code = 0U;
    __Vtask_tb_analog__DOT__wheel_event__111__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__111__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__111__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__111__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__111__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__111__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__111__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__111__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__111__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__111__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_analog__DOT__i >= (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:236: Assertion failed in %m: Fine response not below Normal\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 236, "", false);
    }
    vlSelfRef.tb_analog__DOT__i = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10;
    vlSelfRef.tb_analog__DOT__response_code = 2U;
    __Vtask_tb_analog__DOT__wheel_event__114__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__114__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__114__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__114__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__114__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__114__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__114__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__114__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__114__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__114__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_analog__DOT__i >= (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:239: Assertion failed in %m: Fast response not above Normal\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 239, "", false);
    }
    vlSelfRef.tb_analog__DOT__response_code = 3U;
    __Vtask_tb_analog__DOT__wheel_event__117__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__117__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__117__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__117__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__117__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__117__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__117__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__117__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__117__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__117__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__response_select))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:241: Assertion failed in %m: reserved response not Normal\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 241, "", false);
    }
    tb_analog__DOT__unnamedblk3__DOT__response = 0U;
    while (VL_GTS_III(32, 3U, tb_analog__DOT__unnamedblk3__DOT__response)) {
        vlSelfRef.tb_analog__DOT__response_code = (3U 
                                                   & tb_analog__DOT__unnamedblk3__DOT__response);
        __Vtask_tb_analog__DOT__wheel_event__120__expect_delta = 0U;
        __Vtask_tb_analog__DOT__wheel_event__120__expect_event = 0U;
        __Vtask_tb_analog__DOT__wheel_event__120__old_toggle = 0;
        __Vtask_tb_analog__DOT__wheel_event__120__old_toggle 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                     >> 8U));
        vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
        Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                         "@(posedge tb_analog.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_analog.clk)", 
                                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             51);
        if (__Vtask_tb_analog__DOT__wheel_event__120__expect_event) {
            if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                      >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__120__old_toggle)) 
                              | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                                 != (IData)(__Vtask_tb_analog__DOT__wheel_event__120__expect_delta)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__120__old_toggle)
                             , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                            >> 8U))
                             , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                             , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__120__expect_delta));
                VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
            }
        } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__120__old_toggle))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
        }
        vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             244);
        if (VL_UNLIKELY(((0x0dU != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:246: Assertion failed in %m: response endpoint cap mismatch response=%0d speed=%0d\n",5, 'M',vlSymsp->name(),"tb_analog.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,tb_analog__DOT__unnamedblk3__DOT__response
                         , '#',8,(IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 246, "", false);
        }
        vlSelfRef.tb_analog__DOT__stick_x = 0x62U;
        tb_analog__DOT__unnamedblk3__DOT__response 
            = ((IData)(1U) + tb_analog__DOT__unnamedblk3__DOT__response);
    }
    vlSelfRef.tb_analog__DOT__response_code = 0U;
    vlSelfRef.tb_analog__DOT__speed_code = 1U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    __Vtask_tb_analog__DOT__wheel_event__123__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__123__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__123__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__123__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__123__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__123__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__123__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__123__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__123__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__123__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__126__expect_delta = 3U;
    __Vtask_tb_analog__DOT__wheel_event__126__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__126__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__126__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__126__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__126__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__126__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__126__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__126__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__126__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__speed_code = 2U;
    __Vtask_tb_analog__DOT__wheel_event__129__expect_delta = 0U;
    __Vtask_tb_analog__DOT__wheel_event__129__expect_event = 0U;
    __Vtask_tb_analog__DOT__wheel_event__129__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__129__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__129__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__129__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__129__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__129__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__129__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__129__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    __Vtask_tb_analog__DOT__wheel_event__132__expect_delta = 6U;
    __Vtask_tb_analog__DOT__wheel_event__132__expect_event = 1U;
    __Vtask_tb_analog__DOT__wheel_event__132__old_toggle = 0;
    __Vtask_tb_analog__DOT__wheel_event__132__old_toggle 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (__Vtask_tb_analog__DOT__wheel_event__132__expect_event) {
        if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                  >> 8U)) == (IData)(__Vtask_tb_analog__DOT__wheel_event__132__old_toggle)) 
                          | ((0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)) 
                             != (IData)(__Vtask_tb_analog__DOT__wheel_event__132__expect_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:80: Assertion failed in %m: wheel event mismatch toggle=%b->%b delta=%02x expected=%02x\n",7, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(__Vtask_tb_analog__DOT__wheel_event__132__old_toggle)
                         , '#',1,(1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                        >> 8U)), '#',8,
                         (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))
                         , '#',8,(IData)(__Vtask_tb_analog__DOT__wheel_event__132__expect_delta));
            VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 80, "", false);
        }
    } else if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                    >> 8U)) != (IData)(__Vtask_tb_analog__DOT__wheel_event__132__old_toggle))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:83: Assertion failed in %m: unexpected wheel event delta=%02x\n",4, 'M',vlSymsp->name(),"tb_analog.wheel_event", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 83, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_enable = 0U;
    tb_analog__DOT__saved_toggle = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                          >> 8U));
    vlSelfRef.tb_analog__DOT__wheel_spinner = 0x0102U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                                         51);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                         51);
    if (VL_UNLIKELY(((((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                              >> 8U)) == (IData)(tb_analog__DOT__saved_toggle)) 
                      | (2U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:259: Assertion failed in %m: native spinner was blocked with stick source disabled\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 259, "", false);
    }
    VL_WRITEF_NX("PASS System 24 analog devices and D-pad wheel steering\n",0);
    VL_FINISH_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 262, "");
    co_return;
}

VlCoroutine Vtb_analog___024root___eval_initial__TOP__Vtiming__1(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             ".codex-mister-build/analog_obj_after\\tb_analog.sv", 
                                             7);
        vlSelfRef.tb_analog__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_analog__DOT__clk)));
    }
    co_return;
}

bool Vtb_analog___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___trigger_anySet__act\n"); );
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

void Vtb_analog___024root___act_comb__TOP__0(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___act_comb__TOP__0\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*14:0*/ tb_analog__DOT__wheel__DOT__curve_square;
    tb_analog__DOT__wheel__DOT__curve_square = 0;
    SData/*13:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    // Body
    vlSelfRef.tb_analog__DOT__pedal_out0 = (0x000000ffU 
                                            & (0x12U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & (IData)(vlSelfRef.tb_analog__DOT__pedal_button1))))));
    vlSelfRef.tb_analog__DOT__pedal_out1 = (0x000000ffU 
                                            & (0x34U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & ((IData)(vlSelfRef.tb_analog__DOT__pedal_button1) 
                                                                >> 1U))))));
    vlSelfRef.tb_analog__DOT__pedal_out2 = (0x000000ffU 
                                            & (0x56U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & ((IData)(vlSelfRef.tb_analog__DOT__pedal_button1) 
                                                                >> 2U))))));
    vlSelfRef.tb_analog__DOT__pedal_out3 = (0x000000ffU 
                                            & (0x78U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & ((IData)(vlSelfRef.tb_analog__DOT__pedal_button1) 
                                                                >> 3U))))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step 
        = (((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
             ? ((IData)(vlSelfRef.tb_analog__DOT__digital_left)
                 ? 0xfcU : 4U) : ((IData)(vlSelfRef.tb_analog__DOT__digital_left)
                                   ? 0xf9U : 7U)) & 
           (- (IData)(((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
                       != (IData)(vlSelfRef.tb_analog__DOT__digital_right)))));
    vlSelfRef.tb_analog__DOT__udout = (0x000000ffU 
                                       & ((0U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                           ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_x)
                                           : ((1U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                               ? (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_x) 
                                                     >> 8U))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                                   ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_y)
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_y) 
                                                      >> 8U))))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__response_select 
        = ((IData)(vlSelfRef.tb_analog__DOT__response_code) 
           & (- (IData)((3U != (IData)(vlSelfRef.tb_analog__DOT__response_code)))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                           ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_analog__DOT__stick_x)))
                           : (IData)(vlSelfRef.tb_analog__DOT__stick_x)));
    __VdfgRegularize_h6e95ff9d_0_5 = (0x000000ffU & 
                                      (((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                                        - ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                            ? 0x0aU
                                            : 8U)) 
                                       & (- (IData)(
                                                    (((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_active) 
                                                      | ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                                                         >= 
                                                         ((1U 
                                                           == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                                           ? 0x10U
                                                           : 0x0cU))) 
                                                     & ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                                                        > 
                                                        ((1U 
                                                          == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                                          ? 0x0aU
                                                          : 8U)))))));
    __VdfgRegularize_h6e95ff9d_0_6 = ((1U == (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__response_select))
                                       ? (0x000000ffU 
                                          & (((IData)(2U) 
                                              + ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                 + 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                  << 1U))) 
                                             >> 2U))
                                       : ((2U == (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__response_select))
                                           ? (0x000000ffU 
                                              & (((IData)(2U) 
                                                  + 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                   + 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                    << 2U))) 
                                                 >> 2U))
                                           : (IData)(__VdfgRegularize_h6e95ff9d_0_5)));
    __VdfgRegularize_h6e95ff9d_0_7 = ((0x0096U < (IData)(__VdfgRegularize_h6e95ff9d_0_6))
                                       ? 0x00000096U
                                       : (0x000000ffU 
                                          & (IData)(__VdfgRegularize_h6e95ff9d_0_6)));
    tb_analog__DOT__wheel__DOT__curve_square = (0x00007fffU 
                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
                                                   * (IData)(__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate 
        = ((0x78U <= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs))
            ? 0x00000500U : (0x000007ffU & (((IData)(0x00000017U) 
                                             * (IData)(tb_analog__DOT__wheel__DOT__curve_square)) 
                                            >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_8 = (0x00007fffU & 
                                      ((IData)(1U) 
                                       + (((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                           >> 0x0000000cU) 
                                          + ((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                             >> 0x0000000aU))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base 
        = (0x0000003fU & ((((0x78U <= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs)) 
                            | (0x000eU < (IData)(__VdfgRegularize_h6e95ff9d_0_8)))
                            ? 0x0eU : (IData)(__VdfgRegularize_h6e95ff9d_0_8)) 
                          & (- (IData)((0U != (IData)(__VdfgRegularize_h6e95ff9d_0_7))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (0x0000003fU 
                                                 & ((5U 
                                                     >= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base))
                                                     ? (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base) 
                                                     - (IData)(1U))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                       ? (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate_q)
                                       : (0x00003e00U 
                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                             << 9U)));
    __VdfgRegularize_h6e95ff9d_0_9 = (0x0000ffffU & 
                                      (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                        << 1U) + (IData)(__VdfgRegularize_h6e95ff9d_0_2)));
    vlSelfRef.tb_analog__DOT__wheel__DOT__analog_sum 
        = (0x0001ffffU & ((0x0000ffffU & ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                           ? ((1U & 
                                               (0x009f568cU 
                                                >> 
                                                ((IData)(2U) 
                                                 + 
                                                 ((IData)(3U) 
                                                  * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))))
                                               ? ((1U 
                                                   & (0x009f568cU 
                                                      >> 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))))
                                                   ? 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 2U) 
                                                    + (IData)(__VdfgRegularize_h6e95ff9d_0_9))
                                                    : 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 2U) 
                                                    + 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 1U)))
                                                   : 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 2U) 
                                                    + (IData)(__VdfgRegularize_h6e95ff9d_0_2))
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                    << 2U)))
                                               : ((1U 
                                                   & (0x009f568cU 
                                                      >> 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))))
                                                   ? 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                    << 1U))
                                                   : 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                    << 2U))))
                                           : (0x0000fe00U 
                                              & (((7U 
                                                   & (0x009f568cU 
                                                      >> 
                                                      ((IData)(3U) 
                                                       * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))) 
                                                  * 
                                                  (0x0000001fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))) 
                                                 << 9U)))) 
                          + (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__analog_remainder)));
}

void Vtb_analog___024root___nba_sequent__TOP__0(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___nba_sequent__TOP__0\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle;
    __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle = 0;
    CData/*2:0*/ __Vdly__tb_analog__DOT__wheel__DOT__speed_code_q;
    __Vdly__tb_analog__DOT__wheel__DOT__speed_code_q = 0;
    CData/*1:0*/ __Vdly__tb_analog__DOT__wheel__DOT__response_code_q;
    __Vdly__tb_analog__DOT__wheel__DOT__response_code_q = 0;
    CData/*0:0*/ __Vdly__tb_analog__DOT__wheel__DOT__stick_active;
    __Vdly__tb_analog__DOT__wheel__DOT__stick_active = 0;
    SData/*8:0*/ __Vdly__tb_analog__DOT__wheel_out;
    __Vdly__tb_analog__DOT__wheel_out = 0;
    CData/*7:0*/ __Vdly__tb_analog__DOT__adc__DOT__shifter;
    __Vdly__tb_analog__DOT__adc__DOT__shifter = 0;
    SData/*11:0*/ __Vdly__tb_analog__DOT__upd__DOT__count_x;
    __Vdly__tb_analog__DOT__upd__DOT__count_x = 0;
    SData/*11:0*/ __Vdly__tb_analog__DOT__upd__DOT__count_y;
    __Vdly__tb_analog__DOT__upd__DOT__count_y = 0;
    // Body
    __Vdly__tb_analog__DOT__adc__DOT__shifter = vlSelfRef.tb_analog__DOT__adc__DOT__shifter;
    __Vdly__tb_analog__DOT__upd__DOT__count_y = vlSelfRef.tb_analog__DOT__upd__DOT__count_y;
    __Vdly__tb_analog__DOT__upd__DOT__count_x = vlSelfRef.tb_analog__DOT__upd__DOT__count_x;
    __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle 
        = vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle;
    __Vdly__tb_analog__DOT__wheel__DOT__speed_code_q 
        = vlSelfRef.tb_analog__DOT__wheel__DOT__speed_code_q;
    __Vdly__tb_analog__DOT__wheel__DOT__response_code_q 
        = vlSelfRef.tb_analog__DOT__wheel__DOT__response_code_q;
    __Vdly__tb_analog__DOT__wheel_out = vlSelfRef.tb_analog__DOT__wheel_out;
    __Vdly__tb_analog__DOT__wheel__DOT__stick_active 
        = vlSelfRef.tb_analog__DOT__wheel__DOT__stick_active;
    if (vlSelfRef.tb_analog__DOT__reset) {
        __Vdly__tb_analog__DOT__adc__DOT__shifter = 0U;
        __Vdly__tb_analog__DOT__wheel_out = 0U;
        __Vdly__tb_analog__DOT__wheel__DOT__stick_active = 0U;
        __Vdly__tb_analog__DOT__upd__DOT__count_y = 0U;
        vlSelfRef.tb_analog__DOT__upd__DOT__latch_y = 0U;
        __Vdly__tb_analog__DOT__upd__DOT__count_x = 0U;
        vlSelfRef.tb_analog__DOT__upd__DOT__latch_x = 0U;
        vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate_q = 0U;
        vlSelfRef.tb_analog__DOT__wheel__DOT__hw_toggle_d 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_spinner) 
                     >> 8U));
        __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle = 0U;
        vlSelfRef.tb_analog__DOT__wheel__DOT__analog_remainder = 0U;
        vlSelfRef.tb_analog__DOT__wheel__DOT__analog_step = 0U;
        __Vdly__tb_analog__DOT__wheel__DOT__speed_code_q = 0U;
        __Vdly__tb_analog__DOT__wheel__DOT__response_code_q = 0U;
    } else {
        if (vlSelfRef.tb_analog__DOT__select) {
            __Vdly__tb_analog__DOT__adc__DOT__shifter 
                = (0x000000ffU & (0xffa53412U >> (0x00000018U 
                                                  & ((IData)(vlSelfRef.tb_analog__DOT__din) 
                                                     << 3U))));
        } else if (vlSelfRef.tb_analog__DOT__shift) {
            __Vdly__tb_analog__DOT__adc__DOT__shifter 
                = (0x000000feU & ((IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter) 
                                  << 1U));
        }
        if (((1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_spinner) 
                    >> 8U)) != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__hw_toggle_d))) {
            __Vdly__tb_analog__DOT__wheel_out = ((0x00000100U 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                                       >> 8U)) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & (IData)(vlSelfRef.tb_analog__DOT__wheel_spinner)));
        }
        if (((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle) 
             != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle_d))) {
            __Vdly__tb_analog__DOT__wheel_out = ((0x00000100U 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.tb_analog__DOT__wheel_out) 
                                                       >> 8U)) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((((IData)(vlSelfRef.tb_analog__DOT__stick_enable) 
                                                         & (~ (IData)(vlSelfRef.tb_analog__DOT__digital_left))) 
                                                        & (~ (IData)(vlSelfRef.tb_analog__DOT__digital_right)))
                                                        ? 
                                                       ((0x00000080U 
                                                         & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                                                         ? 
                                                        (- (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__analog_step))
                                                         : (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__analog_step))
                                                        : (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step))));
        }
        if (vlSelfRef.tb_analog__DOT__wheel_tick) {
            if (vlSelfRef.tb_analog__DOT__wheel__DOT__stick_active) {
                if (((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                     <= ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                          ? 0x0aU : 8U))) {
                    __Vdly__tb_analog__DOT__wheel__DOT__stick_active = 0U;
                }
            } else if (((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                        >= ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                             ? 0x10U : 0x0cU))) {
                __Vdly__tb_analog__DOT__wheel__DOT__stick_active = 1U;
            }
            if ((((IData)(vlSelfRef.tb_analog__DOT__speed_code) 
                  != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_code_q)) 
                 | ((IData)(vlSelfRef.tb_analog__DOT__response_code) 
                    != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__response_code_q)))) {
                __Vdly__tb_analog__DOT__wheel__DOT__speed_code_q 
                    = vlSelfRef.tb_analog__DOT__speed_code;
                __Vdly__tb_analog__DOT__wheel__DOT__response_code_q 
                    = vlSelfRef.tb_analog__DOT__response_code;
                vlSelfRef.tb_analog__DOT__wheel__DOT__analog_remainder = 0U;
            } else if ((((IData)(vlSelfRef.tb_analog__DOT__stick_enable) 
                         & (~ (IData)(vlSelfRef.tb_analog__DOT__digital_left))) 
                        & (~ (IData)(vlSelfRef.tb_analog__DOT__digital_right)))) {
                vlSelfRef.tb_analog__DOT__wheel__DOT__analog_remainder 
                    = (0x000007ffU & vlSelfRef.tb_analog__DOT__wheel__DOT__analog_sum);
                if ((0U != (0x0000003fU & (vlSelfRef.tb_analog__DOT__wheel__DOT__analog_sum 
                                           >> 0x0bU)))) {
                    __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle 
                        = (1U & (~ (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle)));
                    vlSelfRef.tb_analog__DOT__wheel__DOT__analog_step 
                        = (0x0000003fU & (vlSelfRef.tb_analog__DOT__wheel__DOT__analog_sum 
                                          >> 0x0bU));
                }
            } else {
                if (((IData)(vlSelfRef.tb_analog__DOT__stick_enable) 
                     & (0U != VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step))))) {
                    __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle 
                        = (1U & (~ (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle)));
                }
                vlSelfRef.tb_analog__DOT__wheel__DOT__analog_remainder = 0U;
            }
        }
        if (vlSelfRef.tb_analog__DOT__upd__DOT__toggle_y_d) {
            __Vdly__tb_analog__DOT__upd__DOT__count_y 
                = vlSelfRef.tb_analog__DOT__upd__DOT__count_y;
        }
        if (vlSelfRef.tb_analog__DOT__uread) {
            vlSelfRef.tb_analog__DOT__upd__DOT__latch_y 
                = vlSelfRef.tb_analog__DOT__upd__DOT__count_y;
            vlSelfRef.tb_analog__DOT__upd__DOT__latch_x 
                = vlSelfRef.tb_analog__DOT__upd__DOT__count_x;
        }
        if (((1U & ((IData)(vlSelfRef.tb_analog__DOT__sx) 
                    >> 8U)) != (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__toggle_x_d))) {
            __Vdly__tb_analog__DOT__upd__DOT__count_x 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_x) 
                                  + ((0x00000f00U & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_analog__DOT__sx) 
                                                      >> 7U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_analog__DOT__sx)))));
        }
        vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate_q 
            = vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate;
        vlSelfRef.tb_analog__DOT__wheel__DOT__hw_toggle_d 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_spinner) 
                     >> 8U));
    }
    vlSelfRef.tb_analog__DOT__adc__DOT__shifter = __Vdly__tb_analog__DOT__adc__DOT__shifter;
    vlSelfRef.tb_analog__DOT__wheel_out = __Vdly__tb_analog__DOT__wheel_out;
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_active 
        = __Vdly__tb_analog__DOT__wheel__DOT__stick_active;
    vlSelfRef.tb_analog__DOT__upd__DOT__count_y = __Vdly__tb_analog__DOT__upd__DOT__count_y;
    vlSelfRef.tb_analog__DOT__upd__DOT__count_x = __Vdly__tb_analog__DOT__upd__DOT__count_x;
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle_d 
        = ((1U & (~ (IData)(vlSelfRef.tb_analog__DOT__reset))) 
           && (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle));
    vlSelfRef.tb_analog__DOT__upd__DOT__toggle_y_d = 0U;
    vlSelfRef.tb_analog__DOT__upd__DOT__toggle_x_d 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__sx) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel__DOT__speed_code_q 
        = __Vdly__tb_analog__DOT__wheel__DOT__speed_code_q;
    vlSelfRef.tb_analog__DOT__wheel__DOT__response_code_q 
        = __Vdly__tb_analog__DOT__wheel__DOT__response_code_q;
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle 
        = __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle;
}

void Vtb_analog___024root___nba_comb__TOP__0(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___nba_comb__TOP__0\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*14:0*/ tb_analog__DOT__wheel__DOT__curve_square;
    tb_analog__DOT__wheel__DOT__curve_square = 0;
    SData/*13:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    // Body
    vlSelfRef.tb_analog__DOT__pedal_out0 = (0x000000ffU 
                                            & (0x12U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & (IData)(vlSelfRef.tb_analog__DOT__pedal_button1))))));
    vlSelfRef.tb_analog__DOT__pedal_out1 = (0x000000ffU 
                                            & (0x34U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & ((IData)(vlSelfRef.tb_analog__DOT__pedal_button1) 
                                                                >> 1U))))));
    vlSelfRef.tb_analog__DOT__pedal_out2 = (0x000000ffU 
                                            & (0x56U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & ((IData)(vlSelfRef.tb_analog__DOT__pedal_button1) 
                                                                >> 2U))))));
    vlSelfRef.tb_analog__DOT__pedal_out3 = (0x000000ffU 
                                            & (0x78U 
                                               | (- (IData)(
                                                            ((IData)(vlSelfRef.tb_analog__DOT__hotrod_io) 
                                                             & ((IData)(vlSelfRef.tb_analog__DOT__pedal_button1) 
                                                                >> 3U))))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__response_select 
        = ((IData)(vlSelfRef.tb_analog__DOT__response_code) 
           & (- (IData)((3U != (IData)(vlSelfRef.tb_analog__DOT__response_code)))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                           ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_analog__DOT__stick_x)))
                           : (IData)(vlSelfRef.tb_analog__DOT__stick_x)));
    vlSelfRef.tb_analog__DOT__udout = (0x000000ffU 
                                       & ((0U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                           ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_x)
                                           : ((1U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                               ? (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_x) 
                                                     >> 8U))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                                   ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_y)
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__latch_y) 
                                                      >> 8U))))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step 
        = (((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
             ? ((IData)(vlSelfRef.tb_analog__DOT__digital_left)
                 ? 0xfcU : 4U) : ((IData)(vlSelfRef.tb_analog__DOT__digital_left)
                                   ? 0xf9U : 7U)) & 
           (- (IData)(((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
                       != (IData)(vlSelfRef.tb_analog__DOT__digital_right)))));
    __VdfgRegularize_h6e95ff9d_0_5 = (0x000000ffU & 
                                      (((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                                        - ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                            ? 0x0aU
                                            : 8U)) 
                                       & (- (IData)(
                                                    (((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_active) 
                                                      | ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                                                         >= 
                                                         ((1U 
                                                           == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                                           ? 0x10U
                                                           : 0x0cU))) 
                                                     & ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs) 
                                                        > 
                                                        ((1U 
                                                          == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                                          ? 0x0aU
                                                          : 8U)))))));
    __VdfgRegularize_h6e95ff9d_0_6 = ((1U == (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__response_select))
                                       ? (0x000000ffU 
                                          & (((IData)(2U) 
                                              + ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                 + 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                  << 1U))) 
                                             >> 2U))
                                       : ((2U == (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__response_select))
                                           ? (0x000000ffU 
                                              & (((IData)(2U) 
                                                  + 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                   + 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                    << 2U))) 
                                                 >> 2U))
                                           : (IData)(__VdfgRegularize_h6e95ff9d_0_5)));
    __VdfgRegularize_h6e95ff9d_0_7 = ((0x0096U < (IData)(__VdfgRegularize_h6e95ff9d_0_6))
                                       ? 0x00000096U
                                       : (0x000000ffU 
                                          & (IData)(__VdfgRegularize_h6e95ff9d_0_6)));
    tb_analog__DOT__wheel__DOT__curve_square = (0x00007fffU 
                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
                                                   * (IData)(__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate 
        = ((0x78U <= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs))
            ? 0x00000500U : (0x000007ffU & (((IData)(0x00000017U) 
                                             * (IData)(tb_analog__DOT__wheel__DOT__curve_square)) 
                                            >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_8 = (0x00007fffU & 
                                      ((IData)(1U) 
                                       + (((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                           >> 0x0000000cU) 
                                          + ((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                             >> 0x0000000aU))));
    vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base 
        = (0x0000003fU & ((((0x78U <= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs)) 
                            | (0x000eU < (IData)(__VdfgRegularize_h6e95ff9d_0_8)))
                            ? 0x0eU : (IData)(__VdfgRegularize_h6e95ff9d_0_8)) 
                          & (- (IData)((0U != (IData)(__VdfgRegularize_h6e95ff9d_0_7))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (0x0000003fU 
                                                 & ((5U 
                                                     >= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base))
                                                     ? (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__speed_base) 
                                                     - (IData)(1U))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                       ? (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_rate_q)
                                       : (0x00003e00U 
                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                             << 9U)));
    __VdfgRegularize_h6e95ff9d_0_9 = (0x0000ffffU & 
                                      (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                        << 1U) + (IData)(__VdfgRegularize_h6e95ff9d_0_2)));
    vlSelfRef.tb_analog__DOT__wheel__DOT__analog_sum 
        = (0x0001ffffU & ((0x0000ffffU & ((1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))
                                           ? ((1U & 
                                               (0x009f568cU 
                                                >> 
                                                ((IData)(2U) 
                                                 + 
                                                 ((IData)(3U) 
                                                  * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))))
                                               ? ((1U 
                                                   & (0x009f568cU 
                                                      >> 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))))
                                                   ? 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 2U) 
                                                    + (IData)(__VdfgRegularize_h6e95ff9d_0_9))
                                                    : 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 2U) 
                                                    + 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 1U)))
                                                   : 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                     << 2U) 
                                                    + (IData)(__VdfgRegularize_h6e95ff9d_0_2))
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                    << 2U)))
                                               : ((1U 
                                                   & (0x009f568cU 
                                                      >> 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))))
                                                   ? 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                    << 1U))
                                                   : 
                                                  ((1U 
                                                    & (0x009f568cU 
                                                       >> 
                                                       ((IData)(3U) 
                                                        * (IData)(vlSelfRef.tb_analog__DOT__speed_code))))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                    << 2U))))
                                           : (0x0000fe00U 
                                              & (((7U 
                                                   & (0x009f568cU 
                                                      >> 
                                                      ((IData)(3U) 
                                                       * (IData)(vlSelfRef.tb_analog__DOT__speed_code)))) 
                                                  * 
                                                  (0x0000001fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))) 
                                                 << 9U)))) 
                          + (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__analog_remainder)));
}

void Vtb_analog___024root___timing_ready(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___timing_ready\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready("@(posedge tb_analog.clk)");
    }
}

void Vtb_analog___024root___timing_resume(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___timing_resume\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1cf7f4bc__0.moveToResumeQueue(
                                                          "@(posedge tb_analog.clk)");
    vlSelfRef.__VtrigSched_h1cf7f4bc__0.resume("@(posedge tb_analog.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_analog___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_analog___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_analog___024root___eval_phase__act(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_phase__act\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_analog__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_analog__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_analog__DOT__clk__0 
            = vlSelfRef.tb_analog__DOT__clk;
    }
    Vtb_analog___024root___timing_ready(vlSelf);
    Vtb_analog___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_analog___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_analog___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_analog___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_analog___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_analog___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_analog___024root___eval_phase__inact(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_phase__inact\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_analog___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_analog___024root___eval_phase__nba(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_phase__nba\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_analog___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_analog___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_analog___024root___nba_comb__TOP__0(vlSelf);
            }
        }
        Vtb_analog___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_analog___024root___eval(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_analog___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_analog___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT(".codex-mister-build/analog_obj_after\\tb_analog.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_analog___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_analog___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_analog___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(Vtb_analog___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_analog__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_analog__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_analog__DOT__clk__0 
        = vlSelfRef.tb_analog__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1cf7f4bc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_analog___024root___eval_debug_assertions(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___eval_debug_assertions\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

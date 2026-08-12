// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_io_5296.h for the primary calling header

#include "Vtb_io_5296__pch.h"

VlCoroutine Vtb_io_5296___024root___eval_initial__TOP__Vtiming__0(Vtb_io_5296___024root* vlSelf);
VlCoroutine Vtb_io_5296___024root___eval_initial__TOP__Vtiming__1(Vtb_io_5296___024root* vlSelf);

void Vtb_io_5296___024root___eval_initial(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_initial\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_io_5296___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_io_5296___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(Vtb_io_5296___024root* vlSelf, const char* __VeventDescription);
void Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(Vtb_io_5296___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_io_5296___024root___eval_initial__TOP__Vtiming__0(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_io_5296__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_io_5296__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_io_5296__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_io_5296__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb_io_5296__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_io_5296__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_io_5296__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_io_5296__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb_io_5296__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_io_5296__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb_io_5296__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb_io_5296__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__0__a;
    __Vtask_tb_io_5296__DOT__write_io__0__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__0__d;
    __Vtask_tb_io_5296__DOT__write_io__0__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__1__a;
    __Vtask_tb_io_5296__DOT__write_io__1__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__1__d;
    __Vtask_tb_io_5296__DOT__write_io__1__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__2__a;
    __Vtask_tb_io_5296__DOT__write_io__2__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__2__d;
    __Vtask_tb_io_5296__DOT__write_io__2__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__3__a;
    __Vtask_tb_io_5296__DOT__write_io__3__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__3__d;
    __Vtask_tb_io_5296__DOT__write_io__3__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__4__a;
    __Vtask_tb_io_5296__DOT__write_io__4__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__4__d;
    __Vtask_tb_io_5296__DOT__write_io__4__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__5__a;
    __Vtask_tb_io_5296__DOT__write_io__5__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__5__d;
    __Vtask_tb_io_5296__DOT__write_io__5__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__6__a;
    __Vtask_tb_io_5296__DOT__write_io__6__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__6__d;
    __Vtask_tb_io_5296__DOT__write_io__6__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__7__a;
    __Vtask_tb_io_5296__DOT__write_io__7__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__7__d;
    __Vtask_tb_io_5296__DOT__write_io__7__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__8__a;
    __Vtask_tb_io_5296__DOT__write_io__8__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__8__d;
    __Vtask_tb_io_5296__DOT__write_io__8__d = 0;
    CData/*5:0*/ __Vtask_tb_io_5296__DOT__write_io__9__a;
    __Vtask_tb_io_5296__DOT__write_io__9__a = 0;
    CData/*7:0*/ __Vtask_tb_io_5296__DOT__write_io__9__d;
    __Vtask_tb_io_5296__DOT__write_io__9__d = 0;
    // Body
    tb_io_5296__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_io_5296__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                          "@(posedge tb_io_5296.clk)");
        co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_io_5296.clk)", 
                                                             "verif\\tb_io_5296.sv", 
                                                             29);
        tb_io_5296__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_io_5296__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         29);
    vlSelfRef.tb_io_5296__DOT__reset = 0U;
    vlSelfRef.tb_io_5296__DOT__addr = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         30);
    __Vtask_tb_io_5296__DOT__write_io__0__d = 0xa5U;
    __Vtask_tb_io_5296__DOT__write_io__0__a = 0U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((0x11U != (IData)(vlSelfRef.tb_io_5296__DOT__dout))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:30: Assertion failed in %m: input read %h\n",4, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',8,(IData)(vlSelfRef.tb_io_5296__DOT__dout));
                VL_STOP_MT("verif\\tb_io_5296.sv", 30, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__0__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__0__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    __Vtask_tb_io_5296__DOT__write_io__1__d = 1U;
    __Vtask_tb_io_5296__DOT__write_io__1__a = 0x0fU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((0U != (vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[0U] 
                                     & (- (IData)((1U 
                                                   & (IData)(vlSelfRef.tb_io_5296__DOT__port_dir))))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:32: Assertion failed in %m: input drove output\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 32, "", false);
            }
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_io_5296__DOT__port_write))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:33: Assertion failed in %m: input write invoked callback\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 33, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__1__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__1__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    vlSelfRef.tb_io_5296__DOT__addr = 0U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_io_5296__DOT__port_write))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:35: Assertion failed in %m: direction callback missing\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 35, "", false);
            }
            if (VL_UNLIKELY(((0xa5U != (0x000000ffU 
                                        & (IData)(vlSelfRef.tb_io_5296__DOT__port_write_data)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:37: Assertion failed in %m: direction callback payload mismatch\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 37, "", false);
            }
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         38);
    __Vtask_tb_io_5296__DOT__write_io__2__d = 0U;
    __Vtask_tb_io_5296__DOT__write_io__2__a = 0x0fU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((0xa5U == (IData)(vlSelfRef.tb_io_5296__DOT__dout)) 
                                       & (0xa5U == 
                                          (vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_io_5296__DOT__port_dir)))))))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:40: Assertion failed in %m: latched output %h/%h\n",5, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',8,(IData)(vlSelfRef.tb_io_5296__DOT__dout)
                             , '#',8,(vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__port_dir))))));
                VL_STOP_MT("verif\\tb_io_5296.sv", 40, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__2__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__2__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    vlSelfRef.tb_io_5296__DOT__addr = 0U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_io_5296__DOT__port_write))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:42: Assertion failed in %m: direction release callback missing\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 42, "", false);
            }
            if (VL_UNLIKELY(((0U != (0x000000ffU & (IData)(vlSelfRef.tb_io_5296__DOT__port_write_data)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:44: Assertion failed in %m: direction release callback payload mismatch\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 44, "", false);
            }
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         45);
    __Vtask_tb_io_5296__DOT__write_io__3__d = 8U;
    __Vtask_tb_io_5296__DOT__write_io__3__a = 0x0fU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((0x11U == (IData)(vlSelfRef.tb_io_5296__DOT__dout)) 
                                       & (0U == (vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[0U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.tb_io_5296__DOT__port_dir)))))))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:46: Assertion failed in %m: direction release\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 46, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__3__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__3__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    __Vtask_tb_io_5296__DOT__write_io__4__d = 4U;
    __Vtask_tb_io_5296__DOT__write_io__4__a = 3U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__4__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__4__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((8U != (IData)(vlSelfRef.tb_io_5296__DOT__port_write))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:50: Assertion failed in %m: output write callback missing\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 50, "", false);
            }
            if (VL_UNLIKELY(((4U != (0x000000ffU & (IData)(
                                                           (vlSelfRef.tb_io_5296__DOT__port_write_data 
                                                            >> 0x18U))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:52: Assertion failed in %m: output callback payload mismatch\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 52, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                      "@(posedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         53);
    __Vtask_tb_io_5296__DOT__write_io__5__d = 4U;
    __Vtask_tb_io_5296__DOT__write_io__5__a = 3U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_io_5296__DOT__mahjong_line))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:54: Assertion failed in %m: mahjong mux first strobe missing\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 54, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__5__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__5__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((8U != (IData)(vlSelfRef.tb_io_5296__DOT__port_write))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:56: Assertion failed in %m: repeated output callback missing\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 56, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                      "@(posedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         57);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         57);
    vlSelfRef.tb_io_5296__DOT__addr = 8U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_io_5296__DOT__mahjong_line))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:58: Assertion failed in %m: mahjong mux repeated strobe missing\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 58, "", false);
            }
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         60);
    vlSelfRef.tb_io_5296__DOT__addr = 9U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((0x53U != (IData)(vlSelfRef.tb_io_5296__DOT__dout))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:60: Assertion failed in %m: SEGA ID S\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 60, "", false);
            }
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         61);
    vlSelfRef.tb_io_5296__DOT__addr = 0x0aU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((0x45U != (IData)(vlSelfRef.tb_io_5296__DOT__dout))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:61: Assertion failed in %m: SEGA ID E\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 61, "", false);
            }
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         62);
    vlSelfRef.tb_io_5296__DOT__addr = 0x0bU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((0x47U != (IData)(vlSelfRef.tb_io_5296__DOT__dout))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:62: Assertion failed in %m: SEGA ID G\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 62, "", false);
            }
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "verif\\tb_io_5296.sv", 
                                         63);
    __Vtask_tb_io_5296__DOT__write_io__6__d = 5U;
    __Vtask_tb_io_5296__DOT__write_io__6__a = 0x0eU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((0x41U != (IData)(vlSelfRef.tb_io_5296__DOT__dout))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:63: Assertion failed in %m: SEGA ID A\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 63, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__6__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__6__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    __Vtask_tb_io_5296__DOT__write_io__7__d = 0x0cU;
    __Vtask_tb_io_5296__DOT__write_io__7__a = 0x0eU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((5U != ((4U & (((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                              ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                              : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                                 >> 2U)) 
                                            << 2U)) 
                                     | (3U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:65: Assertion failed in %m: CNT outputs %b\n",4, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,((4U & (((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                               ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                               : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                                  >> 2U)) 
                                             << 2U)) 
                                      | (3U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))));
                VL_STOP_MT("verif\\tb_io_5296.sv", 65, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__7__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__7__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    tb_io_5296__DOT__unnamedblk1_2__DOT____Vrepeat1 = 1U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                            ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                            : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                               >> 2U))) 
                                       & (~ (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:71: Assertion failed in %m: CNT2 clock mode initial phase %b/%b\n",5, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(1U & ((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                             ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                             : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                                >> 2U)))
                             , '#',1,(IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock));
                VL_STOP_MT("verif\\tb_io_5296.sv", 71, "", false);
            }
        }
    }
    while (VL_LTS_III(32, 0U, tb_io_5296__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                          "@(posedge tb_io_5296.clk)");
        co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_io_5296.clk)", 
                                                             "verif\\tb_io_5296.sv", 
                                                             72);
        tb_io_5296__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_io_5296__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    tb_io_5296__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY((vlSelfRef.tb_io_5296__DOT__cnt2_clock))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:73: Assertion failed in %m: CNT2 clock toggled early\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 73, "", false);
            }
        }
    }
    while (VL_LTS_III(32, 0U, tb_io_5296__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                          "@(posedge tb_io_5296.clk)");
        co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_io_5296.clk)", 
                                                             "verif\\tb_io_5296.sv", 
                                                             74);
        tb_io_5296__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_io_5296__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    tb_io_5296__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock) 
                                       & ((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                           ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                           : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                              >> 2U)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:76: Assertion failed in %m: CNT2 CLK/4 first half-period %b/%b\n",5, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                             , '#',1,(1U & ((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                             ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                             : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                                >> 2U))));
                VL_STOP_MT("verif\\tb_io_5296.sv", 76, "", false);
            }
        }
    }
    while (VL_LTS_III(32, 0U, tb_io_5296__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                          "@(posedge tb_io_5296.clk)");
        co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_io_5296.clk)", 
                                                             "verif\\tb_io_5296.sv", 
                                                             77);
        tb_io_5296__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_io_5296__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_tb_io_5296__DOT__write_io__8__d = 0x4cU;
    __Vtask_tb_io_5296__DOT__write_io__8__a = 0x0eU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY((vlSelfRef.tb_io_5296__DOT__cnt2_clock))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:78: Assertion failed in %m: CNT2 CLK/4 period\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 78, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__8__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__8__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    tb_io_5296__DOT__unnamedblk1_5__DOT____Vrepeat4 = 3U;
    while (VL_LTS_III(32, 0U, tb_io_5296__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                          "@(posedge tb_io_5296.clk)");
        co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_io_5296.clk)", 
                                                             "verif\\tb_io_5296.sv", 
                                                             83);
        tb_io_5296__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_io_5296__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    tb_io_5296__DOT__unnamedblk1_6__DOT____Vrepeat5 = 1U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY((vlSelfRef.tb_io_5296__DOT__ckot_clock))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:84: Assertion failed in %m: CKOT toggled early\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 84, "", false);
            }
        }
    }
    while (VL_LTS_III(32, 0U, tb_io_5296__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(vlSelf, 
                                                          "@(posedge tb_io_5296.clk)");
        co_await vlSelfRef.__VtrigSched_h51bf4796__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_io_5296.clk)", 
                                                             "verif\\tb_io_5296.sv", 
                                                             85);
        tb_io_5296__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (tb_io_5296__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    __Vtask_tb_io_5296__DOT__write_io__9__d = 4U;
    __Vtask_tb_io_5296__DOT__write_io__9__a = 0x0eU;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_io_5296__DOT__ckot_clock)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:86: Assertion failed in %m: CKOT CLK/8 first half-period\n",3, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("verif\\tb_io_5296.sv", 86, "", false);
            }
        }
    }
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         23);
    vlSelfRef.tb_io_5296__DOT__addr = __Vtask_tb_io_5296__DOT__write_io__9__a;
    vlSelfRef.tb_io_5296__DOT__din = __Vtask_tb_io_5296__DOT__write_io__9__d;
    vlSelfRef.tb_io_5296__DOT__wr = 1U;
    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(vlSelf, 
                                                      "@(negedge tb_io_5296.clk)");
    co_await vlSelfRef.__VtrigSched_h51bf4857__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_io_5296.clk)", 
                                                         "verif\\tb_io_5296.sv", 
                                                         24);
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                          ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                          : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                             >> 2U)) 
                                        & (~ (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock))) 
                                       & (~ (IData)(vlSelfRef.tb_io_5296__DOT__ckot_clock)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_io_5296.sv:89: Assertion failed in %m: CNT programmable mode restore %b/%b/%b\n",6, 'M',vlSymsp->name(),"tb_io_5296", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(1U & ((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                             ? (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                                             : ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                                >> 2U)))
                             , '#',1,(IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)
                             , '#',1,vlSelfRef.tb_io_5296__DOT__ckot_clock);
                VL_STOP_MT("verif\\tb_io_5296.sv", 89, "", false);
            }
        }
    }
    vlSelfRef.tb_io_5296__DOT__wr = 0U;
    VL_WRITEF_NX("PASS 315-5296 ports, callbacks, direction, ID, and CNT latch\n",0);
    VL_FINISH_MT("verif\\tb_io_5296.sv", 91, "");
    co_return;
}

VlCoroutine Vtb_io_5296___024root___eval_initial__TOP__Vtiming__1(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "verif\\tb_io_5296.sv", 
                                             13);
        vlSelfRef.tb_io_5296__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_io_5296__DOT__clk)));
    }
    co_return;
}

bool Vtb_io_5296___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___trigger_anySet__act\n"); );
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

void Vtb_io_5296___024root___act_comb__TOP__0(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___act_comb__TOP__0\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_io_5296__DOT__dout = (0x000000ffU 
                                       & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                                                         >> 4U)))) 
                                          | (((8U & (IData)(vlSelfRef.tb_io_5296__DOT__addr))
                                               ? ((4U 
                                                   & (IData)(vlSelfRef.tb_io_5296__DOT__addr))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__addr))
                                                    ? (IData)(vlSelfRef.tb_io_5296__DOT__port_dir)
                                                    : (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_io_5296__DOT__addr))
                                                     ? 0x41U
                                                     : 0x47U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_io_5296__DOT__addr))
                                                     ? 0x45U
                                                     : 0x53U)))
                                               : ((1U 
                                                   & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                                      >> 
                                                      (7U 
                                                       & (IData)(vlSelfRef.tb_io_5296__DOT__addr))))
                                                   ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelfRef.tb_io_5296__DOT__addr))]
                                                   : (IData)(
                                                             (0x8877665544332211ULL 
                                                              >> 
                                                              (0x0000003fU 
                                                               & ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                                                                  << 3U)))))) 
                                             | (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                                                              >> 5U)))))));
}

void Vtb_io_5296___024root___nba_sequent__TOP__0(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___nba_sequent__TOP__0\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__tb_io_5296__DOT__mahjong_line;
    __Vdly__tb_io_5296__DOT__mahjong_line = 0;
    CData/*3:0*/ __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count;
    __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count = 0;
    CData/*0:0*/ __Vdly__tb_io_5296__DOT__ckot_clock;
    __Vdly__tb_io_5296__DOT__ckot_clock = 0;
    CData/*3:0*/ __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count;
    __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count = 0;
    CData/*0:0*/ __Vdly__tb_io_5296__DOT__cnt2_clock;
    __Vdly__tb_io_5296__DOT__cnt2_clock = 0;
    CData/*0:0*/ __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v0;
    __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_io_5296__DOT__dut__DOT__latch__v8;
    __VdlyVal__tb_io_5296__DOT__dut__DOT__latch__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_io_5296__DOT__dut__DOT__latch__v8;
    __VdlyDim0__tb_io_5296__DOT__dut__DOT__latch__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v8;
    __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v8 = 0;
    // Body
    __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v0 = 0U;
    __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v8 = 0U;
    __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count 
        = vlSelfRef.tb_io_5296__DOT__dut__DOT__ckot_div_count;
    __Vdly__tb_io_5296__DOT__ckot_clock = vlSelfRef.tb_io_5296__DOT__ckot_clock;
    __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count 
        = vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt2_div_count;
    __Vdly__tb_io_5296__DOT__cnt2_clock = vlSelfRef.tb_io_5296__DOT__cnt2_clock;
    __Vdly__tb_io_5296__DOT__mahjong_line = vlSelfRef.tb_io_5296__DOT__mahjong_line;
    if (vlSelfRef.tb_io_5296__DOT__reset) {
        __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v0 = 1U;
        __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count = 0U;
        __Vdly__tb_io_5296__DOT__ckot_clock = 0U;
        __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count = 0U;
        __Vdly__tb_io_5296__DOT__cnt2_clock = 0U;
        __Vdly__tb_io_5296__DOT__mahjong_line = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg = 0U;
        vlSelfRef.tb_io_5296__DOT__port_write = 0U;
        vlSelfRef.tb_io_5296__DOT__port_write_data = 0ULL;
        vlSelfRef.tb_io_5296__DOT__port_dir = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__ckot_div_count) 
             == (0x0000000fU & ((0x1842U >> (0x0000000cU 
                                             & ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                                >> 4U))) 
                                - (IData)(1U))))) {
            __Vdly__tb_io_5296__DOT__ckot_clock = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_io_5296__DOT__ckot_clock)));
            __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count = 0U;
        } else {
            __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__ckot_div_count)));
        }
        if ((8U & (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg))) {
            if (((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt2_div_count) 
                 == (0x0000000fU & ((0x1842U >> (0x0000000cU 
                                                 & ((IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg) 
                                                    >> 2U))) 
                                    - (IData)(1U))))) {
                __Vdly__tb_io_5296__DOT__cnt2_clock 
                    = (1U & (~ (IData)(vlSelfRef.tb_io_5296__DOT__cnt2_clock)));
                __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count = 0U;
            } else {
                __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt2_div_count)));
            }
        }
        if ((1U & (((IData)(vlSelfRef.tb_io_5296__DOT__port_write) 
                    >> 3U) & (IData)((vlSelfRef.tb_io_5296__DOT__port_write_data 
                                      >> 0x0000001aU))))) {
            __Vdly__tb_io_5296__DOT__mahjong_line = 
                (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_io_5296__DOT__mahjong_line)));
        }
        vlSelfRef.tb_io_5296__DOT__port_write = 0U;
        vlSelfRef.tb_io_5296__DOT__port_write_data = 0ULL;
        if (vlSelfRef.tb_io_5296__DOT__wr) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                                  >> 3U)))) {
                        __VdlyVal__tb_io_5296__DOT__dut__DOT__latch__v8 
                            = vlSelfRef.tb_io_5296__DOT__din;
                        __VdlyDim0__tb_io_5296__DOT__dut__DOT__latch__v8 
                            = (7U & (IData)(vlSelfRef.tb_io_5296__DOT__addr));
                        __VdlySet__tb_io_5296__DOT__dut__DOT__latch__v8 = 1U;
                    }
                    if ((8U & (IData)(vlSelfRef.tb_io_5296__DOT__addr))) {
                        if ((4U & (IData)(vlSelfRef.tb_io_5296__DOT__addr))) {
                            if ((2U & (IData)(vlSelfRef.tb_io_5296__DOT__addr))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_io_5296__DOT__addr)))) {
                                    __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count = 0U;
                                    __Vdly__tb_io_5296__DOT__ckot_clock = 0U;
                                    __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count = 0U;
                                    __Vdly__tb_io_5296__DOT__cnt2_clock = 0U;
                                    vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt_reg 
                                        = vlSelfRef.tb_io_5296__DOT__din;
                                }
                                if ((1U & (IData)(vlSelfRef.tb_io_5296__DOT__addr))) {
                                    vlSelfRef.tb_io_5296__DOT__port_write 
                                        = ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                           ^ (IData)(vlSelfRef.tb_io_5296__DOT__din));
                                    if ((1U & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                               ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0xffffffffffffff00ULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | (IData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                   ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[0U]
                                                                   : 0U))));
                                    }
                                    if ((2U & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                               ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0xffffffffffff00ffULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | ((QData)((IData)(
                                                                  ((2U 
                                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                    ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[1U]
                                                                    : 0U))) 
                                                  << 8U));
                                    }
                                    if ((4U & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                               ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0xffffffffff00ffffULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | ((QData)((IData)(
                                                                  ((4U 
                                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                    ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[2U]
                                                                    : 0U))) 
                                                  << 0x00000010U));
                                    }
                                    if ((8U & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                               ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0xffffffff00ffffffULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | ((QData)((IData)(
                                                                  ((8U 
                                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                    ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[3U]
                                                                    : 0U))) 
                                                  << 0x00000018U));
                                    }
                                    if ((0x00000010U 
                                         & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                            ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0xffffff00ffffffffULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | ((QData)((IData)(
                                                                  ((0x00000010U 
                                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                    ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[4U]
                                                                    : 0U))) 
                                                  << 0x00000020U));
                                    }
                                    if ((0x00000020U 
                                         & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                            ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0xffff00ffffffffffULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | ((QData)((IData)(
                                                                  ((0x00000020U 
                                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                    ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[5U]
                                                                    : 0U))) 
                                                  << 0x00000028U));
                                    }
                                    if ((0x00000040U 
                                         & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                            ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0xff00ffffffffffffULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | ((QData)((IData)(
                                                                  ((0x00000040U 
                                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                    ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[6U]
                                                                    : 0U))) 
                                                  << 0x00000030U));
                                    }
                                    if ((0x00000080U 
                                         & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                            ^ (IData)(vlSelfRef.tb_io_5296__DOT__din)))) {
                                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                                            = ((0x00ffffffffffffffULL 
                                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                                               | ((QData)((IData)(
                                                                  ((0x00000080U 
                                                                    & (IData)(vlSelfRef.tb_io_5296__DOT__din))
                                                                    ? vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[7U]
                                                                    : 0U))) 
                                                  << 0x00000038U));
                                    }
                                    vlSelfRef.tb_io_5296__DOT__port_dir 
                                        = vlSelfRef.tb_io_5296__DOT__din;
                                }
                            }
                        }
                    } else if ((1U & ((IData)(vlSelfRef.tb_io_5296__DOT__port_dir) 
                                      >> (7U & (IData)(vlSelfRef.tb_io_5296__DOT__addr))))) {
                        vlSelfRef.tb_io_5296__DOT__port_write 
                            = ((IData)(vlSelfRef.tb_io_5296__DOT__port_write) 
                               | (0x00ffU & ((IData)(1U) 
                                             << (7U 
                                                 & (IData)(vlSelfRef.tb_io_5296__DOT__addr)))));
                        vlSelfRef.tb_io_5296__DOT__port_write_data 
                            = (((~ (0x00000000000000ffULL 
                                    << (0x00000038U 
                                        & ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                                           << 3U)))) 
                                & vlSelfRef.tb_io_5296__DOT__port_write_data) 
                               | ((QData)((IData)(vlSelfRef.tb_io_5296__DOT__din)) 
                                  << (0x00000038U & 
                                      ((IData)(vlSelfRef.tb_io_5296__DOT__addr) 
                                       << 3U))));
                    }
                }
            }
        }
    }
    vlSelfRef.tb_io_5296__DOT__dut__DOT__ckot_div_count 
        = __Vdly__tb_io_5296__DOT__dut__DOT__ckot_div_count;
    vlSelfRef.tb_io_5296__DOT__ckot_clock = __Vdly__tb_io_5296__DOT__ckot_clock;
    vlSelfRef.tb_io_5296__DOT__dut__DOT__cnt2_div_count 
        = __Vdly__tb_io_5296__DOT__dut__DOT__cnt2_div_count;
    vlSelfRef.tb_io_5296__DOT__cnt2_clock = __Vdly__tb_io_5296__DOT__cnt2_clock;
    vlSelfRef.tb_io_5296__DOT__mahjong_line = __Vdly__tb_io_5296__DOT__mahjong_line;
    if (__VdlySet__tb_io_5296__DOT__dut__DOT__latch__v0) {
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[0U] = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[1U] = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[2U] = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[3U] = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[4U] = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[5U] = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[6U] = 0U;
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[7U] = 0U;
    }
    if (__VdlySet__tb_io_5296__DOT__dut__DOT__latch__v8) {
        vlSelfRef.tb_io_5296__DOT__dut__DOT__latch[__VdlyDim0__tb_io_5296__DOT__dut__DOT__latch__v8] 
            = __VdlyVal__tb_io_5296__DOT__dut__DOT__latch__v8;
    }
}

void Vtb_io_5296___024root___timing_ready(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___timing_ready\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h51bf4796__0.ready("@(posedge tb_io_5296.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h51bf4857__0.ready("@(negedge tb_io_5296.clk)");
    }
}

void Vtb_io_5296___024root___timing_resume(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___timing_resume\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h51bf4796__0.moveToResumeQueue(
                                                          "@(posedge tb_io_5296.clk)");
    vlSelfRef.__VtrigSched_h51bf4857__0.moveToResumeQueue(
                                                          "@(negedge tb_io_5296.clk)");
    vlSelfRef.__VtrigSched_h51bf4796__0.resume("@(posedge tb_io_5296.clk)");
    vlSelfRef.__VtrigSched_h51bf4857__0.resume("@(negedge tb_io_5296.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_io_5296___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_io_5296___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_io_5296___024root___eval_phase__act(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_phase__act\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_io_5296__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_io_5296__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0 
            = vlSelfRef.tb_io_5296__DOT__clk;
    }
    Vtb_io_5296___024root___timing_ready(vlSelf);
    Vtb_io_5296___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_io_5296___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_io_5296___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_io_5296___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_io_5296___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_io_5296___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_io_5296___024root___eval_phase__inact(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_phase__inact\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("verif\\tb_io_5296.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_io_5296___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_io_5296___024root___eval_phase__nba(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_phase__nba\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_io_5296___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_io_5296___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_io_5296___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vtb_io_5296___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_io_5296___024root___eval(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_io_5296___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verif\\tb_io_5296.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("verif\\tb_io_5296.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_io_5296___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("verif\\tb_io_5296.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_io_5296___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_io_5296___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_io_5296___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0(Vtb_io_5296___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root____VbeforeTrig_h51bf4796__0\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_io_5296__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_io_5296__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0 
        = vlSelfRef.tb_io_5296__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0(Vtb_io_5296___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root____VbeforeTrig_h51bf4857__0\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_io_5296__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_io_5296__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_io_5296__DOT__clk__0 
        = vlSelfRef.tb_io_5296__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4796__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h51bf4857__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_io_5296___024root___eval_debug_assertions(Vtb_io_5296___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_io_5296___024root___eval_debug_assertions\n"); );
    Vtb_io_5296__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

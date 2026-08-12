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
    // Body
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__reset = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__sx = 0x0105U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_analog__DOT__udout))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:43: Assertion failed in %m: uPD4701 +delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(vlSelfRef.tb_analog__DOT__udout));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 43, "", false);
    }
    vlSelfRef.tb_analog__DOT__sx = 0x00feU;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((3U != (IData)(vlSelfRef.tb_analog__DOT__udout))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:45: Assertion failed in %m: uPD4701 -delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(vlSelfRef.tb_analog__DOT__udout));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 45, "", false);
    }
    vlSelfRef.tb_analog__DOT__uaddr = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         46);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_analog__DOT__udout))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:47: Assertion failed in %m: uPD4701 high nibble mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(IData)(vlSelfRef.tb_analog__DOT__udout));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 47, "", false);
    }
    vlSelfRef.tb_analog__DOT__wheel_spinner = 0x0106U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((6U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:53: Assertion failed in %m: native spinner positive delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 53, "", false);
    }
    vlSelfRef.tb_analog__DOT__wheel_spinner = 0x00fdU;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((0xfdU != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:56: Assertion failed in %m: native spinner negative delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 56, "", false);
    }
    vlSelfRef.tb_analog__DOT__din = 2U;
    vlSelfRef.tb_analog__DOT__select = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__select = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         59);
    vlSelfRef.tb_analog__DOT__shift = 1U;
    if (VL_UNLIKELY(((0x80U != (0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:60: Assertion failed in %m: MSM6253 bit7 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 60, "", false);
    }
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__shift = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         61);
    if (VL_UNLIKELY(((0U != (0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:62: Assertion failed in %m: MSM6253 bit6 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 62, "", false);
    }
    vlSelfRef.tb_analog__DOT__shift = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__shift = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         63);
    if (VL_UNLIKELY(((0x80U != (0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:64: Assertion failed in %m: MSM6253 bit5 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__adc__DOT__shifter)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 64, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 1U;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((0xf8U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:70: Assertion failed in %m: digital left wheel delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 70, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 0U;
    vlSelfRef.tb_analog__DOT__digital_right = 1U;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__digital_right = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x0bU;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    if (VL_UNLIKELY(((8U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:73: Assertion failed in %m: digital right wheel delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 73, "", false);
    }
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((8U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:81: Assertion failed in %m: Hot Rod centre jitter escaped deadzone\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 81, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_x = 0x0cU;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__stick_x = 8U;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    if (VL_UNLIKELY(((1U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:85: Assertion failed in %m: Hot Rod deadzone entry mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 85, "", false);
    }
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__digital_left = 1U;
    vlSelfRef.tb_analog__DOT__digital_right = 1U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    if (VL_UNLIKELY(((1U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:89: Assertion failed in %m: Hot Rod deadzone exit chattered\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 89, "", false);
    }
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((1U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:95: Assertion failed in %m: opposing digital directions did not cancel\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 95, "", false);
    }
    vlSelfRef.tb_analog__DOT__digital_left = 0U;
    vlSelfRef.tb_analog__DOT__digital_right = 0U;
    vlSelfRef.tb_analog__DOT__stick_x = 0x7fU;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((0x0eU != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:102: Assertion failed in %m: Hot Rod full-scale delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 102, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_sensitivity = 2U;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((0x1cU != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:109: Assertion failed in %m: Hot Rod sensitivity level 2 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 109, "", false);
    }
    vlSelfRef.tb_analog__DOT__analogue_profile = 1U;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((5U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:116: Assertion failed in %m: Rough Racer full-scale delta mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 116, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_sensitivity = 3U;
    vlSelfRef.tb_analog__DOT__wheel_tick = 1U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    vlSelfRef.tb_analog__DOT__wheel_tick = 0U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((0x0fU != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:120: Assertion failed in %m: Rough Racer sensitivity level 3 mismatch: %02x\n",4, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 120, "", false);
    }
    vlSelfRef.tb_analog__DOT__stick_enable = 0U;
    vlSelfRef.tb_analog__DOT__stick_sensitivity = 8U;
    vlSelfRef.tb_analog__DOT__wheel_spinner = 0x0102U;
    Vtb_analog___024root____VbeforeTrig_h1cf7f4bc__0(vlSelf, 
                                                     "@(posedge tb_analog.clk)");
    co_await vlSelfRef.__VtrigSched_h1cf7f4bc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_analog.clk)", 
                                                         "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                                         35);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                         35);
    if (VL_UNLIKELY(((2U != (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel_out)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_analog.sv:125: Assertion failed in %m: native spinner was blocked with stick source disabled\n",3, 'M',vlSymsp->name(),"tb_analog", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 125, "", false);
    }
    VL_WRITEF_NX("PASS System 24 analog devices and D-pad wheel steering\n",0);
    VL_FINISH_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 128, "");
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
                                             "artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 
                                             5);
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
    SData/*13:0*/ tb_analog__DOT__wheel__DOT__curve_square;
    tb_analog__DOT__wheel__DOT__curve_square = 0;
    CData/*7:0*/ tb_analog__DOT__wheel__DOT__speed_mag;
    tb_analog__DOT__wheel__DOT__speed_mag = 0;
    SData/*8:0*/ tb_analog__DOT__wheel__DOT__speed_scaled;
    tb_analog__DOT__wheel__DOT__speed_scaled = 0;
    CData/*3:0*/ tb_analog__DOT__wheel__DOT__sensitivity;
    tb_analog__DOT__wheel__DOT__sensitivity = 0;
    CData/*7:0*/ tb_analog__DOT__wheel__DOT__stick_step;
    tb_analog__DOT__wheel__DOT__stick_step = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    // Body
    vlSelfRef.tb_analog__DOT__udout = (0x000000ffU 
                                       & ((0U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                           ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_x)
                                           : ((1U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                               ? (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_x) 
                                                     >> 8U))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                                   ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_y)
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_y) 
                                                      >> 8U))))));
    tb_analog__DOT__wheel__DOT__sensitivity = ((0U 
                                                == (IData)(vlSelfRef.tb_analog__DOT__stick_sensitivity))
                                                ? 1U
                                                : (IData)(vlSelfRef.tb_analog__DOT__stick_sensitivity));
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                           ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_analog__DOT__stick_x)))
                           : (IData)(vlSelfRef.tb_analog__DOT__stick_x)));
    __VdfgRegularize_h6e95ff9d_0_2 = (0x000000ffU & 
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
    tb_analog__DOT__wheel__DOT__curve_square = (0x00003fffU 
                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                   * (IData)(__VdfgRegularize_h6e95ff9d_0_2)));
    vlSelfRef.tb_analog__DOT__wheel__DOT__rough_sum 
        = (0x00007fffU & ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_accum) 
                          + ((IData)(tb_analog__DOT__wheel__DOT__sensitivity) 
                             * ((0x78U <= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs))
                                 ? 0x0500U : (0x000007ffU 
                                              & (((IData)(0x00000017U) 
                                                  * (IData)(tb_analog__DOT__wheel__DOT__curve_square)) 
                                                 >> 8U))))));
    __VdfgRegularize_h6e95ff9d_0_0 = (0x00007fffU & 
                                      ((IData)(1U) 
                                       + ((3U & ((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                                 >> 0x0000000cU)) 
                                          + (0x0000000fU 
                                             & ((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                                >> 0x0000000aU)))));
    tb_analog__DOT__wheel__DOT__speed_scaled = (0x000001ffU 
                                                & ((IData)(tb_analog__DOT__wheel__DOT__sensitivity) 
                                                   * 
                                                   (0x0000003fU 
                                                    & (((0x000eU 
                                                         < (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                         ? 0x0eU
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                                                       & (- (IData)(
                                                                    (0U 
                                                                     != (IData)(__VdfgRegularize_h6e95ff9d_0_2))))))));
    tb_analog__DOT__wheel__DOT__speed_mag = ((0x007fU 
                                              < (IData)(tb_analog__DOT__wheel__DOT__speed_scaled))
                                              ? 0x0000007fU
                                              : (0x000000ffU 
                                                 & (IData)(tb_analog__DOT__wheel__DOT__speed_scaled)));
    tb_analog__DOT__wheel__DOT__stick_step = 0U;
    if ((0U != (IData)(tb_analog__DOT__wheel__DOT__speed_mag))) {
        tb_analog__DOT__wheel__DOT__stick_step = (0x000000ffU 
                                                  & ((0x00000080U 
                                                      & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                                                      ? 
                                                     (0x000001ffU 
                                                      & (- (IData)(tb_analog__DOT__wheel__DOT__speed_mag)))
                                                      : (IData)(tb_analog__DOT__wheel__DOT__speed_mag)));
    }
    vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step 
        = tb_analog__DOT__wheel__DOT__stick_step;
    if (((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
         != (IData)(vlSelfRef.tb_analog__DOT__digital_right))) {
        vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step 
            = ((IData)(vlSelfRef.tb_analog__DOT__digital_left)
                ? 0xf8U : 8U);
    } else if (((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
                & (IData)(vlSelfRef.tb_analog__DOT__digital_right))) {
        vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step = 0U;
    }
}

void Vtb_analog___024root___nba_sequent__TOP__0(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___nba_sequent__TOP__0\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle;
    __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle = 0;
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
    __Vdly__tb_analog__DOT__wheel__DOT__stick_active 
        = vlSelfRef.tb_analog__DOT__wheel__DOT__stick_active;
    __Vdly__tb_analog__DOT__wheel_out = vlSelfRef.tb_analog__DOT__wheel_out;
    if (vlSelfRef.tb_analog__DOT__reset) {
        __Vdly__tb_analog__DOT__adc__DOT__shifter = 0U;
        __Vdly__tb_analog__DOT__upd__DOT__count_y = 0U;
        __Vdly__tb_analog__DOT__upd__DOT__count_x = 0U;
        __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle = 0U;
        __Vdly__tb_analog__DOT__wheel__DOT__stick_active = 0U;
        __Vdly__tb_analog__DOT__wheel_out = 0U;
        vlSelfRef.tb_analog__DOT__wheel__DOT__rough_accum = 0U;
        vlSelfRef.tb_analog__DOT__wheel__DOT__hw_toggle_d 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_spinner) 
                     >> 8U));
        vlSelfRef.tb_analog__DOT__wheel__DOT__rough_step = 0U;
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
        if (vlSelfRef.tb_analog__DOT__upd__DOT__toggle_y_d) {
            __Vdly__tb_analog__DOT__upd__DOT__count_y 
                = vlSelfRef.tb_analog__DOT__upd__DOT__count_y;
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
                                                         & (1U 
                                                            == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))) 
                                                        & ((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
                                                           == (IData)(vlSelfRef.tb_analog__DOT__digital_right)))
                                                        ? 
                                                       ((0x00000080U 
                                                         & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                                                         ? 
                                                        (- (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_step))
                                                         : (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_step))
                                                        : (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step))));
        }
        if (vlSelfRef.tb_analog__DOT__wheel_tick) {
            if ((((IData)(vlSelfRef.tb_analog__DOT__stick_enable) 
                  & (1U == (IData)(vlSelfRef.tb_analog__DOT__analogue_profile))) 
                 & ((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
                    == (IData)(vlSelfRef.tb_analog__DOT__digital_right)))) {
                if ((0U != (0x0000007fU & ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_sum) 
                                           >> 8U)))) {
                    __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle 
                        = (1U & (~ (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle)));
                    vlSelfRef.tb_analog__DOT__wheel__DOT__rough_step 
                        = (0x0000007fU & ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_sum) 
                                          >> 8U));
                }
                vlSelfRef.tb_analog__DOT__wheel__DOT__rough_accum 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_sum));
            } else {
                if (((IData)(vlSelfRef.tb_analog__DOT__stick_enable) 
                     & (0U != (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step)))) {
                    __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle 
                        = (1U & (~ (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle)));
                }
                vlSelfRef.tb_analog__DOT__wheel__DOT__rough_accum = 0U;
            }
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
        }
        vlSelfRef.tb_analog__DOT__wheel__DOT__hw_toggle_d 
            = (1U & ((IData)(vlSelfRef.tb_analog__DOT__wheel_spinner) 
                     >> 8U));
    }
    vlSelfRef.tb_analog__DOT__adc__DOT__shifter = __Vdly__tb_analog__DOT__adc__DOT__shifter;
    vlSelfRef.tb_analog__DOT__upd__DOT__count_y = __Vdly__tb_analog__DOT__upd__DOT__count_y;
    vlSelfRef.tb_analog__DOT__upd__DOT__count_x = __Vdly__tb_analog__DOT__upd__DOT__count_x;
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_active 
        = __Vdly__tb_analog__DOT__wheel__DOT__stick_active;
    vlSelfRef.tb_analog__DOT__wheel_out = __Vdly__tb_analog__DOT__wheel_out;
    vlSelfRef.tb_analog__DOT__upd__DOT__toggle_y_d = 0U;
    vlSelfRef.tb_analog__DOT__upd__DOT__toggle_x_d 
        = (1U & ((IData)(vlSelfRef.tb_analog__DOT__sx) 
                 >> 8U));
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle_d 
        = ((1U & (~ (IData)(vlSelfRef.tb_analog__DOT__reset))) 
           && (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle));
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_toggle 
        = __Vdly__tb_analog__DOT__wheel__DOT__stick_toggle;
}

void Vtb_analog___024root___nba_comb__TOP__0(Vtb_analog___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_analog___024root___nba_comb__TOP__0\n"); );
    Vtb_analog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*13:0*/ tb_analog__DOT__wheel__DOT__curve_square;
    tb_analog__DOT__wheel__DOT__curve_square = 0;
    CData/*7:0*/ tb_analog__DOT__wheel__DOT__speed_mag;
    tb_analog__DOT__wheel__DOT__speed_mag = 0;
    SData/*8:0*/ tb_analog__DOT__wheel__DOT__speed_scaled;
    tb_analog__DOT__wheel__DOT__speed_scaled = 0;
    CData/*3:0*/ tb_analog__DOT__wheel__DOT__sensitivity;
    tb_analog__DOT__wheel__DOT__sensitivity = 0;
    CData/*7:0*/ tb_analog__DOT__wheel__DOT__stick_step;
    tb_analog__DOT__wheel__DOT__stick_step = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    // Body
    tb_analog__DOT__wheel__DOT__sensitivity = ((0U 
                                                == (IData)(vlSelfRef.tb_analog__DOT__stick_sensitivity))
                                                ? 1U
                                                : (IData)(vlSelfRef.tb_analog__DOT__stick_sensitivity));
    vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                           ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_analog__DOT__stick_x)))
                           : (IData)(vlSelfRef.tb_analog__DOT__stick_x)));
    vlSelfRef.tb_analog__DOT__udout = (0x000000ffU 
                                       & ((0U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                           ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_x)
                                           : ((1U == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                               ? (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_x) 
                                                     >> 8U))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.tb_analog__DOT__uaddr))
                                                   ? (IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_y)
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_analog__DOT__upd__DOT__count_y) 
                                                      >> 8U))))));
    __VdfgRegularize_h6e95ff9d_0_2 = (0x000000ffU & 
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
    tb_analog__DOT__wheel__DOT__curve_square = (0x00003fffU 
                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                   * (IData)(__VdfgRegularize_h6e95ff9d_0_2)));
    vlSelfRef.tb_analog__DOT__wheel__DOT__rough_sum 
        = (0x00007fffU & ((IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__rough_accum) 
                          + ((IData)(tb_analog__DOT__wheel__DOT__sensitivity) 
                             * ((0x78U <= (IData)(vlSelfRef.tb_analog__DOT__wheel__DOT__stick_abs))
                                 ? 0x0500U : (0x000007ffU 
                                              & (((IData)(0x00000017U) 
                                                  * (IData)(tb_analog__DOT__wheel__DOT__curve_square)) 
                                                 >> 8U))))));
    __VdfgRegularize_h6e95ff9d_0_0 = (0x00007fffU & 
                                      ((IData)(1U) 
                                       + ((3U & ((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                                 >> 0x0000000cU)) 
                                          + (0x0000000fU 
                                             & ((IData)(tb_analog__DOT__wheel__DOT__curve_square) 
                                                >> 0x0000000aU)))));
    tb_analog__DOT__wheel__DOT__speed_scaled = (0x000001ffU 
                                                & ((IData)(tb_analog__DOT__wheel__DOT__sensitivity) 
                                                   * 
                                                   (0x0000003fU 
                                                    & (((0x000eU 
                                                         < (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                         ? 0x0eU
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                                                       & (- (IData)(
                                                                    (0U 
                                                                     != (IData)(__VdfgRegularize_h6e95ff9d_0_2))))))));
    tb_analog__DOT__wheel__DOT__speed_mag = ((0x007fU 
                                              < (IData)(tb_analog__DOT__wheel__DOT__speed_scaled))
                                              ? 0x0000007fU
                                              : (0x000000ffU 
                                                 & (IData)(tb_analog__DOT__wheel__DOT__speed_scaled)));
    tb_analog__DOT__wheel__DOT__stick_step = 0U;
    if ((0U != (IData)(tb_analog__DOT__wheel__DOT__speed_mag))) {
        tb_analog__DOT__wheel__DOT__stick_step = (0x000000ffU 
                                                  & ((0x00000080U 
                                                      & (IData)(vlSelfRef.tb_analog__DOT__stick_x))
                                                      ? 
                                                     (0x000001ffU 
                                                      & (- (IData)(tb_analog__DOT__wheel__DOT__speed_mag)))
                                                      : (IData)(tb_analog__DOT__wheel__DOT__speed_mag)));
    }
    vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step 
        = tb_analog__DOT__wheel__DOT__stick_step;
    if (((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
         != (IData)(vlSelfRef.tb_analog__DOT__digital_right))) {
        vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step 
            = ((IData)(vlSelfRef.tb_analog__DOT__digital_left)
                ? 0xf8U : 8U);
    } else if (((IData)(vlSelfRef.tb_analog__DOT__digital_left) 
                & (IData)(vlSelfRef.tb_analog__DOT__digital_right))) {
        vlSelfRef.tb_analog__DOT__wheel__DOT__steering_step = 0U;
    }
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
        VL_FATAL_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
            VL_FATAL_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_analog___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("artifacts/verilator/s24_obj_analog_sensitivity\\tb_analog.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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

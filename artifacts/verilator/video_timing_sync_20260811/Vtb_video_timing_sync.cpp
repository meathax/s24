// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_video_timing_sync__pch.h"

//============================================================
// Constructors

Vtb_video_timing_sync::Vtb_video_timing_sync(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_video_timing_sync__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_video_timing_sync::Vtb_video_timing_sync(const char* _vcname__)
    : Vtb_video_timing_sync(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_video_timing_sync::~Vtb_video_timing_sync() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_video_timing_sync___024root___eval_debug_assertions(Vtb_video_timing_sync___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_video_timing_sync___024root___eval_static(Vtb_video_timing_sync___024root* vlSelf);
void Vtb_video_timing_sync___024root___eval_initial(Vtb_video_timing_sync___024root* vlSelf);
void Vtb_video_timing_sync___024root___eval_settle(Vtb_video_timing_sync___024root* vlSelf);
void Vtb_video_timing_sync___024root___eval(Vtb_video_timing_sync___024root* vlSelf);

void Vtb_video_timing_sync::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_video_timing_sync::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_video_timing_sync___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_video_timing_sync___024root___eval_static(&(vlSymsp->TOP));
        Vtb_video_timing_sync___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_video_timing_sync___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_video_timing_sync___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_video_timing_sync::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_video_timing_sync::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_video_timing_sync::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_video_timing_sync___024root___eval_final(Vtb_video_timing_sync___024root* vlSelf);

VL_ATTR_COLD void Vtb_video_timing_sync::final() {
    contextp()->executingFinal(true);
    Vtb_video_timing_sync___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_video_timing_sync::hierName() const { return vlSymsp->name(); }
const char* Vtb_video_timing_sync::modelName() const { return "Vtb_video_timing_sync"; }
unsigned Vtb_video_timing_sync::threads() const { return 1; }
void Vtb_video_timing_sync::prepareClone() const { contextp()->prepareClone(); }
void Vtb_video_timing_sync::atClone() const {
    contextp()->threadPoolpOnClone();
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_io_5296__pch.h"

//============================================================
// Constructors

Vtb_io_5296::Vtb_io_5296(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_io_5296__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_io_5296::Vtb_io_5296(const char* _vcname__)
    : Vtb_io_5296(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_io_5296::~Vtb_io_5296() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_io_5296___024root___eval_debug_assertions(Vtb_io_5296___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_io_5296___024root___eval_static(Vtb_io_5296___024root* vlSelf);
void Vtb_io_5296___024root___eval_initial(Vtb_io_5296___024root* vlSelf);
void Vtb_io_5296___024root___eval_settle(Vtb_io_5296___024root* vlSelf);
void Vtb_io_5296___024root___eval(Vtb_io_5296___024root* vlSelf);

void Vtb_io_5296::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_io_5296::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_io_5296___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_io_5296___024root___eval_static(&(vlSymsp->TOP));
        Vtb_io_5296___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_io_5296___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_io_5296___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_io_5296::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_io_5296::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_io_5296::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_io_5296___024root___eval_final(Vtb_io_5296___024root* vlSelf);

VL_ATTR_COLD void Vtb_io_5296::final() {
    contextp()->executingFinal(true);
    Vtb_io_5296___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_io_5296::hierName() const { return vlSymsp->name(); }
const char* Vtb_io_5296::modelName() const { return "Vtb_io_5296"; }
unsigned Vtb_io_5296::threads() const { return 1; }
void Vtb_io_5296::prepareClone() const { contextp()->prepareClone(); }
void Vtb_io_5296::atClone() const {
    contextp()->threadPoolpOnClone();
}

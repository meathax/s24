// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_analog__pch.h"

//============================================================
// Constructors

Vtb_analog::Vtb_analog(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_analog__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_analog::Vtb_analog(const char* _vcname__)
    : Vtb_analog(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_analog::~Vtb_analog() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_analog___024root___eval_debug_assertions(Vtb_analog___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_analog___024root___eval_static(Vtb_analog___024root* vlSelf);
void Vtb_analog___024root___eval_initial(Vtb_analog___024root* vlSelf);
void Vtb_analog___024root___eval_settle(Vtb_analog___024root* vlSelf);
void Vtb_analog___024root___eval(Vtb_analog___024root* vlSelf);

void Vtb_analog::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_analog::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_analog___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_analog___024root___eval_static(&(vlSymsp->TOP));
        Vtb_analog___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_analog___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_analog___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_analog::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_analog::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_analog::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_analog___024root___eval_final(Vtb_analog___024root* vlSelf);

VL_ATTR_COLD void Vtb_analog::final() {
    contextp()->executingFinal(true);
    Vtb_analog___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_analog::hierName() const { return vlSymsp->name(); }
const char* Vtb_analog::modelName() const { return "Vtb_analog"; }
unsigned Vtb_analog::threads() const { return 1; }
void Vtb_analog::prepareClone() const { contextp()->prepareClone(); }
void Vtb_analog::atClone() const {
    contextp()->threadPoolpOnClone();
}

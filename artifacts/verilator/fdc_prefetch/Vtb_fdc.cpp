// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fdc__pch.h"

//============================================================
// Constructors

Vtb_fdc::Vtb_fdc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fdc__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fdc::Vtb_fdc(const char* _vcname__)
    : Vtb_fdc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fdc::~Vtb_fdc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fdc___024root___eval_debug_assertions(Vtb_fdc___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fdc___024root___eval_static(Vtb_fdc___024root* vlSelf);
void Vtb_fdc___024root___eval_initial(Vtb_fdc___024root* vlSelf);
void Vtb_fdc___024root___eval_settle(Vtb_fdc___024root* vlSelf);
void Vtb_fdc___024root___eval(Vtb_fdc___024root* vlSelf);

void Vtb_fdc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fdc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fdc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fdc___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fdc___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fdc___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fdc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fdc::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_fdc::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fdc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fdc___024root___eval_final(Vtb_fdc___024root* vlSelf);

VL_ATTR_COLD void Vtb_fdc::final() {
    contextp()->executingFinal(true);
    Vtb_fdc___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fdc::hierName() const { return vlSymsp->name(); }
const char* Vtb_fdc::modelName() const { return "Vtb_fdc"; }
unsigned Vtb_fdc::threads() const { return 1; }
void Vtb_fdc::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fdc::atClone() const {
    contextp()->threadPoolpOnClone();
}

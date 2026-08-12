// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sprite_ydiv__pch.h"

//============================================================
// Constructors

Vtb_sprite_ydiv::Vtb_sprite_ydiv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sprite_ydiv__Syms(contextp(), _vcname__, this)}
    , divisor{vlSymsp->TOP.divisor}
    , dividend{vlSymsp->TOP.dividend}
    , quotient{vlSymsp->TOP.quotient}
    , remainder{vlSymsp->TOP.remainder}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sprite_ydiv::Vtb_sprite_ydiv(const char* _vcname__)
    : Vtb_sprite_ydiv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sprite_ydiv::~Vtb_sprite_ydiv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sprite_ydiv___024root___eval_debug_assertions(Vtb_sprite_ydiv___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sprite_ydiv___024root___eval_static(Vtb_sprite_ydiv___024root* vlSelf);
void Vtb_sprite_ydiv___024root___eval_initial(Vtb_sprite_ydiv___024root* vlSelf);
void Vtb_sprite_ydiv___024root___eval_settle(Vtb_sprite_ydiv___024root* vlSelf);
void Vtb_sprite_ydiv___024root___eval(Vtb_sprite_ydiv___024root* vlSelf);

void Vtb_sprite_ydiv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sprite_ydiv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sprite_ydiv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sprite_ydiv___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sprite_ydiv___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sprite_ydiv___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sprite_ydiv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sprite_ydiv::eventsPending() { return false; }

uint64_t Vtb_sprite_ydiv::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_sprite_ydiv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sprite_ydiv___024root___eval_final(Vtb_sprite_ydiv___024root* vlSelf);

VL_ATTR_COLD void Vtb_sprite_ydiv::final() {
    contextp()->executingFinal(true);
    Vtb_sprite_ydiv___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sprite_ydiv::hierName() const { return vlSymsp->name(); }
const char* Vtb_sprite_ydiv::modelName() const { return "Vtb_sprite_ydiv"; }
unsigned Vtb_sprite_ydiv::threads() const { return 1; }
void Vtb_sprite_ydiv::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sprite_ydiv::atClone() const {
    contextp()->threadPoolpOnClone();
}

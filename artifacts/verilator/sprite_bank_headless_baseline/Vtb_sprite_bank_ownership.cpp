// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sprite_bank_ownership__pch.h"

//============================================================
// Constructors

Vtb_sprite_bank_ownership::Vtb_sprite_bank_ownership(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sprite_bank_ownership__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sprite_bank_ownership::Vtb_sprite_bank_ownership(const char* _vcname__)
    : Vtb_sprite_bank_ownership(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sprite_bank_ownership::~Vtb_sprite_bank_ownership() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sprite_bank_ownership___024root___eval_debug_assertions(Vtb_sprite_bank_ownership___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sprite_bank_ownership___024root___eval_static(Vtb_sprite_bank_ownership___024root* vlSelf);
void Vtb_sprite_bank_ownership___024root___eval_initial(Vtb_sprite_bank_ownership___024root* vlSelf);
void Vtb_sprite_bank_ownership___024root___eval_settle(Vtb_sprite_bank_ownership___024root* vlSelf);
void Vtb_sprite_bank_ownership___024root___eval(Vtb_sprite_bank_ownership___024root* vlSelf);

void Vtb_sprite_bank_ownership::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sprite_bank_ownership::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sprite_bank_ownership___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sprite_bank_ownership___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sprite_bank_ownership___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sprite_bank_ownership___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sprite_bank_ownership___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sprite_bank_ownership::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_sprite_bank_ownership::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_sprite_bank_ownership::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sprite_bank_ownership___024root___eval_final(Vtb_sprite_bank_ownership___024root* vlSelf);

VL_ATTR_COLD void Vtb_sprite_bank_ownership::final() {
    contextp()->executingFinal(true);
    Vtb_sprite_bank_ownership___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sprite_bank_ownership::hierName() const { return vlSymsp->name(); }
const char* Vtb_sprite_bank_ownership::modelName() const { return "Vtb_sprite_bank_ownership"; }
unsigned Vtb_sprite_bank_ownership::threads() const { return 1; }
void Vtb_sprite_bank_ownership::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sprite_bank_ownership::atClone() const {
    contextp()->threadPoolpOnClone();
}

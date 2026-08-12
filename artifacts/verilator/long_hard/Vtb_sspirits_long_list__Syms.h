// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SSPIRITS_LONG_LIST__SYMS_H_
#define VERILATED_VTB_SSPIRITS_LONG_LIST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sspirits_long_list.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sspirits_long_list___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_sspirits_long_list__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sspirits_long_list* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sspirits_long_list___024root TOP;

    // CONSTRUCTORS
    Vtb_sspirits_long_list__Syms(VerilatedContext* contextp, const char* namep, Vtb_sspirits_long_list* modelp);
    ~Vtb_sspirits_long_list__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};

#endif  // guard

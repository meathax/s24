// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SPRITE_CRKDOWN_LIST__SYMS_H_
#define VERILATED_VTB_SPRITE_CRKDOWN_LIST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sprite_crkdown_list.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sprite_crkdown_list___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_sprite_crkdown_list__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sprite_crkdown_list* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sprite_crkdown_list___024root TOP;

    // CONSTRUCTORS
    Vtb_sprite_crkdown_list__Syms(VerilatedContext* contextp, const char* namep, Vtb_sprite_crkdown_list* modelp);
    ~Vtb_sprite_crkdown_list__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};

#endif  // guard

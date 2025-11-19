// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENCODE4_2__SYMS_H_
#define VERILATED_VENCODE4_2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vencode4_2.h"

// INCLUDE MODULE CLASSES
#include "Vencode4_2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vencode4_2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vencode4_2* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vencode4_2___024root           TOP;

    // CONSTRUCTORS
    Vencode4_2__Syms(VerilatedContext* contextp, const char* namep, Vencode4_2* modelp);
    ~Vencode4_2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

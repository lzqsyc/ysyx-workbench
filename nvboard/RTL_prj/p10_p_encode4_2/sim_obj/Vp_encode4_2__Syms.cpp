// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vp_encode4_2__pch.h"
#include "Vp_encode4_2.h"
#include "Vp_encode4_2___024root.h"

// FUNCTIONS
Vp_encode4_2__Syms::~Vp_encode4_2__Syms()
{
}

Vp_encode4_2__Syms::Vp_encode4_2__Syms(VerilatedContext* contextp, const char* namep, Vp_encode4_2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(29);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdecode2_4__pch.h"
#include "Vdecode2_4.h"
#include "Vdecode2_4___024root.h"

// FUNCTIONS
Vdecode2_4__Syms::~Vdecode2_4__Syms()
{
}

Vdecode2_4__Syms::Vdecode2_4__Syms(VerilatedContext* contextp, const char* namep, Vdecode2_4* modelp)
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

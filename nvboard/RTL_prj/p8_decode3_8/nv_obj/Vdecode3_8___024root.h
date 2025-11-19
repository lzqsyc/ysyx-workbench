// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode3_8.h for the primary calling header

#ifndef VERILATED_VDECODE3_8___024ROOT_H_
#define VERILATED_VDECODE3_8___024ROOT_H_  // guard

#include "verilated.h"


class Vdecode3_8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecode3_8___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,2,0);
    VL_OUT8(y,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecode3_8__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecode3_8___024root(Vdecode3_8__Syms* symsp, const char* v__name);
    ~Vdecode3_8___024root();
    VL_UNCOPYABLE(Vdecode3_8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

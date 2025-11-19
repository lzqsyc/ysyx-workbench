// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux2_1.h for the primary calling header

#ifndef VERILATED_VMUX2_1___024ROOT_H_
#define VERILATED_VMUX2_1___024ROOT_H_  // guard

#include "verilated.h"


class Vmux2_1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux2_1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(s,0,0);
    VL_OUT8(y,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux2_1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux2_1___024root(Vmux2_1__Syms* symsp, const char* v__name);
    ~Vmux2_1___024root();
    VL_UNCOPYABLE(Vmux2_1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

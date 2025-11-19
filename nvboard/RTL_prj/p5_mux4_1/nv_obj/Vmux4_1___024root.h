// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux4_1.h for the primary calling header

#ifndef VERILATED_VMUX4_1___024ROOT_H_
#define VERILATED_VMUX4_1___024ROOT_H_  // guard

#include "verilated.h"


class Vmux4_1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux4_1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(s,1,0);
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
    Vmux4_1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux4_1___024root(Vmux4_1__Syms* symsp, const char* v__name);
    ~Vmux4_1___024root();
    VL_UNCOPYABLE(Vmux4_1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode2_4.h for the primary calling header

#ifndef VERILATED_VDECODE2_4___024ROOT_H_
#define VERILATED_VDECODE2_4___024ROOT_H_  // guard

#include "verilated.h"


class Vdecode2_4__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecode2_4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,1,0);
    VL_OUT8(y,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecode2_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecode2_4___024root(Vdecode2_4__Syms* symsp, const char* v__name);
    ~Vdecode2_4___024root();
    VL_UNCOPYABLE(Vdecode2_4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

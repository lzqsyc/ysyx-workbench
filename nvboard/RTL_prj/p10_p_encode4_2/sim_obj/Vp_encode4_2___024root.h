// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vp_encode4_2.h for the primary calling header

#ifndef VERILATED_VP_ENCODE4_2___024ROOT_H_
#define VERILATED_VP_ENCODE4_2___024ROOT_H_  // guard

#include "verilated.h"


class Vp_encode4_2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vp_encode4_2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,3,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vp_encode4_2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vp_encode4_2___024root(Vp_encode4_2__Syms* symsp, const char* v__name);
    ~Vp_encode4_2___024root();
    VL_UNCOPYABLE(Vp_encode4_2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

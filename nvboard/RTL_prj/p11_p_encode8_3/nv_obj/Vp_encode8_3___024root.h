// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vp_encode8_3.h for the primary calling header

#ifndef VERILATED_VP_ENCODE8_3___024ROOT_H_
#define VERILATED_VP_ENCODE8_3___024ROOT_H_  // guard

#include "verilated.h"


class Vp_encode8_3__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vp_encode8_3___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,7,0);
    VL_OUT8(y,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vp_encode8_3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vp_encode8_3___024root(Vp_encode8_3__Syms* symsp, const char* v__name);
    ~Vp_encode8_3___024root();
    VL_UNCOPYABLE(Vp_encode8_3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

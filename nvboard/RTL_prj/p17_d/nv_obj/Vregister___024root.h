// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"


class Vregister__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(set,0,0);
    VL_IN8(en,0,0);
    VL_IN8(d,7,0);
    VL_OUT8(q,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rstn__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__set__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister___024root(Vregister__Syms* symsp, const char* v__name);
    ~Vregister___024root();
    VL_UNCOPYABLE(Vregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

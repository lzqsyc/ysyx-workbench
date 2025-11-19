// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode3_8.h for the primary calling header

#include "Vdecode3_8__pch.h"
#include "Vdecode3_8__Syms.h"
#include "Vdecode3_8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode3_8___024root___dump_triggers__ico(Vdecode3_8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecode3_8___024root___eval_triggers__ico(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_triggers__ico\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecode3_8___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode3_8___024root___dump_triggers__act(Vdecode3_8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecode3_8___024root___eval_triggers__act(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_triggers__act\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecode3_8___024root___dump_triggers__act(vlSelf);
    }
#endif
}

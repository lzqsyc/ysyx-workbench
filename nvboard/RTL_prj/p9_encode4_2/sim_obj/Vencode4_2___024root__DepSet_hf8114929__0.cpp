// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode4_2.h for the primary calling header

#include "Vencode4_2__pch.h"
#include "Vencode4_2__Syms.h"
#include "Vencode4_2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode4_2___024root___dump_triggers__ico(Vencode4_2___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode4_2___024root___eval_triggers__ico(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_triggers__ico\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencode4_2___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode4_2___024root___dump_triggers__act(Vencode4_2___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode4_2___024root___eval_triggers__act(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_triggers__act\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencode4_2___024root___dump_triggers__act(vlSelf);
    }
#endif
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vp_encode8_3.h for the primary calling header

#include "Vp_encode8_3__pch.h"
#include "Vp_encode8_3__Syms.h"
#include "Vp_encode8_3___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vp_encode8_3___024root___dump_triggers__ico(Vp_encode8_3___024root* vlSelf);
#endif  // VL_DEBUG

void Vp_encode8_3___024root___eval_triggers__ico(Vp_encode8_3___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vp_encode8_3___024root___eval_triggers__ico\n"); );
    Vp_encode8_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vp_encode8_3___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vp_encode8_3___024root___dump_triggers__act(Vp_encode8_3___024root* vlSelf);
#endif  // VL_DEBUG

void Vp_encode8_3___024root___eval_triggers__act(Vp_encode8_3___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vp_encode8_3___024root___eval_triggers__act\n"); );
    Vp_encode8_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vp_encode8_3___024root___dump_triggers__act(vlSelf);
    }
#endif
}

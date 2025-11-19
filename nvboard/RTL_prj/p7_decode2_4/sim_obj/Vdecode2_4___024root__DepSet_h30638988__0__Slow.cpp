// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode2_4.h for the primary calling header

#include "Vdecode2_4__pch.h"
#include "Vdecode2_4__Syms.h"
#include "Vdecode2_4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode2_4___024root___dump_triggers__stl(Vdecode2_4___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecode2_4___024root___eval_triggers__stl(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___eval_triggers__stl\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecode2_4___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

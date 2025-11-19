// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode2_4.h for the primary calling header

#include "Vdecode2_4__pch.h"
#include "Vdecode2_4___024root.h"

VL_ATTR_COLD void Vdecode2_4___024root___eval_static(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___eval_static\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecode2_4___024root___eval_initial(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___eval_initial\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecode2_4___024root___eval_final(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___eval_final\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode2_4___024root___dump_triggers__stl(Vdecode2_4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdecode2_4___024root___eval_phase__stl(Vdecode2_4___024root* vlSelf);

VL_ATTR_COLD void Vdecode2_4___024root___eval_settle(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___eval_settle\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdecode2_4___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("prj_7/vsrc/decode2_4.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdecode2_4___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode2_4___024root___dump_triggers__stl(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___dump_triggers__stl\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdecode2_4___024root___ico_sequent__TOP__0(Vdecode2_4___024root* vlSelf);

VL_ATTR_COLD void Vdecode2_4___024root___eval_stl(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___eval_stl\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdecode2_4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdecode2_4___024root___eval_triggers__stl(Vdecode2_4___024root* vlSelf);

VL_ATTR_COLD bool Vdecode2_4___024root___eval_phase__stl(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___eval_phase__stl\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdecode2_4___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdecode2_4___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode2_4___024root___dump_triggers__ico(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___dump_triggers__ico\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode2_4___024root___dump_triggers__act(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___dump_triggers__act\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode2_4___024root___dump_triggers__nba(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___dump_triggers__nba\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecode2_4___024root___ctor_var_reset(Vdecode2_4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root___ctor_var_reset\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->x = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9409450202036847209ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11123243248953317070ull);
}

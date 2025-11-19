// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode3_8.h for the primary calling header

#include "Vdecode3_8__pch.h"
#include "Vdecode3_8___024root.h"

void Vdecode3_8___024root___ico_sequent__TOP__0(Vdecode3_8___024root* vlSelf);

void Vdecode3_8___024root___eval_ico(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_ico\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdecode3_8___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdecode3_8___024root___ico_sequent__TOP__0(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___ico_sequent__TOP__0\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.en) {
        vlSelfRef.decode3_8__DOT__i = 8U;
        vlSelfRef.y = ((0xf8U & (IData)(vlSelfRef.y)) 
                       | (((2U == (IData)(vlSelfRef.x)) 
                           << 2U) | (((1U == (IData)(vlSelfRef.x)) 
                                      << 1U) | (0U 
                                                == (IData)(vlSelfRef.x)))));
        vlSelfRef.y = ((0xc7U & (IData)(vlSelfRef.y)) 
                       | (((5U == (IData)(vlSelfRef.x)) 
                           << 5U) | (((4U == (IData)(vlSelfRef.x)) 
                                      << 4U) | ((3U 
                                                 == (IData)(vlSelfRef.x)) 
                                                << 3U))));
        vlSelfRef.y = ((0x3fU & (IData)(vlSelfRef.y)) 
                       | (((7U == (IData)(vlSelfRef.x)) 
                           << 7U) | ((6U == (IData)(vlSelfRef.x)) 
                                     << 6U)));
    } else {
        vlSelfRef.y = 0U;
    }
}

void Vdecode3_8___024root___eval_triggers__ico(Vdecode3_8___024root* vlSelf);

bool Vdecode3_8___024root___eval_phase__ico(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_phase__ico\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdecode3_8___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdecode3_8___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdecode3_8___024root___eval_act(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_act\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdecode3_8___024root___eval_nba(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_nba\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdecode3_8___024root___eval_triggers__act(Vdecode3_8___024root* vlSelf);

bool Vdecode3_8___024root___eval_phase__act(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_phase__act\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdecode3_8___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdecode3_8___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdecode3_8___024root___eval_phase__nba(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_phase__nba\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdecode3_8___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode3_8___024root___dump_triggers__ico(Vdecode3_8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode3_8___024root___dump_triggers__nba(Vdecode3_8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode3_8___024root___dump_triggers__act(Vdecode3_8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecode3_8___024root___eval(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vdecode3_8___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("prj_8/vsrc/decode3_8.v", 24, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdecode3_8___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdecode3_8___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("prj_8/vsrc/decode3_8.v", 24, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdecode3_8___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("prj_8/vsrc/decode3_8.v", 24, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdecode3_8___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdecode3_8___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdecode3_8___024root___eval_debug_assertions(Vdecode3_8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode3_8___024root___eval_debug_assertions\n"); );
    Vdecode3_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY(((vlSelfRef.x & 0xf8U)))) {
        Verilated::overWidthError("x");}
}
#endif  // VL_DEBUG

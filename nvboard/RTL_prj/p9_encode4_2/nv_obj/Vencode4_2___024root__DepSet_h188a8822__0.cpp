// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode4_2.h for the primary calling header

#include "Vencode4_2__pch.h"
#include "Vencode4_2___024root.h"

void Vencode4_2___024root___ico_sequent__TOP__0(Vencode4_2___024root* vlSelf);

void Vencode4_2___024root___eval_ico(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_ico\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vencode4_2___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vencode4_2__ConstPool__TABLE_h68c4a4c0_0;

VL_INLINE_OPT void Vencode4_2___024root___ico_sequent__TOP__0(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___ico_sequent__TOP__0\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.x) << 1U) | (IData)(vlSelfRef.en));
    vlSelfRef.y = Vencode4_2__ConstPool__TABLE_h68c4a4c0_0
        [__Vtableidx1];
}

void Vencode4_2___024root___eval_triggers__ico(Vencode4_2___024root* vlSelf);

bool Vencode4_2___024root___eval_phase__ico(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_phase__ico\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vencode4_2___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vencode4_2___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vencode4_2___024root___eval_act(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_act\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vencode4_2___024root___eval_nba(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_nba\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vencode4_2___024root___eval_triggers__act(Vencode4_2___024root* vlSelf);

bool Vencode4_2___024root___eval_phase__act(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_phase__act\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vencode4_2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vencode4_2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vencode4_2___024root___eval_phase__nba(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_phase__nba\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vencode4_2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode4_2___024root___dump_triggers__ico(Vencode4_2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode4_2___024root___dump_triggers__nba(Vencode4_2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode4_2___024root___dump_triggers__act(Vencode4_2___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode4_2___024root___eval(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vencode4_2___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("prj_9/vsrc/encode4_2.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vencode4_2___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vencode4_2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("prj_9/vsrc/encode4_2.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vencode4_2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("prj_9/vsrc/encode4_2.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vencode4_2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vencode4_2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vencode4_2___024root___eval_debug_assertions(Vencode4_2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode4_2___024root___eval_debug_assertions\n"); );
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY(((vlSelfRef.x & 0xf0U)))) {
        Verilated::overWidthError("x");}
}
#endif  // VL_DEBUG

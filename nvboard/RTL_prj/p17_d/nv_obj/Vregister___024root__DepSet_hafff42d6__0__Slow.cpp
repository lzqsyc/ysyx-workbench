// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "Vregister__pch.h"
#include "Vregister___024root.h"

VL_ATTR_COLD void Vregister___024root___eval_static(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_static\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rstn__0 = vlSelfRef.rstn;
    vlSelfRef.__Vtrigprevexpr___TOP__set__0 = vlSelfRef.set;
}

VL_ATTR_COLD void Vregister___024root___eval_initial(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_initial\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister___024root___eval_final(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_final\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister___024root___eval_settle(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_settle\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister___024root___dump_triggers__act(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___dump_triggers__act\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge set)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister___024root___dump_triggers__nba(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___dump_triggers__nba\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge set)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister___024root___ctor_var_reset(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___ctor_var_reset\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5377340664288042355ull);
    vlSelf->set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2556632445215442623ull);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1720370409040345145ull);
    vlSelf->q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8861071527689086543ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rstn__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3119765856848499067ull);
    vlSelf->__Vtrigprevexpr___TOP__set__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 720313250049257312ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,((0xffU & (IData)(vlSelfRef.top__DOT__my_alu__DOT____VdfgRegularize_h1891b338_0_0))),8);
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelfRef.top__DOT__my_alu__DOT____VdfgRegularize_h1891b338_0_0) 
                                    >> 8U))));
        bufp->chgCData(oldp+2,(vlSelfRef.top__DOT__my_alu__DOT__invert_b),8);
    }
    bufp->chgCData(oldp+3,(vlSelfRef.sw_a),8);
    bufp->chgCData(oldp+4,(vlSelfRef.sw_b),8);
    bufp->chgBit(oldp+5,(vlSelfRef.sel));
    bufp->chgBit(oldp+6,(vlSelfRef.cin));
    bufp->chgCData(oldp+7,(vlSelfRef.seg0),8);
    bufp->chgCData(oldp+8,(vlSelfRef.seg1),8);
    bufp->chgCData(oldp+9,(vlSelfRef.seg2),8);
    bufp->chgCData(oldp+10,(vlSelfRef.seg3),8);
    bufp->chgCData(oldp+11,(vlSelfRef.seg4),8);
    bufp->chgCData(oldp+12,(vlSelfRef.seg5),8);
    bufp->chgCData(oldp+13,(vlSelfRef.seg6),8);
    bufp->chgCData(oldp+14,(vlSelfRef.seg7),8);
    bufp->chgBit(oldp+15,(((IData)(vlSelfRef.sel) ? 
                           (((1U & ((IData)(vlSelfRef.sw_a) 
                                    >> 7U)) == (1U 
                                                & ((IData)(vlSelfRef.top__DOT__my_alu__DOT__invert_b) 
                                                   >> 7U))) 
                            & (IData)(vlSelfRef.top__DOT__my_alu__DOT____VdfgRegularize_h1891b338_0_2))
                            : (((1U & ((IData)(vlSelfRef.sw_a) 
                                       >> 7U)) == (1U 
                                                   & ((IData)(vlSelfRef.sw_b) 
                                                      >> 7U))) 
                               & (IData)(vlSelfRef.top__DOT__my_alu__DOT____VdfgRegularize_h1891b338_0_2)))));
    bufp->chgSData(oldp+16,((0x1ffU & ((IData)(vlSelfRef.sw_a) 
                                       + ((IData)(vlSelfRef.sw_b) 
                                          + (IData)(vlSelfRef.cin))))),9);
    bufp->chgBit(oldp+17,((1U & ((IData)(1U) - (IData)(vlSelfRef.cin)))));
    bufp->chgSData(oldp+18,((0x1ffU & ((IData)(vlSelfRef.sw_a) 
                                       + ((IData)(vlSelfRef.top__DOT__my_alu__DOT__invert_b) 
                                          + (1U & ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cin))))))),9);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

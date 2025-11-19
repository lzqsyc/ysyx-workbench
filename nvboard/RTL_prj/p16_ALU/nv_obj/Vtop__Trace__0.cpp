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
        bufp->chgCData(oldp+0,(vlSelfRef.top__DOT__sum),4);
        bufp->chgCData(oldp+1,(vlSelfRef.top__DOT__my_alu__DOT__able_b),4);
        bufp->chgCData(oldp+2,(vlSelfRef.top__DOT__my_alu__DOT__sub_sum),5);
        bufp->chgCData(oldp+3,(vlSelfRef.top__DOT__my_alu__DOT__add_sum),5);
    }
    bufp->chgCData(oldp+4,(vlSelfRef.a),4);
    bufp->chgCData(oldp+5,(vlSelfRef.b),4);
    bufp->chgCData(oldp+6,(vlSelfRef.sel),3);
    bufp->chgBit(oldp+7,(vlSelfRef.cin));
    bufp->chgCData(oldp+8,(vlSelfRef.seg0),8);
    bufp->chgCData(oldp+9,(vlSelfRef.seg1),8);
    bufp->chgCData(oldp+10,(vlSelfRef.seg2),8);
    bufp->chgCData(oldp+11,(vlSelfRef.seg3),8);
    bufp->chgCData(oldp+12,(vlSelfRef.seg4),8);
    bufp->chgCData(oldp+13,(vlSelfRef.seg5),8);
    bufp->chgCData(oldp+14,(vlSelfRef.seg6),8);
    bufp->chgCData(oldp+15,(vlSelfRef.seg7),8);
    bufp->chgBit(oldp+16,((1U & ((0U == (IData)(vlSelfRef.sel))
                                  ? ((IData)(vlSelfRef.top__DOT__my_alu__DOT__add_sum) 
                                     >> 4U) : ((1U 
                                                == (IData)(vlSelfRef.sel)) 
                                               & ((IData)(vlSelfRef.top__DOT__my_alu__DOT__sub_sum) 
                                                  >> 4U))))));
    bufp->chgBit(oldp+17,(((0U == (IData)(vlSelfRef.sel))
                            ? (((1U & ((IData)(vlSelfRef.a) 
                                       >> 3U)) == (1U 
                                                   & ((IData)(vlSelfRef.b) 
                                                      >> 3U))) 
                               & ((1U & ((IData)(vlSelfRef.top__DOT__my_alu__DOT__add_sum) 
                                         >> 3U)) != 
                                  (1U & ((IData)(vlSelfRef.a) 
                                         >> 3U)))) : 
                           ((1U == (IData)(vlSelfRef.sel)) 
                            & (((1U & ((IData)(vlSelfRef.a) 
                                       >> 3U)) == (1U 
                                                   & ((IData)(vlSelfRef.top__DOT__my_alu__DOT__able_b) 
                                                      >> 3U))) 
                               & ((1U & ((IData)(vlSelfRef.top__DOT__my_alu__DOT__sub_sum) 
                                         >> 3U)) != 
                                  (1U & ((IData)(vlSelfRef.a) 
                                         >> 3U))))))));
    bufp->chgBit(oldp+18,((1U & ((IData)(1U) - (IData)(vlSelfRef.cin)))));
    bufp->chgBit(oldp+19,((((1U & ((IData)(vlSelfRef.a) 
                                   >> 3U)) == (1U & 
                                               ((IData)(vlSelfRef.top__DOT__my_alu__DOT__able_b) 
                                                >> 3U))) 
                           & ((1U & ((IData)(vlSelfRef.top__DOT__my_alu__DOT__sub_sum) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.a) 
                                                    >> 3U))))));
    bufp->chgBit(oldp+20,((((1U & ((IData)(vlSelfRef.a) 
                                   >> 3U)) == (1U & 
                                               ((IData)(vlSelfRef.b) 
                                                >> 3U))) 
                           & ((1U & ((IData)(vlSelfRef.top__DOT__my_alu__DOT__add_sum) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.a) 
                                                    >> 3U))))));
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

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
        bufp->chgCData(oldp+0,(vlSelfRef.top__DOT__my_ram__DOT__ram[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.top__DOT__my_ram__DOT__ram[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.top__DOT__my_ram__DOT__ram[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.top__DOT__my_ram__DOT__ram[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__my_ram__DOT__ram[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.top__DOT__my_ram__DOT__ram[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.top__DOT__my_ram__DOT__ram[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__my_ram__DOT__ram[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__my_ram__DOT__ram[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__my_ram__DOT__ram[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.top__DOT__my_ram__DOT__ram[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__my_ram__DOT__ram[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__my_ram__DOT__ram[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__my_ram__DOT__ram[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__my_ram__DOT__ram[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__my_ram__DOT__ram[15]),8);
    }
    bufp->chgBit(oldp+16,(vlSelfRef.clk));
    bufp->chgBit(oldp+17,(vlSelfRef.we));
    bufp->chgCData(oldp+18,(vlSelfRef.w_addr),4);
    bufp->chgCData(oldp+19,(vlSelfRef.r_addr),4);
    bufp->chgCData(oldp+20,(vlSelfRef.w_data),8);
    bufp->chgCData(oldp+21,(vlSelfRef.r_data),8);
    bufp->chgCData(oldp+22,(vlSelfRef.seg0),8);
    bufp->chgCData(oldp+23,(vlSelfRef.seg1),8);
    bufp->chgCData(oldp+24,(vlSelfRef.seg2),8);
    bufp->chgCData(oldp+25,(vlSelfRef.seg3),8);
    bufp->chgCData(oldp+26,(vlSelfRef.seg4),8);
    bufp->chgCData(oldp+27,(vlSelfRef.seg5),8);
    bufp->chgCData(oldp+28,(vlSelfRef.seg6),8);
    bufp->chgCData(oldp+29,(vlSelfRef.seg7),8);
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode2_4__Syms.h"


VL_ATTR_COLD void Vdecode2_4___024root__trace_init_sub__TOP__0(Vdecode2_4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root__trace_init_sub__TOP__0\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode2_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdecode2_4___024root__trace_init_top(Vdecode2_4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root__trace_init_top\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdecode2_4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdecode2_4___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdecode2_4___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecode2_4___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecode2_4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdecode2_4___024root__trace_register(Vdecode2_4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root__trace_register\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdecode2_4___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdecode2_4___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdecode2_4___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdecode2_4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdecode2_4___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root__trace_const_0\n"); );
    // Init
    Vdecode2_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode2_4___024root*>(voidSelf);
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdecode2_4___024root__trace_full_0_sub_0(Vdecode2_4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdecode2_4___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root__trace_full_0\n"); );
    // Init
    Vdecode2_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode2_4___024root*>(voidSelf);
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdecode2_4___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdecode2_4___024root__trace_full_0_sub_0(Vdecode2_4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode2_4___024root__trace_full_0_sub_0\n"); );
    Vdecode2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.en));
    bufp->fullCData(oldp+2,(vlSelfRef.x),2);
    bufp->fullCData(oldp+3,(vlSelfRef.y),4);
}

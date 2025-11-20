// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2_4_1__Syms.h"


VL_ATTR_COLD void Vmux2_4_1___024root__trace_init_sub__TOP__0(Vmux2_4_1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_4_1___024root__trace_init_sub__TOP__0\n"); );
    Vmux2_4_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"x3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"x3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux2_4_1___024root__trace_init_top(Vmux2_4_1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_4_1___024root__trace_init_top\n"); );
    Vmux2_4_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux2_4_1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux2_4_1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmux2_4_1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux2_4_1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux2_4_1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux2_4_1___024root__trace_register(Vmux2_4_1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_4_1___024root__trace_register\n"); );
    Vmux2_4_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmux2_4_1___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmux2_4_1___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmux2_4_1___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmux2_4_1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux2_4_1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_4_1___024root__trace_const_0\n"); );
    // Init
    Vmux2_4_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2_4_1___024root*>(voidSelf);
    Vmux2_4_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmux2_4_1___024root__trace_full_0_sub_0(Vmux2_4_1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux2_4_1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_4_1___024root__trace_full_0\n"); );
    // Init
    Vmux2_4_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2_4_1___024root*>(voidSelf);
    Vmux2_4_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux2_4_1___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux2_4_1___024root__trace_full_0_sub_0(Vmux2_4_1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_4_1___024root__trace_full_0_sub_0\n"); );
    Vmux2_4_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.x0),2);
    bufp->fullCData(oldp+2,(vlSelfRef.x1),2);
    bufp->fullCData(oldp+3,(vlSelfRef.x2),2);
    bufp->fullCData(oldp+4,(vlSelfRef.x3),2);
    bufp->fullCData(oldp+5,(vlSelfRef.s),2);
    bufp->fullCData(oldp+6,(vlSelfRef.y),2);
}

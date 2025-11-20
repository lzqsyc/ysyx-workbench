// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux2_4_1__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux2_4_1::Vmux2_4_1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux2_4_1__Syms(contextp(), _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmux2_4_1::Vmux2_4_1(const char* _vcname__)
    : Vmux2_4_1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux2_4_1::~Vmux2_4_1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux2_4_1___024root___eval_debug_assertions(Vmux2_4_1___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux2_4_1___024root___eval_static(Vmux2_4_1___024root* vlSelf);
void Vmux2_4_1___024root___eval_initial(Vmux2_4_1___024root* vlSelf);
void Vmux2_4_1___024root___eval_settle(Vmux2_4_1___024root* vlSelf);
void Vmux2_4_1___024root___eval(Vmux2_4_1___024root* vlSelf);

void Vmux2_4_1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux2_4_1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux2_4_1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux2_4_1___024root___eval_static(&(vlSymsp->TOP));
        Vmux2_4_1___024root___eval_initial(&(vlSymsp->TOP));
        Vmux2_4_1___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux2_4_1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux2_4_1::eventsPending() { return false; }

uint64_t Vmux2_4_1::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux2_4_1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux2_4_1___024root___eval_final(Vmux2_4_1___024root* vlSelf);

VL_ATTR_COLD void Vmux2_4_1::final() {
    Vmux2_4_1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux2_4_1::hierName() const { return vlSymsp->name(); }
const char* Vmux2_4_1::modelName() const { return "Vmux2_4_1"; }
unsigned Vmux2_4_1::threads() const { return 1; }
void Vmux2_4_1::prepareClone() const { contextp()->prepareClone(); }
void Vmux2_4_1::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmux2_4_1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux2_4_1___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmux2_4_1___024root__trace_init_top(Vmux2_4_1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux2_4_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2_4_1___024root*>(voidSelf);
    Vmux2_4_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmux2_4_1___024root__trace_decl_types(tracep);
    Vmux2_4_1___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux2_4_1___024root__trace_register(Vmux2_4_1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux2_4_1::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux2_4_1::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux2_4_1___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vp_encode8_3__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vp_encode8_3::Vp_encode8_3(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vp_encode8_3__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vp_encode8_3::Vp_encode8_3(const char* _vcname__)
    : Vp_encode8_3(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vp_encode8_3::~Vp_encode8_3() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vp_encode8_3___024root___eval_debug_assertions(Vp_encode8_3___024root* vlSelf);
#endif  // VL_DEBUG
void Vp_encode8_3___024root___eval_static(Vp_encode8_3___024root* vlSelf);
void Vp_encode8_3___024root___eval_initial(Vp_encode8_3___024root* vlSelf);
void Vp_encode8_3___024root___eval_settle(Vp_encode8_3___024root* vlSelf);
void Vp_encode8_3___024root___eval(Vp_encode8_3___024root* vlSelf);

void Vp_encode8_3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vp_encode8_3::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vp_encode8_3___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vp_encode8_3___024root___eval_static(&(vlSymsp->TOP));
        Vp_encode8_3___024root___eval_initial(&(vlSymsp->TOP));
        Vp_encode8_3___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vp_encode8_3___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vp_encode8_3::eventsPending() { return false; }

uint64_t Vp_encode8_3::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vp_encode8_3::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vp_encode8_3___024root___eval_final(Vp_encode8_3___024root* vlSelf);

VL_ATTR_COLD void Vp_encode8_3::final() {
    Vp_encode8_3___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vp_encode8_3::hierName() const { return vlSymsp->name(); }
const char* Vp_encode8_3::modelName() const { return "Vp_encode8_3"; }
unsigned Vp_encode8_3::threads() const { return 1; }
void Vp_encode8_3::prepareClone() const { contextp()->prepareClone(); }
void Vp_encode8_3::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vp_encode8_3::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vp_encode8_3___024root__trace_decl_types(VerilatedVcd* tracep);

void Vp_encode8_3___024root__trace_init_top(Vp_encode8_3___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vp_encode8_3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vp_encode8_3___024root*>(voidSelf);
    Vp_encode8_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vp_encode8_3___024root__trace_decl_types(tracep);
    Vp_encode8_3___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vp_encode8_3___024root__trace_register(Vp_encode8_3___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vp_encode8_3::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vp_encode8_3::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vp_encode8_3___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

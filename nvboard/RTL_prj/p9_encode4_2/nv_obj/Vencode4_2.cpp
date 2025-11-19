// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencode4_2__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vencode4_2::Vencode4_2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencode4_2__Syms(contextp(), _vcname__, this)}
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

Vencode4_2::Vencode4_2(const char* _vcname__)
    : Vencode4_2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencode4_2::~Vencode4_2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencode4_2___024root___eval_debug_assertions(Vencode4_2___024root* vlSelf);
#endif  // VL_DEBUG
void Vencode4_2___024root___eval_static(Vencode4_2___024root* vlSelf);
void Vencode4_2___024root___eval_initial(Vencode4_2___024root* vlSelf);
void Vencode4_2___024root___eval_settle(Vencode4_2___024root* vlSelf);
void Vencode4_2___024root___eval(Vencode4_2___024root* vlSelf);

void Vencode4_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencode4_2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencode4_2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencode4_2___024root___eval_static(&(vlSymsp->TOP));
        Vencode4_2___024root___eval_initial(&(vlSymsp->TOP));
        Vencode4_2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencode4_2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencode4_2::eventsPending() { return false; }

uint64_t Vencode4_2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencode4_2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencode4_2___024root___eval_final(Vencode4_2___024root* vlSelf);

VL_ATTR_COLD void Vencode4_2::final() {
    Vencode4_2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencode4_2::hierName() const { return vlSymsp->name(); }
const char* Vencode4_2::modelName() const { return "Vencode4_2"; }
unsigned Vencode4_2::threads() const { return 1; }
void Vencode4_2::prepareClone() const { contextp()->prepareClone(); }
void Vencode4_2::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vencode4_2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vencode4_2___024root__trace_decl_types(VerilatedVcd* tracep);

void Vencode4_2___024root__trace_init_top(Vencode4_2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vencode4_2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode4_2___024root*>(voidSelf);
    Vencode4_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vencode4_2___024root__trace_decl_types(tracep);
    Vencode4_2___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vencode4_2___024root__trace_register(Vencode4_2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vencode4_2::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vencode4_2::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vencode4_2___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

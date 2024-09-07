// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntMulScycleV1_noparam__pch.h"

//============================================================
// Constructors

VIntMulScycleV1_noparam::VIntMulScycleV1_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VIntMulScycleV1_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , in0{vlSymsp->TOP.in0}
    , in1{vlSymsp->TOP.in1}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VIntMulScycleV1_noparam::VIntMulScycleV1_noparam(const char* _vcname__)
    : VIntMulScycleV1_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VIntMulScycleV1_noparam::~VIntMulScycleV1_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VIntMulScycleV1_noparam___024root___eval_debug_assertions(VIntMulScycleV1_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VIntMulScycleV1_noparam___024root___eval_static(VIntMulScycleV1_noparam___024root* vlSelf);
void VIntMulScycleV1_noparam___024root___eval_initial(VIntMulScycleV1_noparam___024root* vlSelf);
void VIntMulScycleV1_noparam___024root___eval_settle(VIntMulScycleV1_noparam___024root* vlSelf);
void VIntMulScycleV1_noparam___024root___eval(VIntMulScycleV1_noparam___024root* vlSelf);

void VIntMulScycleV1_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntMulScycleV1_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntMulScycleV1_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VIntMulScycleV1_noparam___024root___eval_static(&(vlSymsp->TOP));
        VIntMulScycleV1_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VIntMulScycleV1_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VIntMulScycleV1_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VIntMulScycleV1_noparam::eventsPending() { return false; }

uint64_t VIntMulScycleV1_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VIntMulScycleV1_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VIntMulScycleV1_noparam___024root___eval_final(VIntMulScycleV1_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulScycleV1_noparam::final() {
    VIntMulScycleV1_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VIntMulScycleV1_noparam::hierName() const { return vlSymsp->name(); }
const char* VIntMulScycleV1_noparam::modelName() const { return "VIntMulScycleV1_noparam"; }
unsigned VIntMulScycleV1_noparam::threads() const { return 1; }
void VIntMulScycleV1_noparam::prepareClone() const { contextp()->prepareClone(); }
void VIntMulScycleV1_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}

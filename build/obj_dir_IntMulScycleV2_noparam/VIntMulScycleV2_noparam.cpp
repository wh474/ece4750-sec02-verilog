// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntMulScycleV2_noparam__pch.h"

//============================================================
// Constructors

VIntMulScycleV2_noparam::VIntMulScycleV2_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VIntMulScycleV2_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , in_val{vlSymsp->TOP.in_val}
    , out_val{vlSymsp->TOP.out_val}
    , reset{vlSymsp->TOP.reset}
    , in0{vlSymsp->TOP.in0}
    , in1{vlSymsp->TOP.in1}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VIntMulScycleV2_noparam::VIntMulScycleV2_noparam(const char* _vcname__)
    : VIntMulScycleV2_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VIntMulScycleV2_noparam::~VIntMulScycleV2_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VIntMulScycleV2_noparam___024root___eval_debug_assertions(VIntMulScycleV2_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VIntMulScycleV2_noparam___024root___eval_static(VIntMulScycleV2_noparam___024root* vlSelf);
void VIntMulScycleV2_noparam___024root___eval_initial(VIntMulScycleV2_noparam___024root* vlSelf);
void VIntMulScycleV2_noparam___024root___eval_settle(VIntMulScycleV2_noparam___024root* vlSelf);
void VIntMulScycleV2_noparam___024root___eval(VIntMulScycleV2_noparam___024root* vlSelf);

void VIntMulScycleV2_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntMulScycleV2_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntMulScycleV2_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VIntMulScycleV2_noparam___024root___eval_static(&(vlSymsp->TOP));
        VIntMulScycleV2_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VIntMulScycleV2_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VIntMulScycleV2_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VIntMulScycleV2_noparam::eventsPending() { return false; }

uint64_t VIntMulScycleV2_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VIntMulScycleV2_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VIntMulScycleV2_noparam___024root___eval_final(VIntMulScycleV2_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulScycleV2_noparam::final() {
    VIntMulScycleV2_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VIntMulScycleV2_noparam::hierName() const { return vlSymsp->name(); }
const char* VIntMulScycleV2_noparam::modelName() const { return "VIntMulScycleV2_noparam"; }
unsigned VIntMulScycleV2_noparam::threads() const { return 1; }
void VIntMulScycleV2_noparam::prepareClone() const { contextp()->prepareClone(); }
void VIntMulScycleV2_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}

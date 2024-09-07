// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntMulScycleV3_noparam__pch.h"

//============================================================
// Constructors

VIntMulScycleV3_noparam::VIntMulScycleV3_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VIntMulScycleV3_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , istream_rdy{vlSymsp->TOP.istream_rdy}
    , istream_val{vlSymsp->TOP.istream_val}
    , ostream_rdy{vlSymsp->TOP.ostream_rdy}
    , ostream_val{vlSymsp->TOP.ostream_val}
    , ostream_msg{vlSymsp->TOP.ostream_msg}
    , istream_msg{vlSymsp->TOP.istream_msg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VIntMulScycleV3_noparam::VIntMulScycleV3_noparam(const char* _vcname__)
    : VIntMulScycleV3_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VIntMulScycleV3_noparam::~VIntMulScycleV3_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VIntMulScycleV3_noparam___024root___eval_debug_assertions(VIntMulScycleV3_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VIntMulScycleV3_noparam___024root___eval_static(VIntMulScycleV3_noparam___024root* vlSelf);
void VIntMulScycleV3_noparam___024root___eval_initial(VIntMulScycleV3_noparam___024root* vlSelf);
void VIntMulScycleV3_noparam___024root___eval_settle(VIntMulScycleV3_noparam___024root* vlSelf);
void VIntMulScycleV3_noparam___024root___eval(VIntMulScycleV3_noparam___024root* vlSelf);

void VIntMulScycleV3_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntMulScycleV3_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntMulScycleV3_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VIntMulScycleV3_noparam___024root___eval_static(&(vlSymsp->TOP));
        VIntMulScycleV3_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VIntMulScycleV3_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VIntMulScycleV3_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VIntMulScycleV3_noparam::eventsPending() { return false; }

uint64_t VIntMulScycleV3_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VIntMulScycleV3_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VIntMulScycleV3_noparam___024root___eval_final(VIntMulScycleV3_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulScycleV3_noparam::final() {
    VIntMulScycleV3_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VIntMulScycleV3_noparam::hierName() const { return vlSymsp->name(); }
const char* VIntMulScycleV3_noparam::modelName() const { return "VIntMulScycleV3_noparam"; }
unsigned VIntMulScycleV3_noparam::threads() const { return 1; }
void VIntMulScycleV3_noparam::prepareClone() const { contextp()->prepareClone(); }
void VIntMulScycleV3_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}

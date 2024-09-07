// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VIntMulScycleV1_noparam__pch.h"
#include "VIntMulScycleV1_noparam.h"
#include "VIntMulScycleV1_noparam___024root.h"

void VIntMulScycleV1_noparam___024root____Vdpiexp_IntMulScycleV1_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VIntMulScycleV1_noparam__Syms::~VIntMulScycleV1_noparam__Syms()
{
}

VIntMulScycleV1_noparam__Syms::VIntMulScycleV1_noparam__Syms(VerilatedContext* contextp, const char* namep, VIntMulScycleV1_noparam* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(8734);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_IntMulScycleV1_noparam__v.configure(this, name(), "IntMulScycleV1_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_IntMulScycleV1_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VIntMulScycleV1_noparam___024root____Vdpiexp_IntMulScycleV1_noparam__DOT__v__DOT__line_trace_TOP));
    }
}

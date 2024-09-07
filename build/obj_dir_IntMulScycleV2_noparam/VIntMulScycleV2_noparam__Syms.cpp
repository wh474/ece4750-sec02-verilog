// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VIntMulScycleV2_noparam__pch.h"
#include "VIntMulScycleV2_noparam.h"
#include "VIntMulScycleV2_noparam___024root.h"

void VIntMulScycleV2_noparam___024root____Vdpiexp_IntMulScycleV2_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VIntMulScycleV2_noparam__Syms::~VIntMulScycleV2_noparam__Syms()
{
}

VIntMulScycleV2_noparam__Syms::VIntMulScycleV2_noparam__Syms(VerilatedContext* contextp, const char* namep, VIntMulScycleV2_noparam* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(21058);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_IntMulScycleV2_noparam__v.configure(this, name(), "IntMulScycleV2_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_IntMulScycleV2_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VIntMulScycleV2_noparam___024root____Vdpiexp_IntMulScycleV2_noparam__DOT__v__DOT__line_trace_TOP));
    }
}

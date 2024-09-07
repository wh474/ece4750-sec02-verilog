// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINTMULSCYCLEV3_NOPARAM__SYMS_H_
#define VERILATED_VINTMULSCYCLEV3_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VIntMulScycleV3_noparam.h"

// INCLUDE MODULE CLASSES
#include "VIntMulScycleV3_noparam___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VIntMulScycleV3_noparam__Vcb_line_trace_t = void (*) (VIntMulScycleV3_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VIntMulScycleV3_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VIntMulScycleV3_noparam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VIntMulScycleV3_noparam___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_IntMulScycleV3_noparam__v;

    // CONSTRUCTORS
    VIntMulScycleV3_noparam__Syms(VerilatedContext* contextp, const char* namep, VIntMulScycleV3_noparam* modelp);
    ~VIntMulScycleV3_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

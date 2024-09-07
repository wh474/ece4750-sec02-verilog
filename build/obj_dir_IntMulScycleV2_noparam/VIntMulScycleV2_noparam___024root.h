// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntMulScycleV2_noparam.h for the primary calling header

#ifndef VERILATED_VINTMULSCYCLEV2_NOPARAM___024ROOT_H_
#define VERILATED_VINTMULSCYCLEV2_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VIntMulScycleV2_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VIntMulScycleV2_noparam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in_val,0,0);
    VL_OUT8(out_val,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(in0,31,0);
    VL_IN(in1,31,0);
    VL_OUT(out,31,0);
    IData/*31:0*/ IntMulScycleV2_noparam__DOT__v__DOT__in0_reg;
    IData/*31:0*/ IntMulScycleV2_noparam__DOT__v__DOT__in1_reg;
    VlWide<128>/*4095:0*/ IntMulScycleV2_noparam__DOT__v__DOT__str;
    IData/*31:0*/ IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VIntMulScycleV2_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VIntMulScycleV2_noparam___024root(VIntMulScycleV2_noparam__Syms* symsp, const char* v__name);
    ~VIntMulScycleV2_noparam___024root();
    VL_UNCOPYABLE(VIntMulScycleV2_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

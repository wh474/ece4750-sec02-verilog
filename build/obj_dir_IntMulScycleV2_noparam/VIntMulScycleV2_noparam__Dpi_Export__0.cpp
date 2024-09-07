// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VIntMulScycleV2_noparam.h"
#include "VIntMulScycleV2_noparam__Syms.h"
#include "verilated_dpi.h"


void VIntMulScycleV2_noparam::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root::line_trace\n"); );
    // Init
    VlWide<128>/*4095:0*/ trace_str__Vcvt;
    VL_ZERO_W(4096, trace_str__Vcvt);
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("line_trace");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VIntMulScycleV2_noparam__Vcb_line_trace_t __Vcb = (VIntMulScycleV2_noparam__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str + 0);
(*__Vcb)((VIntMulScycleV2_noparam__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    for (size_t trace_str__Vidx = 0; trace_str__Vidx < 1; ++trace_str__Vidx) VL_SET_SVBV_W(4096, trace_str + 128 * trace_str__Vidx, trace_str__Vcvt);
}

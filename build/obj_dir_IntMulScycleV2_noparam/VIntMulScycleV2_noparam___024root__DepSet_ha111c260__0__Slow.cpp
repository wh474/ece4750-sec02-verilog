// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV2_noparam.h for the primary calling header

#include "VIntMulScycleV2_noparam__pch.h"
#include "VIntMulScycleV2_noparam__Syms.h"
#include "VIntMulScycleV2_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___dump_triggers__stl(VIntMulScycleV2_noparam___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___eval_triggers__stl(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIntMulScycleV2_noparam___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

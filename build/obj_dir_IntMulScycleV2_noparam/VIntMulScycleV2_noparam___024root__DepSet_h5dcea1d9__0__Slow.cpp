// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV2_noparam.h for the primary calling header

#include "VIntMulScycleV2_noparam__pch.h"
#include "VIntMulScycleV2_noparam___024root.h"

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___eval_static(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___eval_initial(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___eval_final(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___dump_triggers__stl(VIntMulScycleV2_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIntMulScycleV2_noparam___024root___eval_phase__stl(VIntMulScycleV2_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___eval_settle(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VIntMulScycleV2_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("imul/IntMulScycleV2.v", 114, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIntMulScycleV2_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___dump_triggers__stl(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___stl_sequent__TOP__0(VIntMulScycleV2_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___eval_stl(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VIntMulScycleV2_noparam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___stl_sequent__TOP__0(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->out_val = (1U & (IData)(vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg));
    vlSelf->out = (vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg 
                   * vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg);
}

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___eval_triggers__stl(VIntMulScycleV2_noparam___024root* vlSelf);

VL_ATTR_COLD bool VIntMulScycleV2_noparam___024root___eval_phase__stl(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIntMulScycleV2_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VIntMulScycleV2_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___dump_triggers__act(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___dump_triggers__nba(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___ctor_var_reset(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->in0 = VL_RAND_RESET_I(32);
    vlSelf->in1 = VL_RAND_RESET_I(32);
    vlSelf->in_val = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(32);
    vlSelf->out_val = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg = VL_RAND_RESET_I(32);
    vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg = VL_RAND_RESET_I(32);
    vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(4096, vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__str);
    vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}

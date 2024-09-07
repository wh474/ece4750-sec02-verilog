// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV3_noparam.h for the primary calling header

#include "VIntMulScycleV3_noparam__pch.h"
#include "VIntMulScycleV3_noparam___024root.h"

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___eval_static(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___eval_initial(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___eval_final(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__stl(VIntMulScycleV3_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIntMulScycleV3_noparam___024root___eval_phase__stl(VIntMulScycleV3_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___eval_settle(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_settle\n"); );
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
            VIntMulScycleV3_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("imul/IntMulScycleV3.v", 111, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIntMulScycleV3_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__stl(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___stl_sequent__TOP__0(VIntMulScycleV3_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___eval_stl(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VIntMulScycleV3_noparam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___stl_sequent__TOP__0(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->istream_rdy = vlSelf->ostream_rdy;
    vlSelf->ostream_val = vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    vlSelf->ostream_msg = (vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg 
                           * vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg);
}

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___eval_triggers__stl(VIntMulScycleV3_noparam___024root* vlSelf);

VL_ATTR_COLD bool VIntMulScycleV3_noparam___024root___eval_phase__stl(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIntMulScycleV3_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VIntMulScycleV3_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__ico(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__act(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__nba(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___ctor_var_reset(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->istream_val = VL_RAND_RESET_I(1);
    vlSelf->ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->ostream_val = VL_RAND_RESET_I(1);
    vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg = VL_RAND_RESET_I(1);
    vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg = VL_RAND_RESET_I(32);
    vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__str);
    vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}

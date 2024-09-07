// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV2_noparam.h for the primary calling header

#include "VIntMulScycleV2_noparam__pch.h"
#include "VIntMulScycleV2_noparam___024root.h"

void VIntMulScycleV2_noparam___024root___eval_act(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_act\n"); );
}

void VIntMulScycleV2_noparam___024root___nba_sequent__TOP__0(VIntMulScycleV2_noparam___024root* vlSelf);

void VIntMulScycleV2_noparam___024root___eval_nba(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulScycleV2_noparam___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIntMulScycleV2_noparam___024root___nba_sequent__TOP__0(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg = 0U;
        vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg = 0U;
        vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg = 0U;
    } else {
        vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg 
            = (3U & (IData)(vlSelf->in_val));
        vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg 
            = vlSelf->in1;
        vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg 
            = vlSelf->in0;
    }
    vlSelf->out_val = (1U & (IData)(vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg));
    vlSelf->out = (vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg 
                   * vlSelf->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg);
}

void VIntMulScycleV2_noparam___024root___eval_triggers__act(VIntMulScycleV2_noparam___024root* vlSelf);

bool VIntMulScycleV2_noparam___024root___eval_phase__act(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIntMulScycleV2_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIntMulScycleV2_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIntMulScycleV2_noparam___024root___eval_phase__nba(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIntMulScycleV2_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___dump_triggers__nba(VIntMulScycleV2_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV2_noparam___024root___dump_triggers__act(VIntMulScycleV2_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulScycleV2_noparam___024root___eval(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIntMulScycleV2_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("imul/IntMulScycleV2.v", 114, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIntMulScycleV2_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("imul/IntMulScycleV2.v", 114, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIntMulScycleV2_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIntMulScycleV2_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIntMulScycleV2_noparam___024root___eval_debug_assertions(VIntMulScycleV2_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV2_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->in_val & 0xfeU))) {
        Verilated::overWidthError("in_val");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV1_noparam.h for the primary calling header

#include "VIntMulScycleV1_noparam__pch.h"
#include "VIntMulScycleV1_noparam___024root.h"

void VIntMulScycleV1_noparam___024root___eval_act(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___eval_act\n"); );
}

void VIntMulScycleV1_noparam___024root___nba_sequent__TOP__0(VIntMulScycleV1_noparam___024root* vlSelf);

void VIntMulScycleV1_noparam___024root___eval_nba(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulScycleV1_noparam___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIntMulScycleV1_noparam___024root___nba_sequent__TOP__0(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->IntMulScycleV1_noparam__DOT__v__DOT__in1_reg = 0U;
        vlSelf->IntMulScycleV1_noparam__DOT__v__DOT__in0_reg = 0U;
    } else {
        vlSelf->IntMulScycleV1_noparam__DOT__v__DOT__in1_reg 
            = vlSelf->in1;
        vlSelf->IntMulScycleV1_noparam__DOT__v__DOT__in0_reg 
            = vlSelf->in0;
    }
    vlSelf->out = (vlSelf->IntMulScycleV1_noparam__DOT__v__DOT__in0_reg 
                   * vlSelf->IntMulScycleV1_noparam__DOT__v__DOT__in1_reg);
}

void VIntMulScycleV1_noparam___024root___eval_triggers__act(VIntMulScycleV1_noparam___024root* vlSelf);

bool VIntMulScycleV1_noparam___024root___eval_phase__act(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIntMulScycleV1_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIntMulScycleV1_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIntMulScycleV1_noparam___024root___eval_phase__nba(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIntMulScycleV1_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV1_noparam___024root___dump_triggers__nba(VIntMulScycleV1_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV1_noparam___024root___dump_triggers__act(VIntMulScycleV1_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulScycleV1_noparam___024root___eval(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIntMulScycleV1_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("imul/IntMulScycleV1.v", 118, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIntMulScycleV1_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("imul/IntMulScycleV1.v", 118, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIntMulScycleV1_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIntMulScycleV1_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIntMulScycleV1_noparam___024root___eval_debug_assertions(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

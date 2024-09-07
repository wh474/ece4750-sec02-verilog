// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV3_noparam.h for the primary calling header

#include "VIntMulScycleV3_noparam__pch.h"
#include "VIntMulScycleV3_noparam___024root.h"

void VIntMulScycleV3_noparam___024root___ico_sequent__TOP__0(VIntMulScycleV3_noparam___024root* vlSelf);

void VIntMulScycleV3_noparam___024root___eval_ico(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VIntMulScycleV3_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIntMulScycleV3_noparam___024root___ico_sequent__TOP__0(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->istream_rdy = vlSelf->ostream_rdy;
}

void VIntMulScycleV3_noparam___024root___eval_triggers__ico(VIntMulScycleV3_noparam___024root* vlSelf);

bool VIntMulScycleV3_noparam___024root___eval_phase__ico(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VIntMulScycleV3_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VIntMulScycleV3_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VIntMulScycleV3_noparam___024root___eval_act(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_act\n"); );
}

void VIntMulScycleV3_noparam___024root___nba_sequent__TOP__0(VIntMulScycleV3_noparam___024root* vlSelf);

void VIntMulScycleV3_noparam___024root___eval_nba(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulScycleV3_noparam___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIntMulScycleV3_noparam___024root___nba_sequent__TOP__0(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg = 0U;
        vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg = 0U;
        vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg = 0U;
    } else if (vlSelf->ostream_rdy) {
        vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg 
            = vlSelf->istream_val;
        vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg 
            = (IData)(vlSelf->istream_msg);
        vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg 
            = (IData)((vlSelf->istream_msg >> 0x20U));
    }
    vlSelf->ostream_val = vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    vlSelf->ostream_msg = (vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg 
                           * vlSelf->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg);
}

void VIntMulScycleV3_noparam___024root___eval_triggers__act(VIntMulScycleV3_noparam___024root* vlSelf);

bool VIntMulScycleV3_noparam___024root___eval_phase__act(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIntMulScycleV3_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIntMulScycleV3_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIntMulScycleV3_noparam___024root___eval_phase__nba(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIntMulScycleV3_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__ico(VIntMulScycleV3_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__nba(VIntMulScycleV3_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__act(VIntMulScycleV3_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulScycleV3_noparam___024root___eval(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VIntMulScycleV3_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("imul/IntMulScycleV3.v", 111, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VIntMulScycleV3_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIntMulScycleV3_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("imul/IntMulScycleV3.v", 111, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIntMulScycleV3_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("imul/IntMulScycleV3.v", 111, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIntMulScycleV3_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIntMulScycleV3_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIntMulScycleV3_noparam___024root___eval_debug_assertions(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
    if (VL_UNLIKELY((vlSelf->ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG

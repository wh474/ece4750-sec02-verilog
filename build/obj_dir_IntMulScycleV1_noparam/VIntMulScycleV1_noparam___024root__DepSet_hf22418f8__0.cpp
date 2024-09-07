// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV1_noparam.h for the primary calling header

#include "VIntMulScycleV1_noparam__pch.h"
#include "VIntMulScycleV1_noparam__Syms.h"
#include "VIntMulScycleV1_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VIntMulScycleV1_noparam__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VIntMulScycleV1_noparam__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VIntMulScycleV1_noparam__ConstPool__CONST_h89919522_0;

void VIntMulScycleV1_noparam___024root____Vdpiexp_IntMulScycleV1_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root____Vdpiexp_IntMulScycleV1_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str
                  ,"%x|%x",0,32,vlSymsp->TOP.in0,32,
                  vlSymsp->TOP.in1);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str, vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U];
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U] 
        = IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str, VIntMulScycleV1_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, trace_str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
        = IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__in0_reg);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str, vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, trace_str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U];
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U] 
        = IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str, VIntMulScycleV1_noparam__ConstPool__CONST_h77bdfd62_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, trace_str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U];
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U] 
        = IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__in1_reg);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str, vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, trace_str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U];
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U] 
        = IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str, VIntMulScycleV1_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, trace_str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U];
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U] 
        = IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.out);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str, vlSymsp->TOP.IntMulScycleV1_noparam__DOT__v__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, trace_str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U];
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U] 
        = IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV1_noparam___024root___dump_triggers__act(VIntMulScycleV1_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulScycleV1_noparam___024root___eval_triggers__act(VIntMulScycleV1_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV1_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIntMulScycleV1_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}

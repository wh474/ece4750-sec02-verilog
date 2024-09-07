// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV3_noparam.h for the primary calling header

#include "VIntMulScycleV3_noparam__pch.h"
#include "VIntMulScycleV3_noparam__Syms.h"
#include "VIntMulScycleV3_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VIntMulScycleV3_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VIntMulScycleV3_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VIntMulScycleV3_noparam__ConstPool__CONST_haead36df_0;
extern const VlWide<128>/*4095:0*/ VIntMulScycleV3_noparam__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VIntMulScycleV3_noparam__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VIntMulScycleV3_noparam__ConstPool__CONST_h89919522_0;

void VIntMulScycleV3_noparam___024root____Vdpiexp_IntMulScycleV3_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root____Vdpiexp_IntMulScycleV3_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val = 0;
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace);
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace);
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val = 0;
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__trace;
    VL_ZERO_W(4096, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__trace);
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__char;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__char = 0;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__num;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str
                  ,"%x|%x",0,32,(IData)((vlSymsp->TOP.istream_msg 
                                         >> 0x20U)),
                  32,(IData)(vlSymsp->TOP.istream_msg));
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str);
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy 
        = vlSymsp->TOP.istream_rdy;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val 
        = vlSymsp->TOP.istream_val;
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, trace_str);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy) 
         & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    } else if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy) 
                & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val)))) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num 
            = IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace);
    } else if (((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str, VIntMulScycleV3_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace);
    } else if ((1U & ((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                      & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str, VIntMulScycleV3_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str, VIntMulScycleV3_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str, VIntMulScycleV3_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, trace_str);
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U];
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U] 
        = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str);
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val 
        = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace, trace_str);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    } else if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str, VIntMulScycleV3_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__trace);
    } else {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num 
            = IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str, VIntMulScycleV3_noparam__ConstPool__CONST_h77bdfd62_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, trace_str);
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U];
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U] 
        = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str);
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val 
        = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace, trace_str);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
    } else if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str, VIntMulScycleV3_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__trace);
    } else {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num 
            = IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VIntMulScycleV3_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
    vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
        = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.ostream_msg);
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__str);
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy 
        = vlSymsp->TOP.ostream_rdy;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val 
        = vlSymsp->TOP.ostream_val;
    VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, trace_str);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy) 
         & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    } else if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy) 
                & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val)))) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__num 
            = IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__trace);
    } else if (((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy)) 
                & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str, VIntMulScycleV3_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__trace);
    } else if ((1U & ((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy)) 
                      & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val))))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str, VIntMulScycleV3_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str, VIntMulScycleV3_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__trace);
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__num 
            = (IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__trace[0U];
        vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__char);
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__trace[0U] 
            = vlSymsp->TOP.IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__ico(VIntMulScycleV3_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulScycleV3_noparam___024root___eval_triggers__ico(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIntMulScycleV3_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulScycleV3_noparam___024root___dump_triggers__act(VIntMulScycleV3_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulScycleV3_noparam___024root___eval_triggers__act(VIntMulScycleV3_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulScycleV3_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIntMulScycleV3_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}

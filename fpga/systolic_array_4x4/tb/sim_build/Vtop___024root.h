// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(en,0,0);
        CData/*0:0*/ systolic_array_4x4__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__en;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst;
    };
    struct {
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst;
        CData/*0:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
        CData/*7:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    };
    struct {
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
        SData/*15:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
        IData/*31:0*/ __VactIterCount;
        VL_IN8(a_in[4],7,0);
        VL_IN8(b_in[4],7,0);
        VL_OUT16(c_out[4][4],15,0);
        VlUnpacked<CData/*7:0*/, 4> systolic_array_4x4__DOT__a_in;
        VlUnpacked<CData/*7:0*/, 4> systolic_array_4x4__DOT__b_in;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> systolic_array_4x4__DOT__c_out;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> systolic_array_4x4__DOT__a_wire;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 5> systolic_array_4x4__DOT__b_wire;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH = 8U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

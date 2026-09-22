// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array_4x4__DOT__a_in[0U] = vlSelfRef.a_in
        [0U];
    vlSelfRef.systolic_array_4x4__DOT__a_in[1U] = vlSelfRef.a_in
        [1U];
    vlSelfRef.systolic_array_4x4__DOT__a_in[2U] = vlSelfRef.a_in
        [2U];
    vlSelfRef.systolic_array_4x4__DOT__a_in[3U] = vlSelfRef.a_in
        [3U];
    vlSelfRef.systolic_array_4x4__DOT__b_in[0U] = vlSelfRef.b_in
        [0U];
    vlSelfRef.systolic_array_4x4__DOT__b_in[1U] = vlSelfRef.b_in
        [1U];
    vlSelfRef.systolic_array_4x4__DOT__b_in[2U] = vlSelfRef.b_in
        [2U];
    vlSelfRef.systolic_array_4x4__DOT__b_in[3U] = vlSelfRef.b_in
        [3U];
    vlSelfRef.systolic_array_4x4__DOT__clk = vlSelfRef.clk;
    vlSelfRef.systolic_array_4x4__DOT__rst = vlSelfRef.rst;
    vlSelfRef.systolic_array_4x4__DOT__en = vlSelfRef.en;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][0U] 
        = vlSelfRef.a_in[0U];
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][0U] 
        = vlSelfRef.a_in[1U];
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][0U] 
        = vlSelfRef.a_in[2U];
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][0U] 
        = vlSelfRef.a_in[3U];
    vlSelfRef.systolic_array_4x4__DOT__b_wire[0U][0U] 
        = vlSelfRef.b_in[0U];
    vlSelfRef.systolic_array_4x4__DOT__b_wire[0U][1U] 
        = vlSelfRef.b_in[1U];
    vlSelfRef.systolic_array_4x4__DOT__b_wire[0U][2U] 
        = vlSelfRef.b_in[2U];
    vlSelfRef.systolic_array_4x4__DOT__b_wire[0U][3U] 
        = vlSelfRef.b_in[3U];
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.systolic_array_4x4__DOT__clk;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst 
        = vlSelfRef.systolic_array_4x4__DOT__rst;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en 
        = vlSelfRef.systolic_array_4x4__DOT__en;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][3U];
    vlSelfRef.c_out[0U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][0U];
    vlSelfRef.c_out[0U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][1U];
    vlSelfRef.c_out[0U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][2U];
    vlSelfRef.c_out[0U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][3U];
    vlSelfRef.c_out[1U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][0U];
    vlSelfRef.c_out[1U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][1U];
    vlSelfRef.c_out[1U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][2U];
    vlSelfRef.c_out[1U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][3U];
    vlSelfRef.c_out[2U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][0U];
    vlSelfRef.c_out[2U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][1U];
    vlSelfRef.c_out[2U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][2U];
    vlSelfRef.c_out[2U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][3U];
    vlSelfRef.c_out[3U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][0U];
    vlSelfRef.c_out[3U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][1U];
    vlSelfRef.c_out[3U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][2U];
    vlSelfRef.c_out[3U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][3U];
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0;
    SData/*15:0*/ __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0;
    // Body
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    if (vlSelfRef.rst) {
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out = 0U;
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out = 0U;
    } else if (vlSelfRef.en) {
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [0U]
                                                             [0U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [0U]
                                                       [0U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [0U]
                                                             [1U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [0U]
                                                       [1U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [0U]
                                                             [2U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [0U]
                                                       [2U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [0U]
                                                             [3U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [0U]
                                                       [3U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [1U]
                                                             [0U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [1U]
                                                       [0U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [1U]
                                                             [1U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [1U]
                                                       [1U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [1U]
                                                             [2U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [1U]
                                                       [2U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [1U]
                                                             [3U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [1U]
                                                       [3U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [2U]
                                                             [0U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [2U]
                                                       [0U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [2U]
                                                             [1U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [2U]
                                                       [1U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [2U]
                                                             [2U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [2U]
                                                       [2U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [2U]
                                                             [3U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [2U]
                                                       [3U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [3U]
                                                             [0U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [3U]
                                                       [0U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [3U]
                                                             [1U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [3U]
                                                       [1U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [3U]
                                                             [2U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [3U]
                                                       [2U])))));
        __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
            = (0xffffU & ((IData)(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc) 
                          + VL_MULS_III(16, (0xffffU 
                                             & VL_EXTENDS_II(16,8, 
                                                             vlSelfRef.systolic_array_4x4__DOT__a_wire
                                                             [3U]
                                                             [3U])), 
                                        (0xffffU & 
                                         VL_EXTENDS_II(16,8, 
                                                       vlSelfRef.systolic_array_4x4__DOT__b_wire
                                                       [3U]
                                                       [3U])))));
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [0U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [0U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [0U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [0U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [0U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [0U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [0U][3U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [0U][3U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [1U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [1U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [1U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [1U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [1U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [1U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [1U][3U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [1U][3U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [2U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [2U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [2U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [2U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [2U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [2U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [2U][3U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [2U][3U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [3U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [3U][0U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [3U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [3U][1U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [3U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [3U][2U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out 
            = vlSelfRef.systolic_array_4x4__DOT__a_wire
            [3U][3U];
        vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out 
            = vlSelfRef.systolic_array_4x4__DOT__b_wire
            [3U][3U];
    }
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[0U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[1U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[2U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__c_out[3U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[0U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[1U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[1U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[2U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[2U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[3U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][0U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][1U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][2U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.systolic_array_4x4__DOT__a_wire[3U][4U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out;
    vlSelfRef.systolic_array_4x4__DOT__b_wire[4U][3U] 
        = vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out;
    vlSelfRef.c_out[0U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][0U];
    vlSelfRef.c_out[0U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][1U];
    vlSelfRef.c_out[0U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][2U];
    vlSelfRef.c_out[0U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [0U][3U];
    vlSelfRef.c_out[1U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][0U];
    vlSelfRef.c_out[1U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][1U];
    vlSelfRef.c_out[1U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][2U];
    vlSelfRef.c_out[1U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [1U][3U];
    vlSelfRef.c_out[2U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][0U];
    vlSelfRef.c_out[2U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][1U];
    vlSelfRef.c_out[2U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][2U];
    vlSelfRef.c_out[2U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [2U][3U];
    vlSelfRef.c_out[3U][0U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][0U];
    vlSelfRef.c_out[3U][1U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][1U];
    vlSelfRef.c_out[3U][2U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][2U];
    vlSelfRef.c_out[3U][3U] = vlSelfRef.systolic_array_4x4__DOT__c_out
        [3U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [0U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [1U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [2U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in 
        = vlSelfRef.systolic_array_4x4__DOT__a_wire
        [3U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [0U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [1U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [2U][3U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][0U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][1U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][2U];
    vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in 
        = vlSelfRef.systolic_array_4x4__DOT__b_wire
        [3U][3U];
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/ahmet/Desktop/photonic-inference-lab/fpga/systolic_array_4x4/tb/../rtl/systolic_array_4x4.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/ahmet/Desktop/photonic-inference-lab/fpga/systolic_array_4x4/tb/../rtl/systolic_array_4x4.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/ahmet/Desktop/photonic-inference-lab/fpga/systolic_array_4x4/tb/../rtl/systolic_array_4x4.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG

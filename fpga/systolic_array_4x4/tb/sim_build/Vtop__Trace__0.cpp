// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.en));
    bufp->chgCData(oldp+3,(vlSelfRef.a_in[0]),8);
    bufp->chgCData(oldp+4,(vlSelfRef.a_in[1]),8);
    bufp->chgCData(oldp+5,(vlSelfRef.a_in[2]),8);
    bufp->chgCData(oldp+6,(vlSelfRef.a_in[3]),8);
    bufp->chgCData(oldp+7,(vlSelfRef.b_in[0]),8);
    bufp->chgCData(oldp+8,(vlSelfRef.b_in[1]),8);
    bufp->chgCData(oldp+9,(vlSelfRef.b_in[2]),8);
    bufp->chgCData(oldp+10,(vlSelfRef.b_in[3]),8);
    bufp->chgSData(oldp+11,(vlSelfRef.c_out[0U][0U]),16);
    bufp->chgSData(oldp+12,(vlSelfRef.c_out[0U][1U]),16);
    bufp->chgSData(oldp+13,(vlSelfRef.c_out[0U][2U]),16);
    bufp->chgSData(oldp+14,(vlSelfRef.c_out[0U][3U]),16);
    bufp->chgSData(oldp+15,(vlSelfRef.c_out[1U][0U]),16);
    bufp->chgSData(oldp+16,(vlSelfRef.c_out[1U][1U]),16);
    bufp->chgSData(oldp+17,(vlSelfRef.c_out[1U][2U]),16);
    bufp->chgSData(oldp+18,(vlSelfRef.c_out[1U][3U]),16);
    bufp->chgSData(oldp+19,(vlSelfRef.c_out[2U][0U]),16);
    bufp->chgSData(oldp+20,(vlSelfRef.c_out[2U][1U]),16);
    bufp->chgSData(oldp+21,(vlSelfRef.c_out[2U][2U]),16);
    bufp->chgSData(oldp+22,(vlSelfRef.c_out[2U][3U]),16);
    bufp->chgSData(oldp+23,(vlSelfRef.c_out[3U][0U]),16);
    bufp->chgSData(oldp+24,(vlSelfRef.c_out[3U][1U]),16);
    bufp->chgSData(oldp+25,(vlSelfRef.c_out[3U][2U]),16);
    bufp->chgSData(oldp+26,(vlSelfRef.c_out[3U][3U]),16);
    bufp->chgBit(oldp+27,(vlSelfRef.systolic_array_4x4__DOT__clk));
    bufp->chgBit(oldp+28,(vlSelfRef.systolic_array_4x4__DOT__rst));
    bufp->chgBit(oldp+29,(vlSelfRef.systolic_array_4x4__DOT__en));
    bufp->chgCData(oldp+30,(vlSelfRef.systolic_array_4x4__DOT__a_in[0]),8);
    bufp->chgCData(oldp+31,(vlSelfRef.systolic_array_4x4__DOT__a_in[1]),8);
    bufp->chgCData(oldp+32,(vlSelfRef.systolic_array_4x4__DOT__a_in[2]),8);
    bufp->chgCData(oldp+33,(vlSelfRef.systolic_array_4x4__DOT__a_in[3]),8);
    bufp->chgCData(oldp+34,(vlSelfRef.systolic_array_4x4__DOT__b_in[0]),8);
    bufp->chgCData(oldp+35,(vlSelfRef.systolic_array_4x4__DOT__b_in[1]),8);
    bufp->chgCData(oldp+36,(vlSelfRef.systolic_array_4x4__DOT__b_in[2]),8);
    bufp->chgCData(oldp+37,(vlSelfRef.systolic_array_4x4__DOT__b_in[3]),8);
    bufp->chgSData(oldp+38,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [0U][0U]),16);
    bufp->chgSData(oldp+39,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [0U][1U]),16);
    bufp->chgSData(oldp+40,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [0U][2U]),16);
    bufp->chgSData(oldp+41,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [0U][3U]),16);
    bufp->chgSData(oldp+42,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [1U][0U]),16);
    bufp->chgSData(oldp+43,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [1U][1U]),16);
    bufp->chgSData(oldp+44,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [1U][2U]),16);
    bufp->chgSData(oldp+45,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [1U][3U]),16);
    bufp->chgSData(oldp+46,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [2U][0U]),16);
    bufp->chgSData(oldp+47,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [2U][1U]),16);
    bufp->chgSData(oldp+48,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [2U][2U]),16);
    bufp->chgSData(oldp+49,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [2U][3U]),16);
    bufp->chgSData(oldp+50,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [3U][0U]),16);
    bufp->chgSData(oldp+51,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [3U][1U]),16);
    bufp->chgSData(oldp+52,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [3U][2U]),16);
    bufp->chgSData(oldp+53,(vlSelfRef.systolic_array_4x4__DOT__c_out
                            [3U][3U]),16);
    bufp->chgCData(oldp+54,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [0U][0U]),8);
    bufp->chgCData(oldp+55,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [0U][1U]),8);
    bufp->chgCData(oldp+56,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [0U][2U]),8);
    bufp->chgCData(oldp+57,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [0U][3U]),8);
    bufp->chgCData(oldp+58,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [0U][4U]),8);
    bufp->chgCData(oldp+59,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [1U][0U]),8);
    bufp->chgCData(oldp+60,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [1U][1U]),8);
    bufp->chgCData(oldp+61,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [1U][2U]),8);
    bufp->chgCData(oldp+62,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [1U][3U]),8);
    bufp->chgCData(oldp+63,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [1U][4U]),8);
    bufp->chgCData(oldp+64,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [2U][0U]),8);
    bufp->chgCData(oldp+65,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [2U][1U]),8);
    bufp->chgCData(oldp+66,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [2U][2U]),8);
    bufp->chgCData(oldp+67,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [2U][3U]),8);
    bufp->chgCData(oldp+68,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [2U][4U]),8);
    bufp->chgCData(oldp+69,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [3U][0U]),8);
    bufp->chgCData(oldp+70,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [3U][1U]),8);
    bufp->chgCData(oldp+71,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [3U][2U]),8);
    bufp->chgCData(oldp+72,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [3U][3U]),8);
    bufp->chgCData(oldp+73,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                            [3U][4U]),8);
    bufp->chgCData(oldp+74,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [0U][0U]),8);
    bufp->chgCData(oldp+75,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [0U][1U]),8);
    bufp->chgCData(oldp+76,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [0U][2U]),8);
    bufp->chgCData(oldp+77,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [0U][3U]),8);
    bufp->chgCData(oldp+78,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [1U][0U]),8);
    bufp->chgCData(oldp+79,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [1U][1U]),8);
    bufp->chgCData(oldp+80,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [1U][2U]),8);
    bufp->chgCData(oldp+81,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [1U][3U]),8);
    bufp->chgCData(oldp+82,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [2U][0U]),8);
    bufp->chgCData(oldp+83,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [2U][1U]),8);
    bufp->chgCData(oldp+84,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [2U][2U]),8);
    bufp->chgCData(oldp+85,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [2U][3U]),8);
    bufp->chgCData(oldp+86,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [3U][0U]),8);
    bufp->chgCData(oldp+87,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [3U][1U]),8);
    bufp->chgCData(oldp+88,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [3U][2U]),8);
    bufp->chgCData(oldp+89,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [3U][3U]),8);
    bufp->chgCData(oldp+90,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [4U][0U]),8);
    bufp->chgCData(oldp+91,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [4U][1U]),8);
    bufp->chgCData(oldp+92,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [4U][2U]),8);
    bufp->chgCData(oldp+93,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                            [4U][3U]),8);
    bufp->chgBit(oldp+94,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+95,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+96,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+97,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+98,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+99,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+100,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+101,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+102,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+103,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+104,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+105,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+106,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+107,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+108,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+109,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+110,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+111,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+112,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+113,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+114,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+115,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+116,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+117,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+118,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+119,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+120,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+121,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+122,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+123,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+124,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+125,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+126,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+127,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+128,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+129,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+130,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+131,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+132,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+133,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+134,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+135,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+136,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+137,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+138,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+139,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+140,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+141,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+142,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+143,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+144,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+145,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+146,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+147,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+148,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+149,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+150,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+151,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+152,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+153,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+154,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+155,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+156,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+157,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+158,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+159,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+160,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+161,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+162,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+163,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+164,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+165,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+166,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+167,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+168,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+169,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+170,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+171,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+172,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+173,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+174,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+175,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+176,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+177,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+178,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+179,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+180,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+181,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+182,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+183,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+184,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+185,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+186,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+187,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+188,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+189,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+190,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+191,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+192,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+193,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+194,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+195,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+196,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+197,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+198,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+199,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+200,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+201,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+202,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+203,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+204,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+205,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+206,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+207,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+208,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+209,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+210,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+211,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+212,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+213,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->chgBit(oldp+214,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+215,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->chgBit(oldp+216,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->chgCData(oldp+217,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->chgCData(oldp+218,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->chgCData(oldp+219,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->chgCData(oldp+220,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->chgSData(oldp+221,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("c_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+12,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+16,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+20,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+24,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("systolic_array_4x4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("c_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+39,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+43,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+47,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+51,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+55,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+60,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+65,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+70,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("b_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+75,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+79,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+83,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+87,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+91,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+95,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+103,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+110,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+111,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+117,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+119,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+127,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+143,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+151,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+159,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+165,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+167,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+189,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+191,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+195,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+197,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+199,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+203,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+204,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+206,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+207,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+211,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+212,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+215,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+223,(8U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst));
    bufp->fullBit(oldp+3,(vlSelfRef.en));
    bufp->fullCData(oldp+4,(vlSelfRef.a_in[0]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.a_in[1]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.a_in[2]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.a_in[3]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.b_in[0]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.b_in[1]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.b_in[2]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.b_in[3]),8);
    bufp->fullSData(oldp+12,(vlSelfRef.c_out[0U][0U]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.c_out[0U][1U]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.c_out[0U][2U]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.c_out[0U][3U]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.c_out[1U][0U]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.c_out[1U][1U]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.c_out[1U][2U]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.c_out[1U][3U]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.c_out[2U][0U]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.c_out[2U][1U]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.c_out[2U][2U]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.c_out[2U][3U]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.c_out[3U][0U]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.c_out[3U][1U]),16);
    bufp->fullSData(oldp+26,(vlSelfRef.c_out[3U][2U]),16);
    bufp->fullSData(oldp+27,(vlSelfRef.c_out[3U][3U]),16);
    bufp->fullBit(oldp+28,(vlSelfRef.systolic_array_4x4__DOT__clk));
    bufp->fullBit(oldp+29,(vlSelfRef.systolic_array_4x4__DOT__rst));
    bufp->fullBit(oldp+30,(vlSelfRef.systolic_array_4x4__DOT__en));
    bufp->fullCData(oldp+31,(vlSelfRef.systolic_array_4x4__DOT__a_in[0]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.systolic_array_4x4__DOT__a_in[1]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.systolic_array_4x4__DOT__a_in[2]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.systolic_array_4x4__DOT__a_in[3]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.systolic_array_4x4__DOT__b_in[0]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.systolic_array_4x4__DOT__b_in[1]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.systolic_array_4x4__DOT__b_in[2]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.systolic_array_4x4__DOT__b_in[3]),8);
    bufp->fullSData(oldp+39,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [0U][0U]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [0U][1U]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [0U][2U]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [0U][3U]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [1U][0U]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [1U][1U]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [1U][2U]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [1U][3U]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [2U][0U]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [2U][1U]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [2U][2U]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [2U][3U]),16);
    bufp->fullSData(oldp+51,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [3U][0U]),16);
    bufp->fullSData(oldp+52,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [3U][1U]),16);
    bufp->fullSData(oldp+53,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [3U][2U]),16);
    bufp->fullSData(oldp+54,(vlSelfRef.systolic_array_4x4__DOT__c_out
                             [3U][3U]),16);
    bufp->fullCData(oldp+55,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [0U][0U]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [0U][1U]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [0U][2U]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [0U][3U]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [0U][4U]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [1U][0U]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [1U][1U]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [1U][2U]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [1U][3U]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [1U][4U]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [2U][0U]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [2U][1U]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [2U][2U]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [2U][3U]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [2U][4U]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [3U][0U]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [3U][1U]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [3U][2U]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [3U][3U]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.systolic_array_4x4__DOT__a_wire
                             [3U][4U]),8);
    bufp->fullCData(oldp+75,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [0U][0U]),8);
    bufp->fullCData(oldp+76,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [0U][1U]),8);
    bufp->fullCData(oldp+77,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [0U][2U]),8);
    bufp->fullCData(oldp+78,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [0U][3U]),8);
    bufp->fullCData(oldp+79,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [1U][0U]),8);
    bufp->fullCData(oldp+80,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [1U][1U]),8);
    bufp->fullCData(oldp+81,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [1U][2U]),8);
    bufp->fullCData(oldp+82,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [1U][3U]),8);
    bufp->fullCData(oldp+83,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [2U][0U]),8);
    bufp->fullCData(oldp+84,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [2U][1U]),8);
    bufp->fullCData(oldp+85,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [2U][2U]),8);
    bufp->fullCData(oldp+86,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [2U][3U]),8);
    bufp->fullCData(oldp+87,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [3U][0U]),8);
    bufp->fullCData(oldp+88,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [3U][1U]),8);
    bufp->fullCData(oldp+89,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [3U][2U]),8);
    bufp->fullCData(oldp+90,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [3U][3U]),8);
    bufp->fullCData(oldp+91,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [4U][0U]),8);
    bufp->fullCData(oldp+92,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [4U][1U]),8);
    bufp->fullCData(oldp+93,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [4U][2U]),8);
    bufp->fullCData(oldp+94,(vlSelfRef.systolic_array_4x4__DOT__b_wire
                             [4U][3U]),8);
    bufp->fullBit(oldp+95,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+96,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+97,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+98,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+99,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+100,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+101,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+102,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+103,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+104,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+105,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+106,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+107,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+108,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+109,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+110,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+111,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+112,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+113,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+114,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+115,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+116,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+117,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+118,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+119,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+120,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+121,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+122,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+123,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+124,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+125,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+126,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+127,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+128,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+129,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+130,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+131,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+132,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+133,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+134,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+135,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+136,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+137,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+138,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+139,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+140,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+141,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+142,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+143,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+144,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+145,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+146,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+147,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+148,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+149,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+150,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+151,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+152,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+153,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+154,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+155,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+156,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+157,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+158,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+159,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+160,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+161,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+162,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+163,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+164,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+165,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+166,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+167,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+168,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+169,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+170,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+171,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+172,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+173,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+174,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+175,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+176,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+177,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+178,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+179,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+180,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+181,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+182,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+183,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+184,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+185,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+186,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+187,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+188,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+189,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+190,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+191,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+192,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+193,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+194,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+195,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+196,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+197,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+198,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+199,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+200,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+201,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+202,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+203,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+204,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+205,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+206,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+207,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+208,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+209,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+210,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+211,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+212,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+213,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+214,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc),16);
    bufp->fullBit(oldp+215,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+216,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst));
    bufp->fullBit(oldp+217,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en));
    bufp->fullCData(oldp+218,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in),8);
    bufp->fullCData(oldp+219,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in),8);
    bufp->fullCData(oldp+220,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out),8);
    bufp->fullCData(oldp+221,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out),8);
    bufp->fullSData(oldp+222,(vlSelfRef.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc),16);
}

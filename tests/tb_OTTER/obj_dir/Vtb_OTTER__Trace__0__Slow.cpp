// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_OTTER__Syms.h"


VL_ATTR_COLD void Vtb_OTTER___024root__trace_init_sub__TOP__0(Vtb_OTTER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_init_sub__TOP__0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_OTTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+191,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+191,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"mem_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FE_DE", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+35,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+43,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("DE_EX", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+155,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+170,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+171,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+174,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+177,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("EX_MEM", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+58,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM_WB", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+81,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+90,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+103,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+104,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"nextpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"pc_sel_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,0,"u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+107,0,"src_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"src_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+109,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+110,0,"regwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"memwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"memread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"rf_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+115,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"br_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+184,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"src_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"src_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"memout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"memerr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"fwd_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"fwd_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"fwd_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"fwd_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"rf_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"rf_nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"rf_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"rf_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"sw_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+189,0,"din2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"stall_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"stall_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"jalr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"jal_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"branch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"reg_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FWD_A_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+178,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_B_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+179,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"SRC_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"SRC_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"RESULT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+186,0,"ZERO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"OPCODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+133,0,"FUNC3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+134,0,"FUNC7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"REG_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"MEM_READ2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"BRANCH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"JUMP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"RF_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+109,0,"ALU_FUN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+107,0,"ALU_SRCA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"ALU_SRCB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+106,0,"PC_SRC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"IMM_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+118,0,"BR_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_HU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"RD_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"RD_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"RS1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+136,0,"RS2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+111,0,"MEM_WRITE_DE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"MEM_READ_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"MEM_READ_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"MEM_WRITE_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"JUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"BRANCH_ARG1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"BRANCH_ARG2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"BRANCH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"BRANCH_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+184,0,"BRANCH_TAKEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"FWD_A_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"FWD_B_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"SW_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+125,0,"STALL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"FLUSH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"MEM_FWD1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"MEM_FWD2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"WB_FWD1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"WB_FWD2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"load_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_IG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+114,0,"IMM_SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+115,0,"IMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+202,0,"ACTUAL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"MEM_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"MEM_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"MEM_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"MEM_DIN2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"MEM_WRITE2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"MEM_READ1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"MEM_READ2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"IO_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"ERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"MEM_DOUT1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"MEM_DOUT2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"IO_WR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"memAddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+150,0,"memAddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+151,0,"memWrite2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"memOut2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"ioIn_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+191,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"PC_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"PC_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"PC_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+191,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"REG_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+136,0,"REG_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+93,0,"WRITE_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"WRITE_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"WRITE_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"REG_1_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"REG_2_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+195,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PC_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+182,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RF_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SRC_A_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SRC_B_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SW_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_OTTER___024root__trace_init_top(Vtb_OTTER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_init_top\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_OTTER___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_OTTER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_OTTER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_OTTER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_OTTER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_OTTER___024root__trace_register(Vtb_OTTER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_register\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_OTTER___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_OTTER___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_OTTER___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_OTTER___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_OTTER___024root__trace_const_0_sub_0(Vtb_OTTER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_OTTER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_const_0\n"); );
    // Init
    Vtb_OTTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_OTTER___024root*>(voidSelf);
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_OTTER___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_OTTER___024root__trace_const_0_sub_0(Vtb_OTTER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_const_0_sub_0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+196,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__mem_err));
    bufp->fullIData(oldp+197,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__u_type),32);
    bufp->fullIData(oldp+198,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__i_type),32);
    bufp->fullIData(oldp+199,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__s_type),32);
    bufp->fullIData(oldp+200,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__b_type),32);
    bufp->fullIData(oldp+201,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__j_type),32);
    bufp->fullIData(oldp+202,(0xeU),32);
    bufp->fullBit(oldp+203,(1U));
    bufp->fullIData(oldp+204,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_IN),32);
    bufp->fullIData(oldp+205,(0U),32);
}

VL_ATTR_COLD void Vtb_OTTER___024root__trace_full_0_sub_0(Vtb_OTTER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_OTTER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_full_0\n"); );
    // Init
    Vtb_OTTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_OTTER___024root*>(voidSelf);
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_OTTER___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_OTTER___024root__trace_full_0_sub_0(Vtb_OTTER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_full_0_sub_0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                            [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                       >> 8U))]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                            [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                       >> 0xdU))]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[1]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[2]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[3]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[4]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[5]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[6]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[7]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[8]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[9]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[10]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[11]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[12]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[13]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[14]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[15]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[16]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[17]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[18]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[19]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[20]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[21]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[22]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[23]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[24]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[25]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[26]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[27]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[28]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[29]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[30]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[31]),32);
    bufp->fullIData(oldp+35,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+36,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+37,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+38,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+39,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+40,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                         >> 0x19U))),32);
    bufp->fullBit(oldp+41,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                  >> 0x18U))));
    bufp->fullCData(oldp+42,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                    >> 0x16U))),2);
    bufp->fullCData(oldp+43,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                      >> 0x12U))),4);
    bufp->fullIData(oldp+44,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+45,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+47,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  >> 0xfU))));
    bufp->fullIData(oldp+48,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                               << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                            >> 0xfU))),32);
    bufp->fullCData(oldp+49,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                    >> 0xdU))),2);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                       >> 8U))),5);
    bufp->fullIData(oldp+51,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                            >> 8U))),32);
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                  >> 7U))));
    bufp->fullIData(oldp+53,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                               << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                            >> 7U))),32);
    bufp->fullBit(oldp+54,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                  >> 6U))));
    bufp->fullBit(oldp+55,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                  >> 5U))));
    bufp->fullCData(oldp+56,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                    >> 2U))),3);
    bufp->fullCData(oldp+57,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U])),2);
    bufp->fullIData(oldp+58,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+59,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+60,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+61,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+62,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+63,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                         >> 0x19U))),32);
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                  >> 0x18U))));
    bufp->fullCData(oldp+65,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                    >> 0x16U))),2);
    bufp->fullCData(oldp+66,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                      >> 0x12U))),4);
    bufp->fullIData(oldp+67,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  >> 0xfU))));
    bufp->fullIData(oldp+71,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                               << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                            >> 0xfU))),32);
    bufp->fullCData(oldp+72,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                    >> 0xdU))),2);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                       >> 8U))),5);
    bufp->fullIData(oldp+74,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                            >> 8U))),32);
    bufp->fullBit(oldp+75,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                  >> 7U))));
    bufp->fullIData(oldp+76,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                               << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                            >> 7U))),32);
    bufp->fullBit(oldp+77,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                  >> 6U))));
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                  >> 5U))));
    bufp->fullCData(oldp+79,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                    >> 2U))),3);
    bufp->fullCData(oldp+80,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U])),2);
    bufp->fullIData(oldp+81,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0xaU] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+82,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+83,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+84,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+85,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+86,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                               << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                         >> 0x19U))),32);
    bufp->fullBit(oldp+87,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                  >> 0x18U))));
    bufp->fullCData(oldp+88,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                    >> 0x16U))),2);
    bufp->fullCData(oldp+89,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                      >> 0x12U))),4);
    bufp->fullIData(oldp+90,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+91,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+93,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  >> 0xfU))));
    bufp->fullIData(oldp+94,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                               << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                            >> 0xfU))),32);
    bufp->fullCData(oldp+95,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                    >> 0xdU))),2);
    bufp->fullCData(oldp+96,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                       >> 8U))),5);
    bufp->fullIData(oldp+97,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                            >> 8U))),32);
    bufp->fullBit(oldp+98,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                  >> 7U))));
    bufp->fullIData(oldp+99,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                               << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                            >> 7U))),32);
    bufp->fullBit(oldp+100,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+101,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+102,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                     >> 2U))),3);
    bufp->fullCData(oldp+103,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U])),2);
    bufp->fullIData(oldp+104,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir),32);
    bufp->fullIData(oldp+105,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out),32);
    bufp->fullCData(oldp+106,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel),2);
    bufp->fullBit(oldp+107,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel));
    bufp->fullCData(oldp+108,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel),2);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl),4);
    bufp->fullBit(oldp+110,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite));
    bufp->fullBit(oldp+111,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite));
    bufp->fullBit(oldp+112,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread));
    bufp->fullCData(oldp+113,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel),2);
    bufp->fullCData(oldp+114,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel),3);
    bufp->fullIData(oldp+115,(((4U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                ? ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                    : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                           >> 0x18U)))) 
                                            << 0x14U) 
                                           | (((0xff000U 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   << 7U)) 
                                               | (0x800U 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                     >> 2U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                    >> 0xdU))))))
                                : ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                    ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? (0xfffff000U 
                                           & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                              << 7U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                           >> 0x18U)))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  << 0xbU)) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                     >> 0xdU)) 
                                                 | (0x1eU 
                                                    & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])))))
                                    : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                           >> 0x18U)))) 
                                            << 0xbU) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0xdU)) 
                                              | (0x1fU 
                                                 & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])))
                                        : vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE)))),32);
    bufp->fullBit(oldp+116,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch));
    bufp->fullBit(oldp+117,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jump));
    bufp->fullCData(oldp+118,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__br_type),3);
    bufp->fullIData(oldp+119,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout),32);
    bufp->fullBit(oldp+120,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr));
    bufp->fullCData(oldp+121,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel),2);
    bufp->fullCData(oldp+122,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel),2);
    bufp->fullIData(oldp+123,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd),32);
    bufp->fullCData(oldp+124,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel),2);
    bufp->fullBit(oldp+125,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall));
    bufp->fullBit(oldp+126,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read));
    bufp->fullBit(oldp+127,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_write));
    bufp->fullIData(oldp+128,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jalr_addr),32);
    bufp->fullIData(oldp+129,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jal_addr),32);
    bufp->fullIData(oldp+130,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_addr),32);
    bufp->fullIData(oldp+131,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__reg_result),32);
    bufp->fullCData(oldp+132,((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+133,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+134,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                   >> 0x17U))));
    bufp->fullCData(oldp+135,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 8U))),5);
    bufp->fullCData(oldp+136,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 0xdU))),5);
    bufp->fullBit(oldp+137,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1));
    bufp->fullBit(oldp+138,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2));
    bufp->fullBit(oldp+139,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                        >> 8U)) == 
                              (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 8U))) & 
                             ((0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                               >> 8U))) 
                              & (0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                 >> 8U)))))));
    bufp->fullBit(oldp+140,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                        >> 8U)) == 
                              (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 0xdU))) 
                             & ((0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                                 >> 8U))) 
                                & (0U != (0x1fU & (
                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+141,(((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read) 
                             & ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1) 
                                | (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2)))));
    bufp->fullIData(oldp+142,((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])),25);
    bufp->fullIData(oldp+143,((0xfffff000U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                              << 7U))),32);
    bufp->fullIData(oldp+144,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE),32);
    bufp->fullIData(oldp+145,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0x18U)))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 0xdU)) 
                                            | (0x1fU 
                                               & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])))),32);
    bufp->fullIData(oldp+146,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0x18U)))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                << 0xbU)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   >> 0xdU)) 
                                               | (0x1eU 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU]))))),32);
    bufp->fullIData(oldp+147,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0x18U)))) 
                                << 0x14U) | (((0xff000U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  << 7U)) 
                                              | (0x800U 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                    >> 2U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   >> 0xdU))))),32);
    bufp->fullBit(oldp+148,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR));
    bufp->fullSData(oldp+149,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out 
                                          >> 2U))),14);
    bufp->fullSData(oldp+150,((0x3fffU & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                           << 0xcU) 
                                          | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                             >> 0x14U)))),14);
    bufp->fullBit(oldp+151,(((0x11000000U > ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                              << 0xeU) 
                                             | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                >> 0x12U))) 
                             && (1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                       >> 0x11U)))));
    bufp->fullIData(oldp+152,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2),32);
    bufp->fullIData(oldp+153,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer),32);
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)))));
    bufp->fullIData(oldp+155,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
                                << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+156,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+157,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+158,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+159,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+160,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                          >> 0x19U))),32);
    bufp->fullBit(oldp+161,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                   >> 0x18U))));
    bufp->fullCData(oldp+162,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                     >> 0x16U))),2);
    bufp->fullCData(oldp+163,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                       >> 0x12U))),4);
    bufp->fullIData(oldp+164,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                            >> 0x12U))),32);
    bufp->fullBit(oldp+165,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+166,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+167,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   >> 0xfU))));
    bufp->fullIData(oldp+168,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                             >> 0xfU))),32);
    bufp->fullCData(oldp+169,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+170,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                        >> 8U))),5);
    bufp->fullIData(oldp+171,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                             >> 8U))),32);
    bufp->fullBit(oldp+172,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                   >> 7U))));
    bufp->fullIData(oldp+173,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                             >> 7U))),32);
    bufp->fullBit(oldp+174,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+175,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+176,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                     >> 2U))),3);
    bufp->fullCData(oldp+177,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])),2);
    bufp->fullIData(oldp+178,(((0x1000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                ? ((0x1000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                    ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                        << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                  >> 0x19U))
                                    : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                        << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                  >> 0x19U)))
                                : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                    << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                              >> 0x19U)))),32);
    bufp->fullIData(oldp+179,(((0x800000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                ? ((0x400000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                    ? 0U : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                             << 7U) 
                                            | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                               >> 0x19U)))
                                : ((0x400000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                    ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                        << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                  >> 0x19U))
                                    : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                        << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                  >> 0x19U))))),32);
    bufp->fullIData(oldp+180,((((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                 << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                           >> 0x19U)) 
                               + ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                             >> 0x19U)))),32);
    bufp->fullIData(oldp+181,((((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                 << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                           >> 0x19U)) 
                               + ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                             >> 0x19U)))),32);
    bufp->fullIData(oldp+182,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc),32);
    bufp->fullCData(oldp+183,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final),2);
    bufp->fullBit(oldp+184,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken));
    bufp->fullIData(oldp+185,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result),32);
    bufp->fullBit(oldp+186,((0U != vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result)));
    bufp->fullIData(oldp+187,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out),32);
    bufp->fullIData(oldp+188,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out),32);
    bufp->fullIData(oldp+189,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__din2),32);
    bufp->fullBit(oldp+190,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush));
    bufp->fullBit(oldp+191,(vlSelfRef.tb_OTTER__DOT__CLK));
    bufp->fullBit(oldp+192,(vlSelfRef.tb_OTTER__DOT__RST));
    bufp->fullIData(oldp+193,(((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__jalr_addr
                                    : vlSelfRef.tb_OTTER__DOT__UUT__DOT__jal_addr)
                                : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_addr
                                    : vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc))),32);
    bufp->fullIData(oldp+194,((0xfffffffeU & (((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                << 7U) 
                                               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                  >> 0x19U)) 
                                              + vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out))),32);
    bufp->fullIData(oldp+195,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i),32);
}

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
    tracep->declBit(c+169,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"mem_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FE_DE", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+37,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("DE_EX", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+143,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+151,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+152,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+158,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("EX_MEM", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+56,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+65,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM_WB", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+75,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+84,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"DIN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+94,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"nextpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+98,0,"src_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"src_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+101,0,"regwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"memwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"memread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"rf_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+105,0,"imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+106,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"src_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"src_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"memout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"memerr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"fwd_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"fwd_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"fwd_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"fwd_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"rf_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"rf_nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"rf_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"rf_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"sw_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"din2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"stall_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"stall_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"reg_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FWD_A_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_B_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"SRC_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"SRC_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"RESULT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"ZERO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"OPCODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+118,0,"FUNC3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+119,0,"FUNC7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"REG_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"MEM_READ2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"BRANCH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"JUMP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"RF_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"ALU_FUN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+98,0,"ALU_SRCA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"ALU_SRCB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"PC_SRC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"IMM_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"BR_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_HU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"RD_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"RD_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"RS1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"RS2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+102,0,"MEM_WRITE_DE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MEM_READ_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"MEM_READ_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"MEM_WRITE_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"JUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"BRANCH_ARG1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"BRANCH_ARG2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+181,0,"BRANCH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"BRANCH_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+2,0,"BRANCH_TAKEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"FWD_A_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"FWD_B_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"SW_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+113,0,"STALL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"FLUSH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"MEM_FWD1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"MEM_FWD2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"WB_FWD1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"WB_FWD2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"load_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_IG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+105,0,"IMM_SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+106,0,"IMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"ACTUAL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"MEM_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"MEM_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"MEM_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"MEM_DIN2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"MEM_WRITE2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"MEM_READ1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"MEM_READ2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"IO_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"ERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"MEM_DOUT1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"MEM_DOUT2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"IO_WR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"memAddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+138,0,"memAddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+139,0,"memWrite2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"memOut2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"ioIn_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"PC_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"PC_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"PC_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"REG_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"REG_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+87,0,"WRITE_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"WRITE_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"WRITE_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"REG_1_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"REG_2_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+171,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PC_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RF_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SRC_A_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SRC_B_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SW_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullBit(oldp+172,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__mem_err));
    bufp->fullIData(oldp+173,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__u_type),32);
    bufp->fullIData(oldp+174,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__i_type),32);
    bufp->fullIData(oldp+175,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__s_type),32);
    bufp->fullIData(oldp+176,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__b_type),32);
    bufp->fullIData(oldp+177,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__j_type),32);
    bufp->fullBit(oldp+178,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__JUMP));
    bufp->fullIData(oldp+179,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__BRANCH_ARG1),32);
    bufp->fullIData(oldp+180,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__BRANCH_ARG2),32);
    bufp->fullBit(oldp+181,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__BRANCH));
    bufp->fullCData(oldp+182,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__BRANCH_TYPE),3);
    bufp->fullIData(oldp+183,(0xeU),32);
    bufp->fullBit(oldp+184,(1U));
    bufp->fullIData(oldp+185,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_IN),32);
    bufp->fullCData(oldp+186,(0U),2);
    bufp->fullIData(oldp+187,(0U),32);
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
    bufp->fullBit(oldp+1,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__BRANCH_TAKEN));
    bufp->fullIData(oldp+3,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                            [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                       >> 1U))]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                            [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                       >> 6U))]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[1]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[2]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[3]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[4]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[5]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[6]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[7]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[8]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[9]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[10]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[11]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[12]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[13]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[14]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[15]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[16]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[17]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[18]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[19]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[20]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[21]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[22]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[23]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[24]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[25]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[26]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[27]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[28]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[29]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[30]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[31]),32);
    bufp->fullIData(oldp+37,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+38,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+39,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+40,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+41,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+42,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                  >> 0x11U))));
    bufp->fullCData(oldp+44,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+45,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                      >> 0xbU))),4);
    bufp->fullIData(oldp+46,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                               << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                            >> 0xbU))),32);
    bufp->fullBit(oldp+47,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  >> 9U))));
    bufp->fullBit(oldp+49,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  >> 8U))));
    bufp->fullIData(oldp+50,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+51,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                    >> 6U))),2);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+53,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                               << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                            >> 1U))),32);
    bufp->fullBit(oldp+54,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U])));
    bufp->fullIData(oldp+55,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U]),32);
    bufp->fullIData(oldp+56,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+57,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+58,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+59,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+60,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+61,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+62,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                  >> 0x11U))));
    bufp->fullCData(oldp+63,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+64,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                      >> 0xbU))),4);
    bufp->fullIData(oldp+65,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                               << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                            >> 0xbU))),32);
    bufp->fullBit(oldp+66,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+67,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  >> 9U))));
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  >> 8U))));
    bufp->fullIData(oldp+69,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+70,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                    >> 6U))),2);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+72,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                               << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                            >> 1U))),32);
    bufp->fullBit(oldp+73,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U])));
    bufp->fullIData(oldp+74,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U]),32);
    bufp->fullIData(oldp+75,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0xaU] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+76,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+77,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+78,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+79,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+80,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                  >> 0x11U))));
    bufp->fullCData(oldp+82,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+83,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                      >> 0xbU))),4);
    bufp->fullIData(oldp+84,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                               << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                            >> 0xbU))),32);
    bufp->fullBit(oldp+85,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  >> 9U))));
    bufp->fullBit(oldp+87,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  >> 8U))));
    bufp->fullIData(oldp+88,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+89,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                    >> 6U))),2);
    bufp->fullCData(oldp+90,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+91,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                               << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                            >> 1U))),32);
    bufp->fullBit(oldp+92,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U])));
    bufp->fullIData(oldp+93,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir),32);
    bufp->fullIData(oldp+95,(((IData)(4U) + vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out)),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out),32);
    bufp->fullCData(oldp+97,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel),3);
    bufp->fullBit(oldp+98,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel));
    bufp->fullCData(oldp+99,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel),2);
    bufp->fullCData(oldp+100,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl),4);
    bufp->fullBit(oldp+101,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite));
    bufp->fullBit(oldp+102,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite));
    bufp->fullBit(oldp+103,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread));
    bufp->fullCData(oldp+104,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel),2);
    bufp->fullCData(oldp+105,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel),3);
    bufp->fullIData(oldp+106,(((4U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                ? ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                    : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                           >> 0x11U)))) 
                                            << 0x14U) 
                                           | (((0xff000U 
                                                & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                    << 0xeU) 
                                                   | (0x3000U 
                                                      & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                         >> 0x12U)))) 
                                               | (0x800U 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                     << 5U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                    >> 6U))))))
                                : ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                    ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? (0xfffff000U 
                                           & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                               << 0xeU) 
                                              | (0x3000U 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                    >> 0x12U))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                           >> 0x11U)))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                  >> 0xeU)) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                     >> 6U)) 
                                                 | (0x1eU 
                                                    & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                       >> 0x19U))))))
                                    : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                           >> 0x11U)))) 
                                            << 0xbU) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 6U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                    >> 0x19U))))
                                        : vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE)))),32);
    bufp->fullIData(oldp+107,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout),32);
    bufp->fullBit(oldp+108,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr));
    bufp->fullCData(oldp+109,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel),2);
    bufp->fullCData(oldp+110,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel),2);
    bufp->fullIData(oldp+111,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd),32);
    bufp->fullCData(oldp+112,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel),2);
    bufp->fullBit(oldp+113,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall));
    bufp->fullBit(oldp+114,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read));
    bufp->fullBit(oldp+115,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_write));
    bufp->fullIData(oldp+116,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__reg_result),32);
    bufp->fullCData(oldp+117,((0x7fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                        >> 0x12U))),7);
    bufp->fullCData(oldp+118,((7U & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                      << 2U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                >> 0x1eU)))),3);
    bufp->fullBit(oldp+119,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_CU__DOT__BRANCH));
    bufp->fullBit(oldp+121,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_CU__DOT__JUMP));
    bufp->fullCData(oldp+122,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_CU__DOT__BR_TYPE),3);
    bufp->fullCData(oldp+123,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 1U))),5);
    bufp->fullCData(oldp+124,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+125,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1));
    bufp->fullBit(oldp+126,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2));
    bufp->fullBit(oldp+127,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                        >> 1U)) == 
                              (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 1U))) & 
                             ((0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                               >> 1U))) 
                              & (0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                 >> 1U)))))));
    bufp->fullBit(oldp+128,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                        >> 1U)) == 
                              (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 6U))) & 
                             ((0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                               >> 1U))) 
                              & (0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                 >> 6U)))))));
    bufp->fullBit(oldp+129,(((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read) 
                             & ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1) 
                                | (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2)))));
    bufp->fullIData(oldp+130,((0x1ffffffU & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                              << 7U) 
                                             | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                >> 0x19U)))),25);
    bufp->fullIData(oldp+131,((0xfffff000U & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                               << 0xeU) 
                                              | (0x3000U 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                    >> 0x12U))))),32);
    bufp->fullIData(oldp+132,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE),32);
    bufp->fullIData(oldp+133,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0x11U)))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 6U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                  >> 0x19U))))),32);
    bufp->fullIData(oldp+134,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0x11U)))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                >> 0xeU)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   >> 6U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                     >> 0x19U)))))),32);
    bufp->fullIData(oldp+135,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0x11U)))) 
                                << 0x14U) | (((0xff000U 
                                               & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   << 0xeU) 
                                                  | (0x3000U 
                                                     & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                        >> 0x12U)))) 
                                              | (0x800U 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                    << 5U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   >> 6U))))),32);
    bufp->fullBit(oldp+136,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR));
    bufp->fullSData(oldp+137,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out 
                                          >> 2U))),14);
    bufp->fullSData(oldp+138,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                          >> 0xdU))),14);
    bufp->fullBit(oldp+139,(((0x11000000U > ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                              << 0x15U) 
                                             | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                >> 0xbU))) 
                             && (1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                       >> 0xaU)))));
    bufp->fullIData(oldp+140,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2),32);
    bufp->fullIData(oldp+141,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer),32);
    bufp->fullBit(oldp+142,((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)))));
    bufp->fullIData(oldp+143,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+144,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+145,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+146,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+147,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+148,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                            >> 0x12U))),32);
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+150,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+151,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                       >> 0xbU))),4);
    bufp->fullIData(oldp+152,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                             >> 0xbU))),32);
    bufp->fullBit(oldp+153,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+154,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   >> 8U))));
    bufp->fullIData(oldp+156,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+157,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                     >> 6U))),2);
    bufp->fullCData(oldp+158,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                        >> 1U))),5);
    bufp->fullIData(oldp+159,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                             >> 1U))),32);
    bufp->fullBit(oldp+160,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U])));
    bufp->fullIData(oldp+161,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U]),32);
    bufp->fullIData(oldp+162,(((0x20000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                ? ((0x20000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                    ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                        << 0xeU) | 
                                       (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                        >> 0x12U)) : 
                                   ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                     << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                 >> 0x12U)))
                                : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                    << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                >> 0x12U)))),32);
    bufp->fullIData(oldp+163,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out),32);
    bufp->fullIData(oldp+164,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result),32);
    bufp->fullBit(oldp+165,((0U != vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result)));
    bufp->fullIData(oldp+166,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out),32);
    bufp->fullIData(oldp+167,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out),32);
    bufp->fullIData(oldp+168,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__din2),32);
    bufp->fullBit(oldp+169,(vlSelfRef.tb_OTTER__DOT__CLK));
    bufp->fullBit(oldp+170,(vlSelfRef.tb_OTTER__DOT__RST));
    bufp->fullIData(oldp+171,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i),32);
}

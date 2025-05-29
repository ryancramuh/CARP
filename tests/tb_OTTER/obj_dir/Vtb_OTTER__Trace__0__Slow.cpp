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
    tracep->declBit(c+143,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+143,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mem_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->popPrefix();
    tracep->pushPrefix("DE_EX", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+121,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+129,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("EX_MEM", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+53,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("MEM_WB", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+71,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"NEXT_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"MEM_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"RF_MUX_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"DEST_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"DEST_REG_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+89,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"nextpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+92,0,"src_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"src_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"regwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"memwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"memread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"rf_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"src_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"src_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"memout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"memerr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"rf_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"rf_nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"rf_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"rf_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("OTTER_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"SRC_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"SRC_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"ALU_CTRL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"RESULT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"ZERO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"OPCODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"FUNC3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+106,0,"FUNC7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"REG_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"MEM_READ2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"RF_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"ALU_FUN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+92,0,"ALU_SRCA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"ALU_SRCB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"PC_SRC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"IMM_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_IG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+99,0,"IMM_SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"IMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"ACTUAL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"MEM_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"MEM_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"MEM_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"MEM_DIN2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"MEM_WRITE2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"MEM_READ1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"MEM_READ2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"IO_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"ERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"MEM_DOUT1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"MEM_DOUT2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"IO_WR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"memAddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+115,0,"memAddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+116,0,"memWrite2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"memOut2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"ioIn_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+143,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"PC_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"PC_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"PC_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("OTTER_RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+143,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"REG_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"REG_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+83,0,"WRITE_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"WRITE_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+103,0,"WRITE_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"REG_1_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"REG_2_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+145,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PC_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+157,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RF_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SRC_A_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+127,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("SRC_B_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+125,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullBit(oldp+146,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__mem_err));
    bufp->fullIData(oldp+147,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__u_type),32);
    bufp->fullIData(oldp+148,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__i_type),32);
    bufp->fullIData(oldp+149,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__s_type),32);
    bufp->fullIData(oldp+150,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__b_type),32);
    bufp->fullIData(oldp+151,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__j_type),32);
    bufp->fullCData(oldp+152,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel),3);
    bufp->fullIData(oldp+153,(0xeU),32);
    bufp->fullBit(oldp+154,(1U));
    bufp->fullIData(oldp+155,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_IN),32);
    bufp->fullBit(oldp+156,(0U));
    bufp->fullCData(oldp+157,(0U),2);
    bufp->fullIData(oldp+158,(0U),32);
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
                            [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                       >> 1U))]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                            [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                       >> 6U))]),32);
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
    bufp->fullIData(oldp+35,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+36,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+37,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+38,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+39,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+40,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+41,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  >> 0x11U))));
    bufp->fullCData(oldp+42,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+43,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                      >> 0xbU))),4);
    bufp->fullIData(oldp+44,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                               << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                            >> 0xbU))),32);
    bufp->fullBit(oldp+45,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                  >> 9U))));
    bufp->fullBit(oldp+47,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                  >> 8U))));
    bufp->fullIData(oldp+48,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+49,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                    >> 6U))),2);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+51,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                               << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                            >> 1U))),32);
    bufp->fullBit(oldp+52,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U])));
    bufp->fullIData(oldp+53,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+54,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+55,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+56,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+57,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+58,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+59,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  >> 0x11U))));
    bufp->fullCData(oldp+60,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+61,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                      >> 0xbU))),4);
    bufp->fullIData(oldp+62,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                               << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                            >> 0xbU))),32);
    bufp->fullBit(oldp+63,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                  >> 9U))));
    bufp->fullBit(oldp+65,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                  >> 8U))));
    bufp->fullIData(oldp+66,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+67,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                    >> 6U))),2);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+69,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                               << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                            >> 1U))),32);
    bufp->fullBit(oldp+70,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U])));
    bufp->fullIData(oldp+71,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+72,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+73,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+74,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+75,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+76,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                               << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                           >> 0x12U))),32);
    bufp->fullBit(oldp+77,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  >> 0x11U))));
    bufp->fullCData(oldp+78,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+79,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                      >> 0xbU))),4);
    bufp->fullIData(oldp+80,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                               << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                            >> 0xbU))),32);
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+82,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                  >> 9U))));
    bufp->fullBit(oldp+83,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                  >> 8U))));
    bufp->fullIData(oldp+84,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                               << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+85,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                    >> 6U))),2);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+87,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                               << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                            >> 1U))),32);
    bufp->fullBit(oldp+88,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U])));
    bufp->fullIData(oldp+89,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir),32);
    bufp->fullIData(oldp+90,(((IData)(4U) + vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out)),32);
    bufp->fullIData(oldp+91,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out),32);
    bufp->fullBit(oldp+92,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel));
    bufp->fullCData(oldp+93,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel),2);
    bufp->fullCData(oldp+94,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl),4);
    bufp->fullBit(oldp+95,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite));
    bufp->fullBit(oldp+96,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite));
    bufp->fullBit(oldp+97,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread));
    bufp->fullCData(oldp+98,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel),2);
    bufp->fullCData(oldp+99,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel),3);
    bufp->fullIData(oldp+100,(((4U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                ? ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                    : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                           >> 0x11U)))) 
                                            << 0x14U) 
                                           | (((0xff000U 
                                                & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                    << 0xeU) 
                                                   | (0x3000U 
                                                      & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                         >> 0x12U)))) 
                                               | (0x800U 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                     << 5U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                    >> 6U))))))
                                : ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                    ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? (0xfffff000U 
                                           & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                               << 0xeU) 
                                              | (0x3000U 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                    >> 0x12U))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                           >> 0x11U)))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                  >> 0xeU)) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                     >> 6U)) 
                                                 | (0x1eU 
                                                    & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                       >> 0x19U))))))
                                    : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                           >> 0x11U)))) 
                                            << 0xbU) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                  >> 6U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                    >> 0x19U))))
                                        : vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE)))),32);
    bufp->fullIData(oldp+101,(((0x11000000U <= ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                                   >> 0xbU)))
                                ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer
                                : vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2)),32);
    bufp->fullBit(oldp+102,(((0x4000U <= vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out) 
                             | ((0x4000U <= ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                              << 0x15U) 
                                             | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                                >> 0xbU))) 
                                | (IData)(((0U != (3U 
                                                   & vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out)) 
                                           | (0U != 
                                              (0x1800U 
                                               & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]))))))));
    bufp->fullIData(oldp+103,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd),32);
    bufp->fullCData(oldp+104,((0x7fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                        >> 0x12U))),7);
    bufp->fullCData(oldp+105,((7U & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                      << 2U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                >> 0x1eU)))),3);
    bufp->fullBit(oldp+106,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+107,((0x1ffffffU & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                              << 7U) 
                                             | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                >> 0x19U)))),25);
    bufp->fullIData(oldp+108,((0xfffff000U & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                               << 0xeU) 
                                              | (0x3000U 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                    >> 0x12U))))),32);
    bufp->fullIData(oldp+109,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE),32);
    bufp->fullIData(oldp+110,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                  >> 0x11U)))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                >> 6U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                  >> 0x19U))))),32);
    bufp->fullIData(oldp+111,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                  >> 0x11U)))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                >> 0xeU)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                   >> 6U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                     >> 0x19U)))))),32);
    bufp->fullIData(oldp+112,((((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                  >> 0x11U)))) 
                                << 0x14U) | (((0xff000U 
                                               & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                   << 0xeU) 
                                                  | (0x3000U 
                                                     & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                        >> 0x12U)))) 
                                              | (0x800U 
                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                    << 5U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                   >> 6U))))),32);
    bufp->fullBit(oldp+113,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR));
    bufp->fullSData(oldp+114,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out 
                                          >> 2U))),14);
    bufp->fullSData(oldp+115,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                          >> 0xdU))),14);
    bufp->fullBit(oldp+116,(((0x11000000U > ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                              << 0x15U) 
                                             | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                                >> 0xbU))) 
                             && (1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                       >> 0xaU)))));
    bufp->fullIData(oldp+117,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2),32);
    bufp->fullIData(oldp+118,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer),32);
    bufp->fullCData(oldp+119,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                        >> 1U))),5);
    bufp->fullCData(oldp+120,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+121,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+122,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+123,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+124,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+125,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+126,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                            >> 0x12U))),32);
    bufp->fullBit(oldp+127,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+128,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+129,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                       >> 0xbU))),4);
    bufp->fullIData(oldp+130,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                             >> 0xbU))),32);
    bufp->fullBit(oldp+131,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                   >> 9U))));
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                   >> 8U))));
    bufp->fullIData(oldp+134,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+135,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                     >> 6U))),2);
    bufp->fullCData(oldp+136,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                        >> 1U))),5);
    bufp->fullIData(oldp+137,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                             >> 1U))),32);
    bufp->fullBit(oldp+138,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])));
    bufp->fullIData(oldp+139,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out),32);
    bufp->fullIData(oldp+140,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out),32);
    bufp->fullIData(oldp+141,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result),32);
    bufp->fullBit(oldp+142,((0U != vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result)));
    bufp->fullBit(oldp+143,(vlSelfRef.tb_OTTER__DOT__CLK));
    bufp->fullBit(oldp+144,(vlSelfRef.tb_OTTER__DOT__RST));
    bufp->fullIData(oldp+145,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i),32);
}

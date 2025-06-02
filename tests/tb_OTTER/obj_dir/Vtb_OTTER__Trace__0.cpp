// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_OTTER__Syms.h"


void Vtb_OTTER___024root__trace_chg_0_sub_0(Vtb_OTTER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_OTTER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_chg_0\n"); );
    // Init
    Vtb_OTTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_OTTER___024root*>(voidSelf);
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_OTTER___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_OTTER___024root__trace_chg_0_sub_0(Vtb_OTTER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_chg_0_sub_0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                               [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                          >> 8U))]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                               [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                          >> 0xdU))]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[1]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[2]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[3]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[4]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[5]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[6]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[7]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[8]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[9]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[10]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[11]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[12]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[13]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[14]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[15]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[16]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[17]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[18]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[19]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[20]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[21]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[22]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[23]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[24]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[25]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[26]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[27]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[28]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[29]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[30]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+34,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+35,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+36,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+37,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+38,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+39,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                            >> 0x19U))),32);
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                     >> 0x18U))));
        bufp->chgCData(oldp+41,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+42,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                         >> 0x12U))),4);
        bufp->chgIData(oldp+43,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                              >> 0x12U))),32);
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+47,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+48,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                       >> 0xdU))),2);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                          >> 8U))),5);
        bufp->chgIData(oldp+50,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                  << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                               >> 8U))),32);
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                     >> 7U))));
        bufp->chgIData(oldp+52,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                  << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                               >> 7U))),32);
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                     >> 6U))));
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+55,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
                                       >> 2U))),3);
        bufp->chgCData(oldp+56,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U])),2);
        bufp->chgIData(oldp+57,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+58,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+59,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+60,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+61,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+62,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                            >> 0x19U))),32);
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                     >> 0x18U))));
        bufp->chgCData(oldp+64,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+65,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                         >> 0x12U))),4);
        bufp->chgIData(oldp+66,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                              >> 0x12U))),32);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+70,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+71,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                       >> 0xdU))),2);
        bufp->chgCData(oldp+72,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                          >> 8U))),5);
        bufp->chgIData(oldp+73,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                  << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                               >> 8U))),32);
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                     >> 7U))));
        bufp->chgIData(oldp+75,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                  << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                               >> 7U))),32);
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                     >> 6U))));
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+78,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
                                       >> 2U))),3);
        bufp->chgCData(oldp+79,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U])),2);
        bufp->chgIData(oldp+80,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0xaU] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+81,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+82,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+83,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+84,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+85,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                                  << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                            >> 0x19U))),32);
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                     >> 0x18U))));
        bufp->chgCData(oldp+87,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+88,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                         >> 0x12U))),4);
        bufp->chgIData(oldp+89,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                              >> 0x12U))),32);
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+93,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+94,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                       >> 0xdU))),2);
        bufp->chgCData(oldp+95,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                          >> 8U))),5);
        bufp->chgIData(oldp+96,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                  << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                               >> 8U))),32);
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                     >> 7U))));
        bufp->chgIData(oldp+98,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                  << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                               >> 7U))),32);
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                     >> 6U))));
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+101,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
                                        >> 2U))),3);
        bufp->chgCData(oldp+102,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U])),2);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out),32);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel),2);
        bufp->chgBit(oldp+106,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel));
        bufp->chgCData(oldp+107,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel),2);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl),4);
        bufp->chgBit(oldp+109,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite));
        bufp->chgBit(oldp+110,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite));
        bufp->chgBit(oldp+111,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread));
        bufp->chgCData(oldp+112,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel),2);
        bufp->chgCData(oldp+113,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel),3);
        bufp->chgIData(oldp+114,(((4U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
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
        bufp->chgBit(oldp+115,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch));
        bufp->chgBit(oldp+116,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jump));
        bufp->chgCData(oldp+117,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__br_type),3);
        bufp->chgIData(oldp+118,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout),32);
        bufp->chgBit(oldp+119,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr));
        bufp->chgCData(oldp+120,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel),2);
        bufp->chgCData(oldp+121,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel),2);
        bufp->chgIData(oldp+122,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd),32);
        bufp->chgCData(oldp+123,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel),2);
        bufp->chgBit(oldp+124,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall));
        bufp->chgBit(oldp+125,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read));
        bufp->chgBit(oldp+126,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_write));
        bufp->chgIData(oldp+127,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jalr_addr),32);
        bufp->chgIData(oldp+128,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jal_addr),32);
        bufp->chgIData(oldp+129,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_addr),32);
        bufp->chgIData(oldp+130,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__reg_result),32);
        bufp->chgCData(oldp+131,((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+132,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                        >> 5U))),3);
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                      >> 0x17U))));
        bufp->chgCData(oldp+134,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                           >> 8U))),5);
        bufp->chgCData(oldp+135,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                           >> 0xdU))),5);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1));
        bufp->chgBit(oldp+137,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2));
        bufp->chgBit(oldp+138,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                           >> 8U)) 
                                 == (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                              >> 8U))) 
                                & ((0U != (0x1fU & 
                                           (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                            >> 8U))) 
                                   & (0U != (0x1fU 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 8U)))))));
        bufp->chgBit(oldp+139,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                           >> 8U)) 
                                 == (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                              >> 0xdU))) 
                                & ((0U != (0x1fU & 
                                           (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                            >> 8U))) 
                                   & (0U != (0x1fU 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 0xdU)))))));
        bufp->chgBit(oldp+140,(((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read) 
                                & ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1) 
                                   | (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2)))));
        bufp->chgIData(oldp+141,((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])),25);
        bufp->chgIData(oldp+142,((0xfffff000U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                 << 7U))),32);
        bufp->chgIData(oldp+143,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE),32);
        bufp->chgIData(oldp+144,((((- (IData)((1U & 
                                               (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 0x18U)))) 
                                   << 0xbU) | ((0x7e0U 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   >> 0xdU)) 
                                               | (0x1fU 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])))),32);
        bufp->chgIData(oldp+145,((((- (IData)((1U & 
                                               (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 0x18U)))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   << 0xbU)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                      >> 0xdU)) 
                                                  | (0x1eU 
                                                     & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU]))))),32);
        bufp->chgIData(oldp+146,((((- (IData)((1U & 
                                               (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
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
        bufp->chgBit(oldp+147,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR));
        bufp->chgSData(oldp+148,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out 
                                             >> 2U))),14);
        bufp->chgSData(oldp+149,((0x3fffU & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                              << 0xcU) 
                                             | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                >> 0x14U)))),14);
        bufp->chgBit(oldp+150,(((0x11000000U > ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                   >> 0x12U))) 
                                && (1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                          >> 0x11U)))));
        bufp->chgIData(oldp+151,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2),32);
        bufp->chgIData(oldp+152,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer),32);
        bufp->chgBit(oldp+153,((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+154,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+155,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+156,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+157,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+158,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+159,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                   << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                             >> 0x19U))),32);
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                      >> 0x18U))));
        bufp->chgCData(oldp+161,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                        >> 0x16U))),2);
        bufp->chgCData(oldp+162,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                          >> 0x12U))),4);
        bufp->chgIData(oldp+163,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                   << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                               >> 0x12U))),32);
        bufp->chgBit(oldp+164,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+165,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+166,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+167,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   << 0x11U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                                >> 0xfU))),32);
        bufp->chgCData(oldp+168,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+169,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                           >> 8U))),5);
        bufp->chgIData(oldp+170,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                   << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                                >> 8U))),32);
        bufp->chgBit(oldp+171,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                      >> 7U))));
        bufp->chgIData(oldp+172,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                   << 0x19U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                                >> 7U))),32);
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+175,((7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                                        >> 2U))),3);
        bufp->chgCData(oldp+176,((3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])),2);
        bufp->chgIData(oldp+177,(((0x1000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                   ? ((0x1000000U & 
                                       vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                       ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                           << 7U) | 
                                          (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                           >> 0x19U))
                                       : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                           << 7U) | 
                                          (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                           >> 0x19U)))
                                   : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                       << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                 >> 0x19U)))),32);
        bufp->chgIData(oldp+178,(((0x800000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                   ? ((0x400000U & 
                                       vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                       ? 0U : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                                << 7U) 
                                               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                                  >> 0x19U)))
                                   : ((0x400000U & 
                                       vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                       ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                           << 7U) | 
                                          (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                           >> 0x19U))
                                       : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                           << 7U) | 
                                          (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                           >> 0x19U))))),32);
        bufp->chgIData(oldp+179,((((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                    << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                              >> 0x19U)) 
                                  + ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                      << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                >> 0x19U)))),32);
        bufp->chgIData(oldp+180,((((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                    << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                              >> 0x19U)) 
                                  + ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                      << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                >> 0x19U)))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+181,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc),32);
        bufp->chgCData(oldp+182,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final),2);
        bufp->chgBit(oldp+183,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken));
        bufp->chgIData(oldp+184,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result),32);
        bufp->chgBit(oldp+185,((0U != vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result)));
        bufp->chgIData(oldp+186,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out),32);
        bufp->chgIData(oldp+187,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out),32);
        bufp->chgIData(oldp+188,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__din2),32);
        bufp->chgBit(oldp+189,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush));
    }
    bufp->chgBit(oldp+190,(vlSelfRef.tb_OTTER__DOT__CLK));
    bufp->chgBit(oldp+191,(vlSelfRef.tb_OTTER__DOT__RST));
    bufp->chgIData(oldp+192,(((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                               ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                   ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__jalr_addr
                                   : vlSelfRef.tb_OTTER__DOT__UUT__DOT__jal_addr)
                               : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                   ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_addr
                                   : vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc))),32);
    bufp->chgIData(oldp+193,((0xfffffffeU & (((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                               << 7U) 
                                              | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                 >> 0x19U)) 
                                             + vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out))),32);
    bufp->chgIData(oldp+194,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i),32);
}

void Vtb_OTTER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root__trace_cleanup\n"); );
    // Init
    Vtb_OTTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_OTTER___024root*>(voidSelf);
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

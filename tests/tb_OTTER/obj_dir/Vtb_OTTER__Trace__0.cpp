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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__BRANCH_TAKEN));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+2,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                               [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                          >> 1U))]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
                               [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                          >> 6U))]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[1]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[2]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[3]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[4]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[5]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[6]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[7]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[8]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[9]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[10]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[11]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[12]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[13]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[14]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[15]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[16]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[17]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[18]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[19]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[20]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[21]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[22]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[23]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[24]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[25]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[26]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[27]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[28]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[29]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[30]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+36,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+37,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+38,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+39,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+40,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+41,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                              >> 0x12U))),32);
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                     >> 0x11U))));
        bufp->chgCData(oldp+43,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                       >> 0xfU))),2);
        bufp->chgCData(oldp+44,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                         >> 0xbU))),4);
        bufp->chgIData(oldp+45,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
                                  << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                               >> 0xbU))),32);
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+47,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                     >> 9U))));
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                     >> 8U))));
        bufp->chgIData(oldp+49,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
                                  << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+50,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                       >> 6U))),2);
        bufp->chgCData(oldp+51,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                          >> 1U))),5);
        bufp->chgIData(oldp+52,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
                                  << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
                                               >> 1U))),32);
        bufp->chgBit(oldp+53,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U])));
        bufp->chgIData(oldp+54,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U]),32);
        bufp->chgIData(oldp+55,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+56,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+57,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+58,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+59,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+60,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                              >> 0x12U))),32);
        bufp->chgBit(oldp+61,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                     >> 0x11U))));
        bufp->chgCData(oldp+62,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                       >> 0xfU))),2);
        bufp->chgCData(oldp+63,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                         >> 0xbU))),4);
        bufp->chgIData(oldp+64,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                  << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                               >> 0xbU))),32);
        bufp->chgBit(oldp+65,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                     >> 9U))));
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                     >> 8U))));
        bufp->chgIData(oldp+68,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                  << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+69,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                       >> 6U))),2);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                          >> 1U))),5);
        bufp->chgIData(oldp+71,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                  << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
                                               >> 1U))),32);
        bufp->chgBit(oldp+72,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U])));
        bufp->chgIData(oldp+73,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U]),32);
        bufp->chgIData(oldp+74,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0xaU] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+75,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+76,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+77,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+78,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+79,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
                                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                              >> 0x12U))),32);
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                     >> 0x11U))));
        bufp->chgCData(oldp+81,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                       >> 0xfU))),2);
        bufp->chgCData(oldp+82,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                         >> 0xbU))),4);
        bufp->chgIData(oldp+83,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                  << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                               >> 0xbU))),32);
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                     >> 9U))));
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                     >> 8U))));
        bufp->chgIData(oldp+87,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                  << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+88,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                       >> 6U))),2);
        bufp->chgCData(oldp+89,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                          >> 1U))),5);
        bufp->chgIData(oldp+90,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                  << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
                                               >> 1U))),32);
        bufp->chgBit(oldp+91,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U])));
        bufp->chgIData(oldp+92,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir),32);
        bufp->chgIData(oldp+94,(((IData)(4U) + vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out)),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out),32);
        bufp->chgCData(oldp+96,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel),3);
        bufp->chgBit(oldp+97,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel));
        bufp->chgCData(oldp+98,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel),2);
        bufp->chgCData(oldp+99,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl),4);
        bufp->chgBit(oldp+100,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite));
        bufp->chgBit(oldp+101,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite));
        bufp->chgBit(oldp+102,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread));
        bufp->chgCData(oldp+103,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel),2);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel),3);
        bufp->chgIData(oldp+105,(((4U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
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
        bufp->chgIData(oldp+106,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout),32);
        bufp->chgBit(oldp+107,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr));
        bufp->chgCData(oldp+108,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel),2);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel),2);
        bufp->chgIData(oldp+110,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd),32);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel),2);
        bufp->chgBit(oldp+112,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall));
        bufp->chgBit(oldp+113,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read));
        bufp->chgBit(oldp+114,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_write));
        bufp->chgIData(oldp+115,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__reg_result),32);
        bufp->chgCData(oldp+116,((0x7fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                           >> 0x12U))),7);
        bufp->chgCData(oldp+117,((7U & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                         << 2U) | (
                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                   >> 0x1eU)))),3);
        bufp->chgBit(oldp+118,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_CU__DOT__BRANCH));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_CU__DOT__JUMP));
        bufp->chgCData(oldp+121,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_CU__DOT__BR_TYPE),3);
        bufp->chgCData(oldp+122,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+123,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+124,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1));
        bufp->chgBit(oldp+125,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2));
        bufp->chgBit(oldp+126,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                           >> 1U)) 
                                 == (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                              >> 1U))) 
                                & ((0U != (0x1fU & 
                                           (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                            >> 1U))) 
                                   & (0U != (0x1fU 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 1U)))))));
        bufp->chgBit(oldp+127,((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                           >> 1U)) 
                                 == (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                              >> 6U))) 
                                & ((0U != (0x1fU & 
                                           (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                            >> 1U))) 
                                   & (0U != (0x1fU 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 6U)))))));
        bufp->chgBit(oldp+128,(((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read) 
                                & ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1) 
                                   | (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2)))));
        bufp->chgIData(oldp+129,((0x1ffffffU & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                 << 7U) 
                                                | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                   >> 0x19U)))),25);
        bufp->chgIData(oldp+130,((0xfffff000U & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  << 0xeU) 
                                                 | (0x3000U 
                                                    & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                       >> 0x12U))))),32);
        bufp->chgIData(oldp+131,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE),32);
        bufp->chgIData(oldp+132,((((- (IData)((1U & 
                                               (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 0x11U)))) 
                                   << 0xbU) | ((0x7e0U 
                                                & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                   >> 6U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                                     >> 0x19U))))),32);
        bufp->chgIData(oldp+133,((((- (IData)((1U & 
                                               (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
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
        bufp->chgIData(oldp+134,((((- (IData)((1U & 
                                               (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
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
        bufp->chgBit(oldp+135,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR));
        bufp->chgSData(oldp+136,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out 
                                             >> 2U))),14);
        bufp->chgSData(oldp+137,((0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                             >> 0xdU))),14);
        bufp->chgBit(oldp+138,(((0x11000000U > ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                   >> 0xbU))) 
                                && (1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                          >> 0xaU)))));
        bufp->chgIData(oldp+139,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2),32);
        bufp->chgIData(oldp+140,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer),32);
        bufp->chgBit(oldp+141,((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+142,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
                                   << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+143,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                   << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+144,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                   << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+145,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                   << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+146,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                   << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+147,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                   << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                               >> 0x12U))),32);
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                      >> 0x11U))));
        bufp->chgCData(oldp+149,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+150,((0xfU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                          >> 0xbU))),4);
        bufp->chgIData(oldp+151,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                   << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                                >> 0xbU))),32);
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+153,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                      >> 8U))));
        bufp->chgIData(oldp+155,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                   << 0x18U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+156,((3U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                        >> 6U))),2);
        bufp->chgCData(oldp+157,((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                           >> 1U))),5);
        bufp->chgIData(oldp+158,(((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
                                   << 0x1fU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+159,((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U])));
        bufp->chgIData(oldp+160,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U]),32);
        bufp->chgIData(oldp+161,(((0x20000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                   ? ((0x20000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                       ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                           << 0xeU) 
                                          | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                             >> 0x12U))
                                       : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                           << 0xeU) 
                                          | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                             >> 0x12U)))
                                   : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                       << 0xeU) | (
                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                   >> 0x12U)))),32);
        bufp->chgIData(oldp+162,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+163,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result),32);
        bufp->chgBit(oldp+164,((0U != vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result)));
        bufp->chgIData(oldp+165,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out),32);
        bufp->chgIData(oldp+166,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out),32);
        bufp->chgIData(oldp+167,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__din2),32);
    }
    bufp->chgBit(oldp+168,(vlSelfRef.tb_OTTER__DOT__CLK));
    bufp->chgBit(oldp+169,(vlSelfRef.tb_OTTER__DOT__RST));
    bufp->chgIData(oldp+170,(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i),32);
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

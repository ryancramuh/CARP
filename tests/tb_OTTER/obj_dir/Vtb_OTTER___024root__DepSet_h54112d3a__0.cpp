// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_OTTER.h for the primary calling header

#include "Vtb_OTTER__pch.h"
#include "Vtb_OTTER___024root.h"

VL_ATTR_COLD void Vtb_OTTER___024root___eval_initial__TOP(Vtb_OTTER___024root* vlSelf);
VlCoroutine Vtb_OTTER___024root___eval_initial__TOP__Vtiming__0(Vtb_OTTER___024root* vlSelf);
VlCoroutine Vtb_OTTER___024root___eval_initial__TOP__Vtiming__1(Vtb_OTTER___024root* vlSelf);

void Vtb_OTTER___024root___eval_initial(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_initial\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_OTTER___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_OTTER___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_OTTER___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_OTTER__DOT__CLK__0 
        = vlSelfRef.tb_OTTER__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vtb_OTTER___024root___eval_initial__TOP__Vtiming__0(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "tb_OTTER.sv", 
                                         39);
    vlSelfRef.tb_OTTER__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_OTTER.sv", 
                                             40);
        vlSelfRef.tb_OTTER__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__CLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_OTTER___024root___eval_initial__TOP__Vtiming__1(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_OTTER.sv", 
                                             48);
        vlSelfRef.tb_OTTER__DOT__RST = 0U;
        co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                             nullptr, 
                                             "tb_OTTER.sv", 
                                             49);
        VL_FINISH_MT("tb_OTTER.sv", 50, "");
    }
}

void Vtb_OTTER___024root___eval_act(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_act\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_OTTER___024root___nba_sequent__TOP__0(Vtb_OTTER___024root* vlSelf);
void Vtb_OTTER___024root___nba_sequent__TOP__1(Vtb_OTTER___024root* vlSelf);
void Vtb_OTTER___024root___nba_comb__TOP__0(Vtb_OTTER___024root* vlSelf);

void Vtb_OTTER___024root___eval_nba(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_nba\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_OTTER___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_OTTER___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_OTTER___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

extern const VlWide<11>/*351:0*/ Vtb_OTTER__ConstPool__CONST_h7427a5b5_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_OTTER__ConstPool__TABLE_h4a308f1b_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_OTTER__ConstPool__TABLE_h70b8536a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_OTTER__ConstPool__TABLE_hdef421c4_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_OTTER__ConstPool__TABLE_hbd3f4b7f_0;

VL_INLINE_OPT void Vtb_OTTER___024root___nba_sequent__TOP__0(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___nba_sequent__TOP__0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<11>/*344:0*/ __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE;
    VL_ZERO_W(345, __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE);
    IData/*31:0*/ __Vdly__tb_OTTER__DOT__UUT__DOT__pc_out;
    __Vdly__tb_OTTER__DOT__UUT__DOT__pc_out = 0;
    IData/*31:0*/ __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0;
    __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0;
    __VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0;
    __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0;
    __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0;
    __VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0;
    __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0 = 0;
    // Body
    __Vdly__tb_OTTER__DOT__UUT__DOT__pc_out = vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out;
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[0U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[1U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[2U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[3U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[4U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[5U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[6U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[7U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[8U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[9U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] = 
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU];
    __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0 = 0U;
    __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0 = 0U;
    if ((0x10000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U])) {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2 
            = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory
            [(0x3fffU & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                          << 0xcU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                      >> 0x14U)))];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer 
            = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_IN;
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory
        [(0x3fffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out 
                     >> 2U))];
    if (((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
          >> 0xfU) & (0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                      >> 8U))))) {
        __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0 
            = vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd;
        __VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0 
            = (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                        >> 8U));
        __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0 = 1U;
    }
    if (((0x11000000U > ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                          << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                      >> 0x12U))) && 
         (1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                >> 0x11U)))) {
        __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0 
            = ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel))
                ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel))
                    ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                        << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                    >> 0x12U)) : vlSelfRef.tb_OTTER__DOT__UUT__DOT__reg_result)
                : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel))
                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out
                    : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                        << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                  >> 0x19U))));
        __VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0 
            = (0x3fffU & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                           << 0xcU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                       >> 0x14U)));
        __VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__RST)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)))) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_write 
                    = vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite;
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read 
                    = vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread;
            }
        }
    }
    __Vdly__tb_OTTER__DOT__UUT__DOT__pc_out = ((IData)(vlSelfRef.tb_OTTER__DOT__RST)
                                                ? 0U
                                                : ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)
                                                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                                      ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__jalr_addr
                                                      : vlSelfRef.tb_OTTER__DOT__UUT__DOT__jal_addr)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final))
                                                      ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_addr
                                                      : vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc))));
    if ((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__RST)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)))) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__jal_addr 
                    = vlSelfRef.tb_OTTER__DOT__UUT__DOT__JAL;
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__jalr_addr 
                    = (0xfffffffeU & (((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                        << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                  >> 0x19U)) 
                                      + vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out));
            }
        }
        if (vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken) {
            vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_addr 
                = vlSelfRef.tb_OTTER__DOT__UUT__DOT__JAL;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)))) {
            vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_addr 
                = vlSelfRef.tb_OTTER__DOT__UUT__DOT__JAL;
        }
    }
    if (vlSelfRef.tb_OTTER__DOT__RST) {
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[0U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[1U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[1U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[2U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[2U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[3U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[3U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[4U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[4U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[5U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[5U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[6U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[6U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[7U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[8U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[9U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0xaU];
    } else {
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[7U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[7U]) 
               | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)
                    ? 0U : vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc) 
                  << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
            = ((((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)
                  ? 0U : vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc) 
                >> 7U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)
                            ? 0U : ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)
                                     ? (IData)((((QData)((IData)(
                                                                 vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                                                 << 0x27U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                                    << 7U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                                      >> 0x19U))))
                                     : (IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out)))))) 
                          << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
            = ((((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)
                  ? 0U : ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)
                           ? (IData)((((QData)((IData)(
                                                       vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                                       << 0x27U) | 
                                      (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                                  >> 0x19U))))
                           : (IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out)))))) 
                >> 7U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)
                            ? 0x13U : ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)
                                        ? (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                                                     << 0x27U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                                        << 7U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                                          >> 0x19U))) 
                                                   >> 0x20U))
                                        : (IData)((
                                                   (((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out))) 
                                                   >> 0x20U)))) 
                          << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
            = (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken)
                 ? 0x13U : ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall)
                             ? (IData)(((((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                                          << 0x27U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                               >> 0x19U))) 
                                        >> 0x20U)) : (IData)(
                                                             ((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__ir)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out))) 
                                                              >> 0x20U)))) 
               >> 7U);
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out = __Vdly__tb_OTTER__DOT__UUT__DOT__pc_out;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[0U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[1U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[1U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[2U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[2U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[3U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[3U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[4U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[4U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[5U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[5U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[6U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[6U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[7U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[8U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[9U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
        = __Vdly__tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU];
    if (__VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0) {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[__VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0] 
            = __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register__v0;
    }
    if (__VdlySet__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0) {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory[__VdlyDim0__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0] 
            = __VdlyVal__tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory__v0;
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__jump = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__br_type = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 0U;
    if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x8000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 1U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 3U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 0U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__jump = 1U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel = 2U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 4U;
                            }
                        }
                    }
                } else if ((0x8000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 0U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 0U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__jump = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel = 3U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 4U;
                        }
                    }
                } else if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 2U;
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                  >> 0x1bU)))) {
                        if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__br_type 
                                    = ((0x80U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                        ? ((0x40U & 
                                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                            ? ((0x20U 
                                                & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                                ? 5U
                                                : 4U)
                                            : ((0x20U 
                                                & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                                ? 3U
                                                : 2U))
                                        : ((0x40U & 
                                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                            ? 0U : 
                                           ((0x20U 
                                             & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                             ? 1U : 0U)));
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
        if ((0x20000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                          >> 0x1cU)))) {
                if ((0x8000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 3U;
                        }
                    }
                } else if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                              >> 0x1bU)))) {
                    if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                             >> 0x1cU)))) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                          >> 0x1bU)))) {
                if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 1U;
                    }
                }
            }
        }
    } else if ((0x20000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
        if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                      >> 0x1cU)))) {
            if ((0x8000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 2U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 3U;
                    }
                }
            } else if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 1U;
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 0U;
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                         >> 0x1cU)))) {
        if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                      >> 0x1bU)))) {
            if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 1U;
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 2U;
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE 
        = (((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                              >> 0x18U)))) << 0xbU) 
           | (0x7ffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                        >> 0xdU)));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite = 0U;
    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
            if ((0x20000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                              >> 0x1cU)))) {
                    if ((0x8000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl = 9U;
                            }
                        }
                    } else if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl 
                                = ((8U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                          >> 0x14U)) 
                                   | (7U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                            >> 5U)));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                  >> 0x1bU)))) {
                        if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                          >> 0x1cU)))) {
                if ((0x8000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl = 0U;
                        }
                    }
                } else if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                    if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl 
                            = ((0x80U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                ? ((0x40U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                    ? ((0x20U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                        ? 7U : 6U) : 
                                   ((0x20U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                     ? ((0x800000U 
                                         & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                         ? 0xdU : 5U)
                                     : 4U)) : ((0x40U 
                                                & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                                ? (
                                                   (0x20U 
                                                    & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (0x20U 
                                                    & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])
                                                    ? 1U
                                                    : 0U)));
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                  >> 0x1bU)))) {
                        if ((0x4000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                            if ((0x2000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1 = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
        [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                   >> 8U))];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2 = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
        [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                   >> 0xdU))];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__reg_result = 
        ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
          << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                      >> 0x12U));
    if (vlSelfRef.tb_OTTER__DOT__RST) {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[1U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[2U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[3U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[4U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[5U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[6U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[7U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[8U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[9U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0xaU] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0xaU];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[1U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[1U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[2U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[3U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[4U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[5U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[6U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[7U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[8U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[9U];
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0xaU];
    } else if (vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken) {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U]) 
               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr) 
                  << 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfe3fffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x1c00000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
            = ((0xfffc7fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U]) 
               | (0x38000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
            = ((0xffff9fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U]) 
               | (0x6000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfe03ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x1fc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
            = ((0xffffe0ffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U]) 
               | (0x1f00U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
            = ((0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U]) 
               | (0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
            = (0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU]);
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
            = ((0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result 
                  << 0x12U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result 
                  >> 0xeU));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfe3fffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (0x1c00000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
            = ((0xfffc7fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]) 
               | (0x38000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
            = ((0xffff9fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]) 
               | (0x6000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfe03ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (0x1fc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
            = ((0xffffe0ffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]) 
               | (0x1f00U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
            = ((0xfffffffcU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U]) 
               | (3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U]));
    } else if (vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall) {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U]) 
               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr) 
                  << 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfe3fffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x1c00000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
            = ((0xfffc7fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U]) 
               | (0x38000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
            = ((0xffff9fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U]) 
               | (0x6000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfe03ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x1fc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
            = ((0xffffe0ffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U]) 
               | (0x1f00U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
            = ((0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U]) 
               | (0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
            = (0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU]);
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
            = ((0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result 
                  << 0x12U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result 
                  >> 0xeU));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfe3fffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (0x1c00000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
            = ((0xfffc7fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]) 
               | (0x38000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
            = ((0xffff9fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]) 
               | (0x6000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfe03ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (0x1fc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
            = ((0xffffe0ffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]) 
               | (0x1f00U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
            = ((0xfffffffcU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U]) 
               | (3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U]));
    } else {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[9U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U]) 
               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr) 
                  << 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfe3fffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x1c00000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
            = ((0xfffc7fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U]) 
               | (0x38000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
            = ((0xffff9fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U]) 
               | (0x6000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfe03ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x1fc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
            = ((0xffffe0ffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U]) 
               | (0x1f00U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
            = ((0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U]) 
               | (0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
            = ((0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U]) 
               | (0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U] 
            = ((0xffffff83U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[0U]) 
               | (0x7cU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0xaU] 
            = (0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU]);
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
            = ((0x3ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result 
                  << 0x12U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfffc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result 
                  >> 0xeU));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfe3fffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (0x1c00000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
            = ((0xfffc7fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]) 
               | (0x38000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
            = ((0xffff9fffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]) 
               | (0x6000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
            = ((0xfe03ffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U]) 
               | (0x1fc0000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U] 
            = ((0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 7U));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
            = ((0xffffe0ffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U]) 
               | (0x1f00U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U]));
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U] 
            = ((0xffffff80U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U]) 
               | (0x7fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U]));
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm = ((4U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                                   ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                                    ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE
                                                    : 
                                                   (((- (IData)(
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
                                               : ((2U 
                                                   & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                                    ? 
                                                   (0xfffff000U 
                                                    & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                       << 7U))
                                                    : 
                                                   (((- (IData)(
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
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                                    >> 0x18U)))) 
                                                     << 0xbU) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                           >> 0xdU)) 
                                                       | (0x1fU 
                                                          & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])))
                                                    : vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE)));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR = 0U;
    if ((0x11000000U <= ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                          << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                      >> 0x12U)))) {
        if ((0x20000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U])) {
            vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR = 1U;
        }
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer;
    } else {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2;
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__memerr = ((0x4000U 
                                                  <= vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out) 
                                                 | ((0x4000U 
                                                     <= 
                                                     ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                                       << 0xeU) 
                                                      | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                         >> 0x12U))) 
                                                    | (IData)(
                                                              ((0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out)) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc0000U 
                                                                   & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U]))))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1 
        = (((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                      >> 8U)) == (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                           >> 8U))) 
           & ((0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                               >> 8U))) & (0U != (0x1fU 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                     >> 8U)))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2 
        = (((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                      >> 8U)) == (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                           >> 0xdU))) 
           & ((0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                               >> 8U))) & (0U != (0x1fU 
                                                  & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                     >> 0xdU)))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd = ((0x4000U 
                                                 & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U])
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U])
                                                  ? 
                                                 ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                                     >> 0x12U))
                                                  : vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout)
                                                 : 
                                                ((0x2000U 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U])
                                                  ? 0U
                                                  : 
                                                 ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[8U] 
                                                   << 7U) 
                                                  | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                                     >> 0x19U))));
    __Vtableidx1 = ((((((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall_mem_read) 
                        & ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1) 
                           | (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2))) 
                       << 7U) | ((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                             >> 8U)) 
                                   == (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                >> 0xdU))) 
                                  & ((0U != (0x1fU 
                                             & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                                >> 8U))) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 0xdU))))) 
                                 << 6U)) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2) 
                                             << 5U) 
                                            | (0x10U 
                                               & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                                  >> 0xcU)))) 
                    | (((8U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                               >> 0xeU)) | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite) 
                                            << 2U)) 
                       | (((((0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                       >> 8U)) == (0x1fU 
                                                   & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                      >> 8U))) 
                            & ((0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                                >> 8U))) 
                               & (0U != (0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                                                  >> 8U))))) 
                           << 1U) | (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel = 
        Vtb_OTTER__ConstPool__TABLE_h4a308f1b_0[__Vtableidx1];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel = 
        Vtb_OTTER__ConstPool__TABLE_h70b8536a_0[__Vtableidx1];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall = Vtb_OTTER__ConstPool__TABLE_hdef421c4_0
        [__Vtableidx1];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__sw_sel = Vtb_OTTER__ConstPool__TABLE_hbd3f4b7f_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtb_OTTER___024root___nba_sequent__TOP__1(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___nba_sequent__TOP__1\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<11>/*344:0*/ __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX;
    VL_ZERO_W(345, __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX);
    // Body
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[1U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[6U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[8U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[9U] = vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U];
    __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] = 
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU];
    if (vlSelfRef.tb_OTTER__DOT__RST) {
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[1U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[1U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[2U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[3U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[4U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[5U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[6U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[7U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[8U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[9U];
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
            = Vtb_OTTER__ConstPool__CONST_h7427a5b5_0[0xaU];
    } else if (vlSelfRef.tb_OTTER__DOT__UUT__DOT__stall) {
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
            = (0x26000000U | ((IData)(((((QData)((IData)(
                                                         vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U])) 
                                              >> 0x19U))) 
                                       >> 0x20U)) >> 7U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] = 0U;
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = (0xfe3fffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
            = (0xfffc7fffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
            = ((0xffff9fffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U]) 
               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel) 
                  << 0xdU));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = ((0xfe03ffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]) 
               | (0xfffc0000U & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel) 
                                  << 0x18U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel) 
                                                << 0x16U) 
                                               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl) 
                                                  << 0x12U)))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
            = (0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[6U] = 0U;
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
            = (0xfe000000U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
            = (0xffffe0ffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = (0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
            = (0xfe000000U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
            = (0xffffff80U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U]);
    } else if (vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken) {
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U]));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                          >> 0x19U)))) 
                  << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                                  >> 0x19U)))) 
                >> 7U) | ((IData)(((((QData)((IData)(
                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                                     >> 0x19U))) 
                                   >> 0x20U)) << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
            = ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) 
                                                  >> 0x19U))) 
                        >> 0x20U)) >> 7U);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = ((0xfe3fffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]) 
               | (0xffc00000U & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel) 
                                  << 0x18U) | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel) 
                                               << 0x16U))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
            = ((0xfffc7fffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U]) 
               | (0xffff8000U & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite) 
                                  << 0x11U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread) 
                                                << 0x10U) 
                                               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite) 
                                                  << 0xfU)))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
            = ((0xffff9fffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U]) 
               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel) 
                  << 0xdU));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = ((0xfe03ffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]) 
               | (0xfffc0000U & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel) 
                                  << 0x18U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel) 
                                                << 0x16U) 
                                               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl) 
                                                  << 0x12U)))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
            = ((0xffffff83U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U]) 
               | (0xfffffffcU & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jump) 
                                  << 6U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__br_type) 
                                               << 2U)))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2)))) 
                  << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2)))) 
                >> 7U) | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                                     << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2))) 
                                   >> 0x20U)) << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
            = ((0xfe000000U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2))) 
                           >> 0x20U)) >> 7U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
            = ((0xffffe0ffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U]) 
               | (0x1f00U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                             << 8U)));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm 
                  << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
            = ((0xfe000000U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm 
                  >> 7U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
            = (0xfffffffcU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U]);
    } else {
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[7U]));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U]));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
            = ((0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U]) 
               | (0xfe000000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U]));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
            = (0x1ffffffU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU]);
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = ((0xfe3fffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]) 
               | (0xffc00000U & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel) 
                                  << 0x18U) | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel) 
                                               << 0x16U))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
            = ((0xfffc7fffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U]) 
               | (0xffff8000U & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite) 
                                  << 0x11U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread) 
                                                << 0x10U) 
                                               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite) 
                                                  << 0xfU)))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
            = ((0xffff9fffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U]) 
               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel) 
                  << 0xdU));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = ((0xfe03ffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]) 
               | (0xfffc0000U & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel) 
                                  << 0x18U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel) 
                                                << 0x16U) 
                                               | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl) 
                                                  << 0x12U)))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
            = ((0xffffff83U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U]) 
               | (0xfffffffcU & (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__jump) 
                                  << 6U) | (((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__br_type) 
                                               << 2U)))));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2)))) 
                  << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2)))) 
                >> 7U) | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                                     << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2))) 
                                   >> 0x20U)) << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
            = ((0xfe000000U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U]) 
               | ((IData)(((((QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1)) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2))) 
                           >> 0x20U)) >> 7U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U] 
            = ((0xffffe0ffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U]) 
               | (0x1f00U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                             << 8U)));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
            = ((0x1ffffffU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm 
                  << 0x19U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
            = ((0xfe000000U & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U]) 
               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm 
                  >> 7U));
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
            = ((0xfffffffcU & __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U]) 
               | (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel));
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[1U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[1U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[2U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[2U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[3U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[4U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[5U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[6U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[7U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[8U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] = 
        __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[9U];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU] 
        = __Vdly__tb_OTTER__DOT__UUT__DOT__DE_EX[0xaU];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__JAL = (((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                                << 7U) 
                                               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                                  >> 0x19U)) 
                                              + ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                  << 7U) 
                                                 | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                    >> 0x19U)));
}

VL_INLINE_OPT void Vtb_OTTER___024root___nba_comb__TOP__0(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___nba_comb__TOP__0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out = 
        ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel))
          ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel))
              ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout
              : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                              >> 0x12U))) : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_sel))
                                              ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                    >> 0x12U))
                                              : ((0x1000000U 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                                  ? 
                                                 ((0x1000000U 
                                                   & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                                   ? 
                                                  ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                    << 7U) 
                                                   | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                      >> 0x19U))
                                                   : 
                                                  ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                                    << 7U) 
                                                   | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                      >> 0x19U)))
                                                  : 
                                                 ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                                   << 7U) 
                                                  | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                     >> 0x19U)))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out = 
        ((2U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel))
          ? ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel))
              ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__memout
              : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[4U] 
                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                              >> 0x12U))) : ((1U & (IData)(vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_sel))
                                              ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                    >> 0x12U))
                                              : ((0x800000U 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                                   ? 0U
                                                   : 
                                                  ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                                    << 7U) 
                                                   | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                                      >> 0x19U)))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                                   ? 
                                                  ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                    << 7U) 
                                                   | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                      >> 0x19U))
                                                   : 
                                                  ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                                    << 7U) 
                                                   | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                      >> 0x19U))))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result = 
        ((0x200000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
          ? ((0x100000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
              ? ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                  ? 0U : ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                           ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out, 
                                            (0x1fU 
                                             & vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out))
                           : 0U)) : ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                      ? 0U : ((0x40000U 
                                               & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                                               ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out
                                               : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                                                  - vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out))))
          : ((0x100000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
              ? ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                  ? ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         & vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)
                      : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         | vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out))
                  : ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         >> (0x1fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out))
                      : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         ^ vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)))
              : ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                  ? ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         < vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)
                      : VL_LTS_III(32, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out))
                  : ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         << (0x1fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out))
                      : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         + vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush = 0U;
    if ((0x20U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
        if ((0x10U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
            if ((8U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 0U;
            } else if ((4U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
                if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                     >= vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 1U;
                }
            } else if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                        < vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U] 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
                    if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                         < vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush = 1U;
                    }
                } else if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                            >= vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush = 1U;
                }
            }
        } else if ((8U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
            if ((4U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
                if (VL_GTES_III(32, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 1U;
                }
                if (VL_LTS_III(32, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush = 1U;
                }
            } else {
                if (VL_LTS_III(32, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 1U;
                }
                if (VL_GTES_III(32, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out, vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                    vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush = 1U;
                }
            }
        } else if ((4U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[0U])) {
            if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                 != vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 1U;
            }
            if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                 == vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush = 1U;
            }
        } else {
            if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                 == vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 1U;
            }
            if ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_a_out 
                 != vlSelfRef.tb_OTTER__DOT__UUT__DOT__fwd_b_out)) {
                vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush = 1U;
            }
        }
    } else {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__branch_taken = 0U;
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final 
        = (3U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[0U]);
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc = ((IData)(4U) 
                                                 + vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out);
    if (vlSelfRef.tb_OTTER__DOT__UUT__DOT__flush) {
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_sel_final = 0U;
        vlSelfRef.tb_OTTER__DOT__UUT__DOT__nextpc = 
            ((IData)(4U) + ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[9U] 
                             << 7U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[8U] 
                                       >> 0x19U)));
    }
}

void Vtb_OTTER___024root___timing_resume(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___timing_resume\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_OTTER___024root___eval_triggers__act(Vtb_OTTER___024root* vlSelf);

bool Vtb_OTTER___024root___eval_phase__act(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_phase__act\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_OTTER___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_OTTER___024root___timing_resume(vlSelf);
        Vtb_OTTER___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_OTTER___024root___eval_phase__nba(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_phase__nba\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_OTTER___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_OTTER___024root___dump_triggers__nba(Vtb_OTTER___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_OTTER___024root___dump_triggers__act(Vtb_OTTER___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_OTTER___024root___eval(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_OTTER___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_OTTER.sv", 23, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_OTTER___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_OTTER.sv", 23, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_OTTER___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_OTTER___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_OTTER___024root___eval_debug_assertions(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_debug_assertions\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

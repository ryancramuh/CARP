// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_OTTER.h for the primary calling header

#include "Vtb_OTTER__pch.h"
#include "Vtb_OTTER___024root.h"

VL_ATTR_COLD void Vtb_OTTER___024root___eval_static__TOP(Vtb_OTTER___024root* vlSelf);
VL_ATTR_COLD void Vtb_OTTER___024root____Vm_traceActivitySetAll(Vtb_OTTER___024root* vlSelf);

VL_ATTR_COLD void Vtb_OTTER___024root___eval_static(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_static\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_OTTER___024root___eval_static__TOP(vlSelf);
    Vtb_OTTER___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_OTTER___024root___eval_static__TOP(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_static__TOP\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer = 0U;
}

VL_ATTR_COLD void Vtb_OTTER___024root___eval_final(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_final\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_OTTER___024root___dump_triggers__stl(Vtb_OTTER___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_OTTER___024root___eval_phase__stl(Vtb_OTTER___024root* vlSelf);

VL_ATTR_COLD void Vtb_OTTER___024root___eval_settle(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_settle\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_OTTER___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_OTTER.sv", 23, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_OTTER___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_OTTER___024root___dump_triggers__stl(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___dump_triggers__stl\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_OTTER___024root___stl_sequent__TOP__0(Vtb_OTTER___024root* vlSelf);

VL_ATTR_COLD void Vtb_OTTER___024root___eval_stl(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_stl\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_OTTER___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_OTTER___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_OTTER___024root___stl_sequent__TOP__0(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___stl_sequent__TOP__0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR = 0U;
    if ((0x11000000U <= ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                          << 0x15U) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                       >> 0xbU)))) {
        if ((0x400U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U])) {
            vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR = 1U;
        }
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_in = ((IData)(4U) 
                                                + vlSelfRef.tb_OTTER__DOT__UUT__DOT__pc_out);
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 0U;
    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                  >> 0x18U)))) {
        if ((0x800000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
            if ((0x400000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                              >> 0x15U)))) {
                    if ((0x100000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                        if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                            if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl = 9U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 1U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 3U;
                            }
                        }
                    } else if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                        if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl 
                                = ((8U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                          >> 0xdU)) 
                                   | (7U & ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                                             << 2U) 
                                            | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                               >> 0x1eU))));
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                  >> 0x14U)))) {
                        if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                            if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                 >> 0x15U)))) {
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                              >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                        if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                          >> 0x16U)))) {
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                              >> 0x15U)))) {
                    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                  >> 0x14U)))) {
                        if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                            if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__memwrite = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x400000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                          >> 0x15U)))) {
                if ((0x100000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                    if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                        if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl = 0U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_sel = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 2U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                            vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 3U;
                        }
                    }
                } else if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                    if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_ctrl 
                            = ((1U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])
                                ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                    >> 0x1fU) ? ((0x40000000U 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])
                                                  ? 7U
                                                  : 6U)
                                    : ((0x40000000U 
                                        & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])
                                        ? ((0x10000U 
                                            & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U])
                                            ? 0xdU : 5U)
                                        : 4U)) : ((
                                                   vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])
                                                    ? 1U
                                                    : 0U)));
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 3U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                             >> 0x15U)))) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                          >> 0x14U)))) {
                if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                    if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_sel = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__regwrite = 1U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_sel = 2U;
                        vlSelfRef.tb_OTTER__DOT__UUT__DOT__imm_sel = 0U;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                      >> 0x17U)))) {
            if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                          >> 0x16U)))) {
                if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                              >> 0x15U)))) {
                    if ((1U & (~ (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U] 
                                  >> 0x14U)))) {
                        if ((0x80000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                            if ((0x40000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[8U])) {
                                vlSelfRef.tb_OTTER__DOT__UUT__DOT__memread = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE 
        = (((- (IData)((1U & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                              >> 0x11U)))) << 0xbU) 
           | (0x7ffU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[9U] 
                        >> 6U)));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rf_rd = ((0x80U 
                                                 & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U])
                                                 ? 
                                                ((0x40U 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U])
                                                  ? 
                                                 ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[3U] 
                                                   << 0x15U) 
                                                  | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[2U] 
                                                     >> 0xbU))
                                                  : 
                                                 ((0x11000000U 
                                                   <= 
                                                   ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[3U] 
                                                     << 0x15U) 
                                                    | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__EX_MEM[2U] 
                                                       >> 0xbU)))
                                                   ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer
                                                   : vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2))
                                                 : 
                                                ((0x40U 
                                                  & vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[1U])
                                                  ? 0U
                                                  : 
                                                 ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[7U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__MEM_WB[6U] 
                                                     >> 0x12U))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out = 
        ((0x20000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
          ? ((0x20000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
              ? ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                  << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                              >> 0x12U)) : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
                                             << 0xeU) 
                                            | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                               >> 0x12U)))
          : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[6U] 
              << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                          >> 0x12U)));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out = 
        ((0x10000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
          ? ((0x8000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
              ? 0U : ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                       << 0xeU) | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[7U] 
                                   >> 0x12U))) : ((0x8000U 
                                                   & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                                                   ? 
                                                  ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U] 
                                                      >> 0x12U))
                                                   : 
                                                  ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                      >> 0x12U))));
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__alu_result = 
        ((0x4000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
          ? ((0x2000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
              ? ((0x1000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                  ? 0U : ((0x800U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                           ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out, 
                                            (0x1fU 
                                             & vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out))
                           : 0U)) : ((0x1000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                                      ? 0U : ((0x800U 
                                               & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                                               ? vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out
                                               : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                                                  - vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out))))
          : ((0x2000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
              ? ((0x1000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                  ? ((0x800U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                         & vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out)
                      : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                         | vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out))
                  : ((0x800U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                         >> (0x1fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out))
                      : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                         ^ vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out)))
              : ((0x1000U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                  ? ((0x800U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                         < vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out)
                      : VL_LTS_III(32, vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out, vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out))
                  : ((0x800U & vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[3U])
                      ? (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                         << (0x1fU & vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out))
                      : (vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_a_out 
                         + vlSelfRef.tb_OTTER__DOT__UUT__DOT__src_b_out)))));
}

VL_ATTR_COLD void Vtb_OTTER___024root___eval_triggers__stl(Vtb_OTTER___024root* vlSelf);

VL_ATTR_COLD bool Vtb_OTTER___024root___eval_phase__stl(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_phase__stl\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_OTTER___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_OTTER___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_OTTER___024root___dump_triggers__act(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___dump_triggers__act\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_OTTER.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_OTTER.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_OTTER___024root___dump_triggers__nba(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___dump_triggers__nba\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_OTTER.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_OTTER.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_OTTER___024root____Vm_traceActivitySetAll(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root____Vm_traceActivitySetAll\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_OTTER___024root___ctor_var_reset(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___ctor_var_reset\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_OTTER__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__RST = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__mem_err = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(306, vlSelf->tb_OTTER__DOT__UUT__DOT__FE_DE);
    VL_RAND_RESET_W(306, vlSelf->tb_OTTER__DOT__UUT__DOT__DE_EX);
    VL_RAND_RESET_W(306, vlSelf->tb_OTTER__DOT__UUT__DOT__EX_MEM);
    VL_RAND_RESET_W(306, vlSelf->tb_OTTER__DOT__UUT__DOT__MEM_WB);
    vlSelf->tb_OTTER__DOT__UUT__DOT__ir = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__u_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__i_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__s_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__b_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__j_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__pc_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_OTTER__DOT__UUT__DOT__src_a_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__src_b_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->tb_OTTER__DOT__UUT__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__memread = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__rf_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_OTTER__DOT__UUT__DOT__src_a_out = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__src_b_out = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__rf_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_IN = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2 = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_OTTER__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

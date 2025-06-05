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

extern const VlUnpacked<CData/*1:0*/, 256> Vtb_OTTER__ConstPool__TABLE_h4a308f1b_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_OTTER__ConstPool__TABLE_h70b8536a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_OTTER__ConstPool__TABLE_hdef421c4_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_OTTER__ConstPool__TABLE_hbd3f4b7f_0;

VL_ATTR_COLD void Vtb_OTTER___024root___stl_sequent__TOP__0(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___stl_sequent__TOP__0\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__JAL = (((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[9U] 
                                                << 7U) 
                                               | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[8U] 
                                                  >> 0x19U)) 
                                              + ((vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[5U] 
                                                  << 7U) 
                                                 | (vlSelfRef.tb_OTTER__DOT__UUT__DOT__DE_EX[4U] 
                                                    >> 0x19U)));
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
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs1 = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
        [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                   >> 8U))];
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__rs2 = vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register
        [(0x1fU & (vlSelfRef.tb_OTTER__DOT__UUT__DOT__FE_DE[0xaU] 
                   >> 0xdU))];
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
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_OTTER___024root___ctor_var_reset(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___ctor_var_reset\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_OTTER__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__RST = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__mem_err = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(345, vlSelf->tb_OTTER__DOT__UUT__DOT__FE_DE);
    VL_RAND_RESET_W(345, vlSelf->tb_OTTER__DOT__UUT__DOT__DE_EX);
    VL_RAND_RESET_W(345, vlSelf->tb_OTTER__DOT__UUT__DOT__EX_MEM);
    VL_RAND_RESET_W(345, vlSelf->tb_OTTER__DOT__UUT__DOT__MEM_WB);
    vlSelf->tb_OTTER__DOT__UUT__DOT__ir = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__nextpc = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__pc_sel_final = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__u_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__i_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__s_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__b_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__j_type = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__pc_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__src_a_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__src_b_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->tb_OTTER__DOT__UUT__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__memread = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__rf_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_OTTER__DOT__UUT__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__br_type = VL_RAND_RESET_I(3);
    vlSelf->tb_OTTER__DOT__UUT__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__memout = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__memerr = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__fwd_a_out = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__fwd_b_out = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__fwd_a_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__fwd_b_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__rf_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__sw_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_OTTER__DOT__UUT__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__stall_mem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__stall_mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__jalr_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__jal_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__branch_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__reg_result = VL_RAND_RESET_I(32);
    vlSelf->tb_OTTER__DOT__UUT__DOT__JAL = VL_RAND_RESET_I(32);
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
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD1 = VL_RAND_RESET_I(1);
    vlSelf->tb_OTTER__DOT__UUT__DOT__OTTER_HU__DOT__MEM_FWD2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_OTTER__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

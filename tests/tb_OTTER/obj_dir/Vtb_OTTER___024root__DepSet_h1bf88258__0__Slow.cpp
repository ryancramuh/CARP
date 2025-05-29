// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_OTTER.h for the primary calling header

#include "Vtb_OTTER__pch.h"
#include "Vtb_OTTER__Syms.h"
#include "Vtb_OTTER___024root.h"

VL_ATTR_COLD void Vtb_OTTER___024root___eval_initial__TOP(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_initial__TOP\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x54544552U;
    __Vtemp_1[2U] = 0x74625f4fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_OTTER__DOT__RST = 1U;
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x6d6f7279U;
    __Vtemp_2[2U] = 0x725f6d65U;
    __Vtemp_2[3U] = 0x6f747465U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory)
                 , 0U, 0x3fffU);
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[1U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[2U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[3U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[4U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[5U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[6U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[7U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[8U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[9U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0xaU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0xbU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0xcU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0xdU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0xeU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0xfU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x10U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x11U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x12U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x13U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x14U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x15U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x16U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x17U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x18U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x19U] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x1aU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x1bU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x1cU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x1dU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x1eU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register[0x1fU] = 0U;
    vlSelfRef.tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i = 0x20U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_OTTER___024root___dump_triggers__stl(Vtb_OTTER___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_OTTER___024root___eval_triggers__stl(Vtb_OTTER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_OTTER___024root___eval_triggers__stl\n"); );
    Vtb_OTTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_OTTER___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

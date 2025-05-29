// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_OTTER.h for the primary calling header

#ifndef VERILATED_VTB_OTTER___024ROOT_H_
#define VERILATED_VTB_OTTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_OTTER__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_OTTER___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_OTTER__DOT__CLK;
    CData/*0:0*/ tb_OTTER__DOT__RST;
    CData/*0:0*/ tb_OTTER__DOT__UUT__DOT__mem_err;
    CData/*2:0*/ tb_OTTER__DOT__UUT__DOT__pc_sel;
    CData/*0:0*/ tb_OTTER__DOT__UUT__DOT__src_a_sel;
    CData/*1:0*/ tb_OTTER__DOT__UUT__DOT__src_b_sel;
    CData/*3:0*/ tb_OTTER__DOT__UUT__DOT__alu_ctrl;
    CData/*0:0*/ tb_OTTER__DOT__UUT__DOT__regwrite;
    CData/*0:0*/ tb_OTTER__DOT__UUT__DOT__memwrite;
    CData/*0:0*/ tb_OTTER__DOT__UUT__DOT__memread;
    CData/*1:0*/ tb_OTTER__DOT__UUT__DOT__rf_sel;
    CData/*2:0*/ tb_OTTER__DOT__UUT__DOT__imm_sel;
    CData/*0:0*/ tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_WR;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_OTTER__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__ir;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__pc_in;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__pc_out;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__u_type;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__i_type;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__s_type;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__b_type;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__j_type;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__src_a_out;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__src_b_out;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__alu_result;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__rf_rd;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__IO_IN;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memOut2;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__ioIn_buffer;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_OTTER__DOT__UUT__DOT__OTTER_IG__DOT__I_TYPE;
    IData/*31:0*/ __VactIterCount;
    VlWide<10>/*305:0*/ tb_OTTER__DOT__UUT__DOT__FE_DE;
    VlWide<10>/*305:0*/ tb_OTTER__DOT__UUT__DOT__DE_EX;
    VlWide<10>/*305:0*/ tb_OTTER__DOT__UUT__DOT__EX_MEM;
    VlWide<10>/*305:0*/ tb_OTTER__DOT__UUT__DOT__MEM_WB;
    VlUnpacked<IData/*31:0*/, 16384> tb_OTTER__DOT__UUT__DOT__OTTER_MEM__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> tb_OTTER__DOT__UUT__DOT__OTTER_RF__DOT__register;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_OTTER__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_OTTER___024root(Vtb_OTTER__Syms* symsp, const char* v__name);
    ~Vtb_OTTER___024root();
    VL_UNCOPYABLE(Vtb_OTTER___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

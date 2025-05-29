// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_OTTER.h for the primary calling header

#include "Vtb_OTTER__pch.h"
#include "Vtb_OTTER__Syms.h"
#include "Vtb_OTTER___024root.h"

void Vtb_OTTER___024root___ctor_var_reset(Vtb_OTTER___024root* vlSelf);

Vtb_OTTER___024root::Vtb_OTTER___024root(Vtb_OTTER__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_OTTER___024root___ctor_var_reset(this);
}

void Vtb_OTTER___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_OTTER___024root::~Vtb_OTTER___024root() {
}

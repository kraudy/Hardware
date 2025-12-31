// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VnorGate.h for the primary calling header

#include "VnorGate__pch.h"

void VnorGate___024root___ctor_var_reset(VnorGate___024root* vlSelf);

VnorGate___024root::VnorGate___024root(VnorGate__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VnorGate___024root___ctor_var_reset(this);
}

void VnorGate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VnorGate___024root::~VnorGate___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

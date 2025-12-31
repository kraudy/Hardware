// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VnandGate.h for the primary calling header

#include "VnandGate__pch.h"

void VnandGate___024root___ctor_var_reset(VnandGate___024root* vlSelf);

VnandGate___024root::VnandGate___024root(VnandGate__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VnandGate___024root___ctor_var_reset(this);
}

void VnandGate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VnandGate___024root::~VnandGate___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

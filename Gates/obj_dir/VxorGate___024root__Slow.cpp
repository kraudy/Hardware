// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VxorGate.h for the primary calling header

#include "VxorGate__pch.h"

void VxorGate___024root___ctor_var_reset(VxorGate___024root* vlSelf);

VxorGate___024root::VxorGate___024root(VxorGate__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VxorGate___024root___ctor_var_reset(this);
}

void VxorGate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VxorGate___024root::~VxorGate___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

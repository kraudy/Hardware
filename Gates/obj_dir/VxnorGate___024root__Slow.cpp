// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VxnorGate.h for the primary calling header

#include "VxnorGate__pch.h"

void VxnorGate___024root___ctor_var_reset(VxnorGate___024root* vlSelf);

VxnorGate___024root::VxnorGate___024root(VxnorGate__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VxnorGate___024root___ctor_var_reset(this);
}

void VxnorGate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VxnorGate___024root::~VxnorGate___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

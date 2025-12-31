// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VorGate.h for the primary calling header

#include "VorGate__pch.h"

void VorGate___024root___ctor_var_reset(VorGate___024root* vlSelf);

VorGate___024root::VorGate___024root(VorGate__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VorGate___024root___ctor_var_reset(this);
}

void VorGate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VorGate___024root::~VorGate___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

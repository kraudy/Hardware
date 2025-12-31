// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VandGate.h for the primary calling header

#include "VandGate__pch.h"

void VandGate___024root___ctor_var_reset(VandGate___024root* vlSelf);

VandGate___024root::VandGate___024root(VandGate__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VandGate___024root___ctor_var_reset(this);
}

void VandGate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VandGate___024root::~VandGate___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

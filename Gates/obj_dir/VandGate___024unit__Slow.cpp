// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VandGate.h for the primary calling header

#include "VandGate__pch.h"

void VandGate___024unit___ctor_var_reset(VandGate___024unit* vlSelf);

void VandGate___024unit::ctor(VandGate__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VandGate___024unit___ctor_var_reset(this);
}

void VandGate___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VandGate___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

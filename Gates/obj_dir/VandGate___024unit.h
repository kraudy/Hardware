// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VandGate.h for the primary calling header

#ifndef VERILATED_VANDGATE___024UNIT_H_
#define VERILATED_VANDGATE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VandGate__Syms;

class alignas(VL_CACHE_LINE_BYTES) VandGate___024unit final {
  public:

    // INTERNAL VARIABLES
    VandGate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VandGate___024unit() = default;
    ~VandGate___024unit() = default;
    void ctor(VandGate__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VandGate___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

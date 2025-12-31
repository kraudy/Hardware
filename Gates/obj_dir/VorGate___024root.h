// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VorGate.h for the primary calling header

#ifndef VERILATED_VORGATE___024ROOT_H_
#define VERILATED_VORGATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VorGate__Syms;

class alignas(VL_CACHE_LINE_BYTES) VorGate___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top__DOT__a;
    CData/*0:0*/ top__DOT__b;
    CData/*0:0*/ top__DOT__y;
    CData/*0:0*/ __VstlFirstIteration;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    VorGate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VorGate___024root(VorGate__Syms* symsp, const char* namep);
    ~VorGate___024root();
    VL_UNCOPYABLE(VorGate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

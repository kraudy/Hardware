// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VandGate.h for the primary calling header

#ifndef VERILATED_VANDGATE___024ROOT_H_
#define VERILATED_VANDGATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VandGate__Syms;

class alignas(VL_CACHE_LINE_BYTES) VandGate___024root final {
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
    VandGate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VandGate___024root(VandGate__Syms* symsp, const char* namep);
    ~VandGate___024root();
    VL_UNCOPYABLE(VandGate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

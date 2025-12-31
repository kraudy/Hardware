// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VnandGate.h for the primary calling header

#ifndef VERILATED_VNANDGATE___024ROOT_H_
#define VERILATED_VNANDGATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VnandGate__Syms;

class alignas(VL_CACHE_LINE_BYTES) VnandGate___024root final {
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
    VnandGate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VnandGate___024root(VnandGate__Syms* symsp, const char* namep);
    ~VnandGate___024root();
    VL_UNCOPYABLE(VnandGate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

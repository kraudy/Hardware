// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VxnorGate.h for the primary calling header

#ifndef VERILATED_VXNORGATE___024ROOT_H_
#define VERILATED_VXNORGATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VxnorGate__Syms;

class alignas(VL_CACHE_LINE_BYTES) VxnorGate___024root final {
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
    VxnorGate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VxnorGate___024root(VxnorGate__Syms* symsp, const char* namep);
    ~VxnorGate___024root();
    VL_UNCOPYABLE(VxnorGate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

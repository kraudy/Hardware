// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VXNORGATE__SYMS_H_
#define VERILATED_VXNORGATE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VxnorGate.h"

// INCLUDE MODULE CLASSES
#include "VxnorGate___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VxnorGate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VxnorGate* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VxnorGate___024root            TOP;

    // CONSTRUCTORS
    VxnorGate__Syms(VerilatedContext* contextp, const char* namep, VxnorGate* modelp);
    ~VxnorGate__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

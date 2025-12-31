// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VXORGATE__SYMS_H_
#define VERILATED_VXORGATE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VxorGate.h"

// INCLUDE MODULE CLASSES
#include "VxorGate___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VxorGate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VxorGate* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VxorGate___024root             TOP;

    // CONSTRUCTORS
    VxorGate__Syms(VerilatedContext* contextp, const char* namep, VxorGate* modelp);
    ~VxorGate__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

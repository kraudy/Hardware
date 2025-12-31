// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VORGATE__SYMS_H_
#define VERILATED_VORGATE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VorGate.h"

// INCLUDE MODULE CLASSES
#include "VorGate___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VorGate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VorGate* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VorGate___024root              TOP;

    // CONSTRUCTORS
    VorGate__Syms(VerilatedContext* contextp, const char* namep, VorGate* modelp);
    ~VorGate__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

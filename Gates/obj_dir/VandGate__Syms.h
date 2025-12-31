// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VANDGATE__SYMS_H_
#define VERILATED_VANDGATE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VandGate.h"

// INCLUDE MODULE CLASSES
#include "VandGate___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VandGate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VandGate* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VandGate___024root             TOP;

    // CONSTRUCTORS
    VandGate__Syms(VerilatedContext* contextp, const char* namep, VandGate* modelp);
    ~VandGate__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

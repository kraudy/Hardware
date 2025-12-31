// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VxnorGate__pch.h"

//============================================================
// Constructors

VxnorGate::VxnorGate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VxnorGate__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VxnorGate::VxnorGate(const char* _vcname__)
    : VxnorGate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VxnorGate::~VxnorGate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VxnorGate___024root___eval_debug_assertions(VxnorGate___024root* vlSelf);
#endif  // VL_DEBUG
void VxnorGate___024root___eval_static(VxnorGate___024root* vlSelf);
void VxnorGate___024root___eval_initial(VxnorGate___024root* vlSelf);
void VxnorGate___024root___eval_settle(VxnorGate___024root* vlSelf);
void VxnorGate___024root___eval(VxnorGate___024root* vlSelf);

void VxnorGate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VxnorGate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VxnorGate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VxnorGate___024root___eval_static(&(vlSymsp->TOP));
        VxnorGate___024root___eval_initial(&(vlSymsp->TOP));
        VxnorGate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VxnorGate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VxnorGate::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VxnorGate::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VxnorGate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VxnorGate___024root___eval_final(VxnorGate___024root* vlSelf);

VL_ATTR_COLD void VxnorGate::final() {
    VxnorGate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VxnorGate::hierName() const { return vlSymsp->name(); }
const char* VxnorGate::modelName() const { return "VxnorGate"; }
unsigned VxnorGate::threads() const { return 1; }
void VxnorGate::prepareClone() const { contextp()->prepareClone(); }
void VxnorGate::atClone() const {
    contextp()->threadPoolpOnClone();
}

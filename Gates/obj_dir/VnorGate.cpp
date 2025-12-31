// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VnorGate__pch.h"

//============================================================
// Constructors

VnorGate::VnorGate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VnorGate__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VnorGate::VnorGate(const char* _vcname__)
    : VnorGate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VnorGate::~VnorGate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VnorGate___024root___eval_debug_assertions(VnorGate___024root* vlSelf);
#endif  // VL_DEBUG
void VnorGate___024root___eval_static(VnorGate___024root* vlSelf);
void VnorGate___024root___eval_initial(VnorGate___024root* vlSelf);
void VnorGate___024root___eval_settle(VnorGate___024root* vlSelf);
void VnorGate___024root___eval(VnorGate___024root* vlSelf);

void VnorGate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VnorGate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VnorGate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VnorGate___024root___eval_static(&(vlSymsp->TOP));
        VnorGate___024root___eval_initial(&(vlSymsp->TOP));
        VnorGate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VnorGate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VnorGate::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VnorGate::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VnorGate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VnorGate___024root___eval_final(VnorGate___024root* vlSelf);

VL_ATTR_COLD void VnorGate::final() {
    VnorGate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VnorGate::hierName() const { return vlSymsp->name(); }
const char* VnorGate::modelName() const { return "VnorGate"; }
unsigned VnorGate::threads() const { return 1; }
void VnorGate::prepareClone() const { contextp()->prepareClone(); }
void VnorGate::atClone() const {
    contextp()->threadPoolpOnClone();
}

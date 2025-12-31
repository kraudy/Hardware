// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VorGate__pch.h"

//============================================================
// Constructors

VorGate::VorGate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VorGate__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VorGate::VorGate(const char* _vcname__)
    : VorGate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VorGate::~VorGate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VorGate___024root___eval_debug_assertions(VorGate___024root* vlSelf);
#endif  // VL_DEBUG
void VorGate___024root___eval_static(VorGate___024root* vlSelf);
void VorGate___024root___eval_initial(VorGate___024root* vlSelf);
void VorGate___024root___eval_settle(VorGate___024root* vlSelf);
void VorGate___024root___eval(VorGate___024root* vlSelf);

void VorGate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VorGate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VorGate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VorGate___024root___eval_static(&(vlSymsp->TOP));
        VorGate___024root___eval_initial(&(vlSymsp->TOP));
        VorGate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VorGate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VorGate::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VorGate::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VorGate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VorGate___024root___eval_final(VorGate___024root* vlSelf);

VL_ATTR_COLD void VorGate::final() {
    VorGate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VorGate::hierName() const { return vlSymsp->name(); }
const char* VorGate::modelName() const { return "VorGate"; }
unsigned VorGate::threads() const { return 1; }
void VorGate::prepareClone() const { contextp()->prepareClone(); }
void VorGate::atClone() const {
    contextp()->threadPoolpOnClone();
}

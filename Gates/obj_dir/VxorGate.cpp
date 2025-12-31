// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VxorGate__pch.h"

//============================================================
// Constructors

VxorGate::VxorGate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VxorGate__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VxorGate::VxorGate(const char* _vcname__)
    : VxorGate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VxorGate::~VxorGate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VxorGate___024root___eval_debug_assertions(VxorGate___024root* vlSelf);
#endif  // VL_DEBUG
void VxorGate___024root___eval_static(VxorGate___024root* vlSelf);
void VxorGate___024root___eval_initial(VxorGate___024root* vlSelf);
void VxorGate___024root___eval_settle(VxorGate___024root* vlSelf);
void VxorGate___024root___eval(VxorGate___024root* vlSelf);

void VxorGate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VxorGate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VxorGate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VxorGate___024root___eval_static(&(vlSymsp->TOP));
        VxorGate___024root___eval_initial(&(vlSymsp->TOP));
        VxorGate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VxorGate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VxorGate::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VxorGate::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VxorGate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VxorGate___024root___eval_final(VxorGate___024root* vlSelf);

VL_ATTR_COLD void VxorGate::final() {
    VxorGate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VxorGate::hierName() const { return vlSymsp->name(); }
const char* VxorGate::modelName() const { return "VxorGate"; }
unsigned VxorGate::threads() const { return 1; }
void VxorGate::prepareClone() const { contextp()->prepareClone(); }
void VxorGate::atClone() const {
    contextp()->threadPoolpOnClone();
}

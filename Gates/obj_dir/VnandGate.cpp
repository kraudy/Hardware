// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VnandGate__pch.h"

//============================================================
// Constructors

VnandGate::VnandGate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VnandGate__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VnandGate::VnandGate(const char* _vcname__)
    : VnandGate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VnandGate::~VnandGate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VnandGate___024root___eval_debug_assertions(VnandGate___024root* vlSelf);
#endif  // VL_DEBUG
void VnandGate___024root___eval_static(VnandGate___024root* vlSelf);
void VnandGate___024root___eval_initial(VnandGate___024root* vlSelf);
void VnandGate___024root___eval_settle(VnandGate___024root* vlSelf);
void VnandGate___024root___eval(VnandGate___024root* vlSelf);

void VnandGate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VnandGate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VnandGate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VnandGate___024root___eval_static(&(vlSymsp->TOP));
        VnandGate___024root___eval_initial(&(vlSymsp->TOP));
        VnandGate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VnandGate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VnandGate::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VnandGate::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VnandGate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VnandGate___024root___eval_final(VnandGate___024root* vlSelf);

VL_ATTR_COLD void VnandGate::final() {
    VnandGate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VnandGate::hierName() const { return vlSymsp->name(); }
const char* VnandGate::modelName() const { return "VnandGate"; }
unsigned VnandGate::threads() const { return 1; }
void VnandGate::prepareClone() const { contextp()->prepareClone(); }
void VnandGate::atClone() const {
    contextp()->threadPoolpOnClone();
}

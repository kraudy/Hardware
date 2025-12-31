// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VandGate__pch.h"

//============================================================
// Constructors

VandGate::VandGate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VandGate__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VandGate::VandGate(const char* _vcname__)
    : VandGate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VandGate::~VandGate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VandGate___024root___eval_debug_assertions(VandGate___024root* vlSelf);
#endif  // VL_DEBUG
void VandGate___024root___eval_static(VandGate___024root* vlSelf);
void VandGate___024root___eval_initial(VandGate___024root* vlSelf);
void VandGate___024root___eval_settle(VandGate___024root* vlSelf);
void VandGate___024root___eval(VandGate___024root* vlSelf);

void VandGate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VandGate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VandGate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VandGate___024root___eval_static(&(vlSymsp->TOP));
        VandGate___024root___eval_initial(&(vlSymsp->TOP));
        VandGate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VandGate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VandGate::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VandGate::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VandGate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VandGate___024root___eval_final(VandGate___024root* vlSelf);

VL_ATTR_COLD void VandGate::final() {
    VandGate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VandGate::hierName() const { return vlSymsp->name(); }
const char* VandGate::modelName() const { return "VandGate"; }
unsigned VandGate::threads() const { return 1; }
void VandGate::prepareClone() const { contextp()->prepareClone(); }
void VandGate::atClone() const {
    contextp()->threadPoolpOnClone();
}

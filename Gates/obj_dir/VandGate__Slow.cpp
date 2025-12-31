// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VandGate.h for the primary calling header

#include "VandGate.h"
#include "VandGate__Syms.h"

//==========

VL_CTOR_IMP(VandGate) {
    VandGate__Syms* __restrict vlSymsp = __VlSymsp = new VandGate__Syms(this, name());
    VandGate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VandGate::__Vconfigure(VandGate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VandGate::~VandGate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VandGate::_initial__TOP__1(VandGate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VandGate::_initial__TOP__1\n"); );
    VandGate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_WRITEF("a b | y\n----+---\n");
    VL_WRITEF("0 0 | %b\n",1,vlTOPp->top__DOT__y);
    VL_WRITEF("0 1 | %b\n",1,vlTOPp->top__DOT__y);
    VL_WRITEF("1 0 | %b\n",1,vlTOPp->top__DOT__y);
    vlTOPp->top__DOT__a = 1U;
    vlTOPp->top__DOT__b = 1U;
    VL_WRITEF("1 1 | %b\n",1,vlTOPp->top__DOT__y);
    VL_FINISH_MT("andGate.v", 31, "");
    vlTOPp->top__DOT__y = 1U;
}

void VandGate::_settle__TOP__2(VandGate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VandGate::_settle__TOP__2\n"); );
    VandGate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__y = ((IData)(vlTOPp->top__DOT__a) 
                           & (IData)(vlTOPp->top__DOT__b));
}

void VandGate::_eval_initial(VandGate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VandGate::_eval_initial\n"); );
    VandGate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VandGate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VandGate::final\n"); );
    // Variables
    VandGate__Syms* __restrict vlSymsp = this->__VlSymsp;
    VandGate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VandGate::_eval_settle(VandGate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VandGate::_eval_settle\n"); );
    VandGate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VandGate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VandGate::_ctor_var_reset\n"); );
    // Body
    top__DOT__a = VL_RAND_RESET_I(1);
    top__DOT__b = VL_RAND_RESET_I(1);
    top__DOT__y = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top__DOT__y = VL_RAND_RESET_I(1);
}

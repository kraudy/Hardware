// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VxorGate.h for the primary calling header

#include "VxorGate__pch.h"

VlCoroutine VxorGate___024root___eval_initial__TOP__Vtiming__0(VxorGate___024root* vlSelf);

void VxorGate___024root___eval_initial(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_initial\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VxorGate___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine VxorGate___024root___eval_initial__TOP__Vtiming__0(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_initial__TOP__Vtiming__0\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("a b | y\n----+---\n",0);
    vlSelfRef.top__DOT__a = 0U;
    vlSelfRef.top__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "xorGate.v", 
                                         24);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.top__DOT__a,
                 1,(IData)(vlSelfRef.top__DOT__b),1,
                 vlSelfRef.top__DOT__y);
    vlSelfRef.top__DOT__a = 0U;
    vlSelfRef.top__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "xorGate.v", 
                                         25);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.top__DOT__a,
                 1,(IData)(vlSelfRef.top__DOT__b),1,
                 vlSelfRef.top__DOT__y);
    vlSelfRef.top__DOT__a = 1U;
    vlSelfRef.top__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "xorGate.v", 
                                         26);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.top__DOT__a,
                 1,(IData)(vlSelfRef.top__DOT__b),1,
                 vlSelfRef.top__DOT__y);
    vlSelfRef.top__DOT__a = 1U;
    vlSelfRef.top__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "xorGate.v", 
                                         27);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.top__DOT__a,
                 1,(IData)(vlSelfRef.top__DOT__b),1,
                 vlSelfRef.top__DOT__y);
    VL_FINISH_MT("xorGate.v", 29, "");
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void VxorGate___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VxorGate___024root___eval_triggers__act(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_triggers__act\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VxorGate___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VxorGate___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VxorGate___024root___act_sequent__TOP__0(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___act_sequent__TOP__0\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__y = ((IData)(vlSelfRef.top__DOT__a) 
                             ^ (IData)(vlSelfRef.top__DOT__b));
}

void VxorGate___024root___eval_act(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_act\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.top__DOT__y = ((IData)(vlSelfRef.top__DOT__a) 
                                 ^ (IData)(vlSelfRef.top__DOT__b));
    }
}

void VxorGate___024root___eval_nba(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_nba\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.top__DOT__y = ((IData)(vlSelfRef.top__DOT__a) 
                                 ^ (IData)(vlSelfRef.top__DOT__b));
    }
}

void VxorGate___024root___timing_resume(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___timing_resume\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VxorGate___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VxorGate___024root___eval_phase__act(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_phase__act\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VxorGate___024root___eval_triggers__act(vlSelf);
    VxorGate___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VxorGate___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        VxorGate___024root___timing_resume(vlSelf);
        VxorGate___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VxorGate___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VxorGate___024root___eval_phase__nba(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_phase__nba\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VxorGate___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VxorGate___024root___eval_nba(vlSelf);
        VxorGate___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VxorGate___024root___eval(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VxorGate___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("xorGate.v", 13, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VxorGate___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("xorGate.v", 13, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VxorGate___024root___eval_phase__act(vlSelf));
    } while (VxorGate___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VxorGate___024root___eval_debug_assertions(VxorGate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VxorGate___024root___eval_debug_assertions\n"); );
    VxorGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

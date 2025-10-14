// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRSA_tb.h for the primary calling header

#include "VRSA_tb__pch.h"
#include "VRSA_tb__Syms.h"
#include "VRSA_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRSA_tb___024root___dump_triggers__act(VRSA_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VRSA_tb___024root___eval_triggers__act(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_triggers__act\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h090cab5d__0;
    __Vtrigprevexpr_h090cab5d__0 = 0;
    // Body
    __Vtrigprevexpr_h090cab5d__0 = ((0x202U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
                                    & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                                    [1U]);
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.rst_n) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(__Vtrigprevexpr_h090cab5d__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h090cab5d__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr_h090cab5d__1 = __Vtrigprevexpr_h090cab5d__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRSA_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

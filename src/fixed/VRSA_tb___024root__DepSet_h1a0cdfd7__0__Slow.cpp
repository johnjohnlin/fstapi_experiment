// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRSA_tb.h for the primary calling header

#include "VRSA_tb__pch.h"
#include "VRSA_tb___024root.h"

VL_ATTR_COLD void VRSA_tb___024root___eval_static(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_static\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr_h090cab5d__1 = ((0x202U 
                                               == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
                                              & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                                              [1U]);
}

VL_ATTR_COLD void VRSA_tb___024root___eval_final(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_final\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRSA_tb___024root___dump_triggers__stl(VRSA_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRSA_tb___024root___eval_phase__stl(VRSA_tb___024root* vlSelf);

VL_ATTR_COLD void VRSA_tb___024root___eval_settle(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_settle\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VRSA_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("verilog/RSA_tb.sv", 37, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRSA_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRSA_tb___024root___dump_triggers__stl(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___dump_triggers__stl\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRSA_tb___024root___stl_sequent__TOP__0(VRSA_tb___024root* vlSelf);
VL_ATTR_COLD void VRSA_tb___024root____Vm_traceActivitySetAll(VRSA_tb___024root* vlSelf);

VL_ATTR_COLD void VRSA_tb___024root___eval_stl(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_stl\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VRSA_tb___024root___stl_sequent__TOP__0(vlSelf);
        VRSA_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlWide<9>/*287:0*/ VRSA_tb__ConstPool__CONST_h52851b6b_0;
extern const VlWide<8>/*255:0*/ VRSA_tb__ConstPool__CONST_h4e9f510d_0;

VL_ATTR_COLD void VRSA_tb___024root___stl_sequent__TOP__0(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___stl_sequent__TOP__0\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<9>/*287:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_9;
    // Body
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_next 
        = ((0x100U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid));
    if ((0x100U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter))) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_o_valid 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid;
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[1U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[2U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[3U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[4U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[5U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[6U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[7U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[9U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xaU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xbU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xcU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xdU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xeU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xfU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x10U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x11U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x12U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x13U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x14U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x15U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x16U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x17U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x18U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x19U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1aU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1bU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1cU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1dU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1eU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1fU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[8U];
    } else {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_o_valid = 0U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[1U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[2U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[3U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[4U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[5U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[6U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[7U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[9U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xaU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xbU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xcU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xdU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xeU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xfU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x10U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x11U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x12U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x13U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x14U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x15U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x16U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x17U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x18U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x19U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1aU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1bU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1cU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1dU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1eU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1fU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[8U];
        if (((0x101U >= (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)) 
             && (1U & (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[
                       ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter) 
                        >> 5U)] >> (0x1fU & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)))))) {
            VL_ADD_W(9, __Vtemp_4, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
                   & __Vtemp_4[0U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
                   & __Vtemp_4[1U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
                   & __Vtemp_4[2U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
                   & __Vtemp_4[3U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
                   & __Vtemp_4[4U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
                   & __Vtemp_4[5U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
                   & __Vtemp_4[6U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
                   & __Vtemp_4[7U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
                   & __Vtemp_4[8U]);
        }
        if ((1U & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U])) {
            VL_ADD_W(9, __Vtemp_6, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
                   & __Vtemp_6[0U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
                   & __Vtemp_6[1U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
                   & __Vtemp_6[2U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
                   & __Vtemp_6[3U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
                   & __Vtemp_6[4U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
                   & __Vtemp_6[5U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
                   & __Vtemp_6[6U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
                   & __Vtemp_6[7U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
                   & __Vtemp_6[8U]);
        }
        VL_SHIFTR_WWI(258,258,32, __Vtemp_8, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next, 1U);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
               & __Vtemp_8[0U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
               & __Vtemp_8[1U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
               & __Vtemp_8[2U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
               & __Vtemp_8[3U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
               & __Vtemp_8[4U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
               & __Vtemp_8[5U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
               & __Vtemp_8[6U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
               & __Vtemp_8[7U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
               & __Vtemp_8[8U]);
    }
    VL_SUB_W(9, __Vtemp_9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[0U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[0U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[1U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[1U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[2U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[2U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[3U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[3U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[4U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[4U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[5U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[5U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[6U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[6U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[7U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[7U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[8U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_9[8U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[8U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid[0U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent
              [0U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid[1U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent
              [1U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready[1U] 
        = ((0x202U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
           | (IData)(vlSelfRef.Testbench__DOT__o_ready));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid[0U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent
              [0U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid[1U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent
              [1U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_valid[0U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid;
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_power 
           == vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[0U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[1U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[1U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[2U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[2U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[3U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[3U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[4U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[4U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[5U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[5U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[6U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[6U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[7U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[7U];
    if ((0U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[0U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[1U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[2U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[3U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[4U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[5U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[6U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[7U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[9U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xaU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xbU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xcU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xdU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xeU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xfU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x10U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x11U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x12U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x13U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x14U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x15U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x16U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x17U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[7U];
    } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) {
        if ((1U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[0U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[1U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[2U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[3U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[4U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[5U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[6U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[7U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[7U];
        } else {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[7U];
        }
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[9U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xaU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xbU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xcU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xdU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xeU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xfU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x10U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x11U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x12U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x13U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x14U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x15U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x16U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x17U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U];
    } else {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[0U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[1U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[2U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[3U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[4U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[5U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[6U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[7U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[9U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xaU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xbU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xcU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xdU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xeU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xfU] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x10U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x11U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x12U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x13U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x14U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x15U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x16U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x17U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[7U];
    }
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__i_loop__DOT__o_valid_w 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
           [0U] | ((0x100U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)) 
                   & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid)));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellout__i_montgomery__i_ready 
        = (1U & ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid)) 
                 | (0x100U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter))));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_init 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellout__i_montgomery__i_ready) 
           & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
           [0U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_valid[1U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready[0U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellout__i_montgomery__i_ready;
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_valid
        [0U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid) 
           & vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_valid
           [1U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent[0U] 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready
           [0U] | vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent
           [0U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent[1U] 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready
           [1U] | vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent
           [1U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent
        [0U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready) 
           & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent
           [1U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_next 
        = (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready) 
            & (0x202U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_loop__DOT__o_valid_w 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid) 
           | ((~ ((0x202U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
                  & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready))) 
              & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid)));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_ready 
        = (1U & ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid)) 
                 | ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready) 
                    & (0x202U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)))));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_init 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_ready) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready[0U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_ready) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready[1U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_ready) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__pipeline_stg1__DOT__o_valid_w 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
           [0U] | ((~ vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready
                    [0U]) & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid)));
    vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__i_ready 
        = (1U & ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid)) 
                 | vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready
                 [0U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready 
        = (1U & ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done)) 
                 | vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready
                 [1U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_en = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__i_ready) 
                                                   & vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
                                                   [0U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready[0U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__i_ready;
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_next 
        = (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready) 
            & (~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done))) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__i_loop__DOT__o_valid_w 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
           [1U] | ((~ ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done) 
                       & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready))) 
                   & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid)));
    vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__i_twopower__i_ready 
        = (1U & ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid)) 
                 | ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready) 
                    & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done))));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_init 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__i_twopower__i_ready) 
           & vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
           [1U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready[1U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__i_twopower__i_ready;
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent[0U] 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready
           [0U] | vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent
           [0U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent[1U] 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready
           [1U] | vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent
           [1U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent
        [0U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready) 
           & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent
           [1U]);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_en = ((
                                                   (~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid)) 
                                                   | (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready)) 
                                                  & (IData)(vlSelfRef.Testbench__DOT__i_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__pipeline_input__DOT__o_valid_w 
        = ((IData)(vlSelfRef.Testbench__DOT__i_valid) 
           | ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready)) 
              & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid)));
}

VL_ATTR_COLD void VRSA_tb___024root___eval_triggers__stl(VRSA_tb___024root* vlSelf);

VL_ATTR_COLD bool VRSA_tb___024root___eval_phase__stl(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_phase__stl\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRSA_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VRSA_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRSA_tb___024root___dump_triggers__act(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___dump_triggers__act\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge rst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( ((10'h202 == Testbench.i_rsa.i_RSAMont.round_counter) & (Testbench.i_rsa.i_RSAMont.dist_o_valid[1'h1])))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRSA_tb___024root___dump_triggers__nba(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___dump_triggers__nba\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge rst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( ((10'h202 == Testbench.i_rsa.i_RSAMont.round_counter) & (Testbench.i_rsa.i_RSAMont.dist_o_valid[1'h1])))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRSA_tb___024root____Vm_traceActivitySetAll(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root____Vm_traceActivitySetAll\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
}

VL_ATTR_COLD void VRSA_tb___024root___ctor_var_reset(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___ctor_var_reset\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(768, vlSelf->Testbench__DOT__i_in);
    vlSelf->Testbench__DOT__o_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__msg);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__key);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__modulus);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_en = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__s1_i_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__s1_i_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__s1_o_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__s1_o_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__s1_dist_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__s1_dist_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__s1_comb_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__s1_comb_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->Testbench__DOT__i_rsa__DOT__s1_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__s1_msg);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__s1_key);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__s1_modulus);
    vlSelf->Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__i_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT____Vcellout__i_twopower__i_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in);
    vlSelf->Testbench__DOT__i_rsa__DOT__pipeline_input__DOT__o_valid_w = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->Testbench__DOT__i_rsa__DOT__i_dist__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->Testbench__DOT__i_rsa__DOT__pipeline_stg1__DOT__o_valid_w = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_power = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(257, vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(257, vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_init = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_next = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_twopower__DOT__i_loop__DOT__o_valid_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter = VL_RAND_RESET_I(10);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_init = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_o_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b);
    VL_RAND_RESET_W(768, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellout__i_montgomery__i_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_loop__DOT__o_valid_w = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__unnamedblk4__DOT__i = 0;
    VL_RAND_RESET_W(258, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a);
    VL_RAND_RESET_W(258, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b);
    VL_RAND_RESET_W(258, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus);
    VL_RAND_RESET_W(258, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result);
    VL_RAND_RESET_W(258, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next);
    VL_RAND_RESET_W(258, vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_init = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_next = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter = VL_RAND_RESET_I(9);
    vlSelf->Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__i_loop__DOT__o_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h090cab5d__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

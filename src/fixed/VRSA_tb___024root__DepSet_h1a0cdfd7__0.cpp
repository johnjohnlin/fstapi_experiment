// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRSA_tb.h for the primary calling header

#include "VRSA_tb__pch.h"
#include "VRSA_tb___024root.h"

VlCoroutine VRSA_tb___024root___eval_initial__TOP__Vtiming__0(VRSA_tb___024root* vlSelf);

void VRSA_tb___024root___eval_initial(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_initial\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VRSA_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

extern const VlWide<24>/*767:0*/ VRSA_tb__ConstPool__CONST_hda9269f3_0;
extern const VlWide<24>/*767:0*/ VRSA_tb__ConstPool__CONST_hd84fcb9f_0;
extern const VlWide<8>/*255:0*/ VRSA_tb__ConstPool__CONST_h01a3aaf4_0;

VL_INLINE_OPT VlCoroutine VRSA_tb___024root___eval_initial__TOP__Vtiming__0(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__i_valid = 0U;
    vlSelfRef.Testbench__DOT__o_ready = 1U;
    vlSelfRef.Testbench__DOT__i_in[0U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0U];
    vlSelfRef.Testbench__DOT__i_in[1U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[1U];
    vlSelfRef.Testbench__DOT__i_in[2U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[2U];
    vlSelfRef.Testbench__DOT__i_in[3U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[3U];
    vlSelfRef.Testbench__DOT__i_in[4U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[4U];
    vlSelfRef.Testbench__DOT__i_in[5U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[5U];
    vlSelfRef.Testbench__DOT__i_in[6U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[6U];
    vlSelfRef.Testbench__DOT__i_in[7U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[7U];
    vlSelfRef.Testbench__DOT__i_in[8U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[8U];
    vlSelfRef.Testbench__DOT__i_in[9U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[9U];
    vlSelfRef.Testbench__DOT__i_in[0xaU] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0xaU];
    vlSelfRef.Testbench__DOT__i_in[0xbU] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0xbU];
    vlSelfRef.Testbench__DOT__i_in[0xcU] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0xcU];
    vlSelfRef.Testbench__DOT__i_in[0xdU] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0xdU];
    vlSelfRef.Testbench__DOT__i_in[0xeU] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0xeU];
    vlSelfRef.Testbench__DOT__i_in[0xfU] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0xfU];
    vlSelfRef.Testbench__DOT__i_in[0x10U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x10U];
    vlSelfRef.Testbench__DOT__i_in[0x11U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x11U];
    vlSelfRef.Testbench__DOT__i_in[0x12U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x12U];
    vlSelfRef.Testbench__DOT__i_in[0x13U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x13U];
    vlSelfRef.Testbench__DOT__i_in[0x14U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x14U];
    vlSelfRef.Testbench__DOT__i_in[0x15U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x15U];
    vlSelfRef.Testbench__DOT__i_in[0x16U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x16U];
    vlSelfRef.Testbench__DOT__i_in[0x17U] = VRSA_tb__ConstPool__CONST_hda9269f3_0[0x17U];
    co_await vlSelfRef.__VtrigSched_h96aaa0a4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rst_n)", 
                                                         "verilog/RSA_tb.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf87a9c37__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "verilog/RSA_tb.sv", 
                                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__i_valid = 1U;
    vlSelfRef.Testbench__DOT__i_in[0U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0U];
    vlSelfRef.Testbench__DOT__i_in[1U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[1U];
    vlSelfRef.Testbench__DOT__i_in[2U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[2U];
    vlSelfRef.Testbench__DOT__i_in[3U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[3U];
    vlSelfRef.Testbench__DOT__i_in[4U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[4U];
    vlSelfRef.Testbench__DOT__i_in[5U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[5U];
    vlSelfRef.Testbench__DOT__i_in[6U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[6U];
    vlSelfRef.Testbench__DOT__i_in[7U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[7U];
    vlSelfRef.Testbench__DOT__i_in[8U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[8U];
    vlSelfRef.Testbench__DOT__i_in[9U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[9U];
    vlSelfRef.Testbench__DOT__i_in[0xaU] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0xaU];
    vlSelfRef.Testbench__DOT__i_in[0xbU] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0xbU];
    vlSelfRef.Testbench__DOT__i_in[0xcU] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0xcU];
    vlSelfRef.Testbench__DOT__i_in[0xdU] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0xdU];
    vlSelfRef.Testbench__DOT__i_in[0xeU] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0xeU];
    vlSelfRef.Testbench__DOT__i_in[0xfU] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0xfU];
    vlSelfRef.Testbench__DOT__i_in[0x10U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x10U];
    vlSelfRef.Testbench__DOT__i_in[0x11U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x11U];
    vlSelfRef.Testbench__DOT__i_in[0x12U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x12U];
    vlSelfRef.Testbench__DOT__i_in[0x13U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x13U];
    vlSelfRef.Testbench__DOT__i_in[0x14U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x14U];
    vlSelfRef.Testbench__DOT__i_in[0x15U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x15U];
    vlSelfRef.Testbench__DOT__i_in[0x16U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x16U];
    vlSelfRef.Testbench__DOT__i_in[0x17U] = VRSA_tb__ConstPool__CONST_hd84fcb9f_0[0x17U];
    co_await vlSelfRef.__VtrigSched_hf87a9c37__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "verilog/RSA_tb.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__i_valid = 0U;
    while ((1U & (~ ((0x202U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
                     & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                     [1U])))) {
        co_await vlSelfRef.__VtrigSched_h5cbbf387__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((10'h202 == Testbench.i_rsa.i_RSAMont.round_counter) & (Testbench.i_rsa.i_RSAMont.dist_o_valid[1'h1])))", 
                                                             "verilog/RSA_tb.sv", 
                                                             72);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("Output data: %x\n",0,256,vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply.data());
    if ((0U == ((((((((VRSA_tb__ConstPool__CONST_h01a3aaf4_0[0U] 
                       ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U]) 
                      | (VRSA_tb__ConstPool__CONST_h01a3aaf4_0[1U] 
                         ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[1U])) 
                     | (VRSA_tb__ConstPool__CONST_h01a3aaf4_0[2U] 
                        ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[2U])) 
                    | (VRSA_tb__ConstPool__CONST_h01a3aaf4_0[3U] 
                       ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[3U])) 
                   | (VRSA_tb__ConstPool__CONST_h01a3aaf4_0[4U] 
                      ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[4U])) 
                  | (VRSA_tb__ConstPool__CONST_h01a3aaf4_0[5U] 
                     ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[5U])) 
                 | (VRSA_tb__ConstPool__CONST_h01a3aaf4_0[6U] 
                    ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[6U])) 
                | (VRSA_tb__ConstPool__CONST_h01a3aaf4_0[7U] 
                   ^ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[7U])))) {
        VL_WRITEF_NX("Test Passed!\n",0);
    } else {
        VL_WRITEF_NX("Test Failed! Expected: 0d41b183313d306adca09126f3fed6cdec7dcdce49db5c85cb2a37f08c0f2e31, Got: %x\n",0,
                     256,vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply.data());
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void VRSA_tb___024root___act_comb__TOP__0(VRSA_tb___024root* vlSelf);

void VRSA_tb___024root___eval_act(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_act\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xdULL & vlSelfRef.__VactTriggered.word(0U))) {
        VRSA_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VRSA_tb___024root___act_comb__TOP__0(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___act_comb__TOP__0\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready[1U] 
        = ((0x202U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
           | (IData)(vlSelfRef.Testbench__DOT__o_ready));
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

void VRSA_tb___024root___nba_sequent__TOP__0(VRSA_tb___024root* vlSelf);
void VRSA_tb___024root___nba_sequent__TOP__1(VRSA_tb___024root* vlSelf);
void VRSA_tb___024root___nba_comb__TOP__0(VRSA_tb___024root* vlSelf);
void VRSA_tb___024root___nba_comb__TOP__1(VRSA_tb___024root* vlSelf);
void VRSA_tb___024root___nba_comb__TOP__2(VRSA_tb___024root* vlSelf);

void VRSA_tb___024root___eval_nba(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_nba\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRSA_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRSA_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0xdULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRSA_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRSA_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRSA_tb___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
}

extern const VlWide<9>/*287:0*/ VRSA_tb__ConstPool__CONST_h97ca28cb_0;
extern const VlWide<9>/*287:0*/ VRSA_tb__ConstPool__CONST_h52851b65_0;
extern const VlWide<8>/*255:0*/ VRSA_tb__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<9>/*287:0*/ VRSA_tb__ConstPool__CONST_h8599945e_0;

VL_INLINE_OPT void VRSA_tb___024root___nba_sequent__TOP__0(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___nba_sequent__TOP__0\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter;
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter = 0;
    VlWide<9>/*256:0*/ __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result;
    VL_ZERO_W(257, __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result);
    SData/*9:0*/ __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter;
    __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter = 0;
    SData/*8:0*/ __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter;
    __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter = 0;
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_2;
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<9>/*287:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_14;
    // Body
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[8U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[8U];
    __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter;
    __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter;
    __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter;
    if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_init) {
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[0U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[1U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[2U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[3U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[4U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[5U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[6U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[7U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[8U] 
            = VRSA_tb__ConstPool__CONST_h97ca28cb_0[8U];
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter = 0U;
    } else if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_next) {
        VL_SHIFTL_WWI(257,257,32, __Vtemp_1, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result, 1U);
        __Vtemp_2[0U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[0U] 
                         & __Vtemp_1[0U]);
        __Vtemp_2[1U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[1U] 
                         & __Vtemp_1[1U]);
        __Vtemp_2[2U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[2U] 
                         & __Vtemp_1[2U]);
        __Vtemp_2[3U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[3U] 
                         & __Vtemp_1[3U]);
        __Vtemp_2[4U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[4U] 
                         & __Vtemp_1[4U]);
        __Vtemp_2[5U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[5U] 
                         & __Vtemp_1[5U]);
        __Vtemp_2[6U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[6U] 
                         & __Vtemp_1[6U]);
        __Vtemp_2[7U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[7U] 
                         & __Vtemp_1[7U]);
        __Vtemp_2[8U] = (VRSA_tb__ConstPool__CONST_h52851b65_0[8U] 
                         & __Vtemp_1[8U]);
        VL_SHIFTL_WWI(257,257,32, __Vtemp_3, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result, 1U);
        VL_SUB_W(9, __Vtemp_4, __Vtemp_3, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus);
        VL_SHIFTL_WWI(257,257,32, __Vtemp_5, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result, 1U);
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[0U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[0U] : __Vtemp_5[0U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[1U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[1U] : __Vtemp_5[1U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[2U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[2U] : __Vtemp_5[2U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[3U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[3U] : __Vtemp_5[3U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[4U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[4U] : __Vtemp_5[4U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[5U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[5U] : __Vtemp_5[5U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[6U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[6U] : __Vtemp_5[6U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[7U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[7U] : __Vtemp_5[7U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[8U] 
            = (VRSA_tb__ConstPool__CONST_h52851b65_0[8U] 
               & (VL_GT_W(9, __Vtemp_2, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus)
                   ? __Vtemp_4[8U] : __Vtemp_5[8U]));
        __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter 
            = ((IData)(1U) + vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter);
    }
    if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_o_valid) {
        if ((1U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) {
            __Vtemp_8[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U];
            __Vtemp_8[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U];
            __Vtemp_8[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U];
            __Vtemp_8[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U];
            __Vtemp_8[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U];
            __Vtemp_8[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U];
            __Vtemp_8[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U];
            __Vtemp_14[1U] = VRSA_tb__ConstPool__CONST_h4e9f510d_0[1U];
            __Vtemp_14[2U] = VRSA_tb__ConstPool__CONST_h4e9f510d_0[2U];
            __Vtemp_14[3U] = VRSA_tb__ConstPool__CONST_h4e9f510d_0[3U];
            __Vtemp_14[4U] = VRSA_tb__ConstPool__CONST_h4e9f510d_0[4U];
            __Vtemp_14[5U] = VRSA_tb__ConstPool__CONST_h4e9f510d_0[5U];
            __Vtemp_14[6U] = VRSA_tb__ConstPool__CONST_h4e9f510d_0[6U];
            __Vtemp_14[7U] = VRSA_tb__ConstPool__CONST_h4e9f510d_0[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U] 
                = VRSA_tb__ConstPool__CONST_h4e9f510d_0[0U];
        } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) {
            __Vtemp_8[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U];
            __Vtemp_8[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U];
            __Vtemp_8[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U];
            __Vtemp_8[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U];
            __Vtemp_8[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U];
            __Vtemp_8[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U];
            __Vtemp_8[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U];
            __Vtemp_14[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[1U];
            __Vtemp_14[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[2U];
            __Vtemp_14[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[3U];
            __Vtemp_14[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[4U];
            __Vtemp_14[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[5U];
            __Vtemp_14[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[6U];
            __Vtemp_14[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U];
        } else {
            __Vtemp_8[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[1U];
            __Vtemp_8[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[2U];
            __Vtemp_8[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[3U];
            __Vtemp_8[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[4U];
            __Vtemp_8[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[5U];
            __Vtemp_8[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[6U];
            __Vtemp_8[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[0U];
            if ((1U & (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[
                       (7U & (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter) 
                               - (IData)(1U)) >> 6U))] 
                       >> (0x1fU & (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter) 
                                     - (IData)(1U)) 
                                    >> 1U))))) {
                __Vtemp_14[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U];
                __Vtemp_14[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U];
                __Vtemp_14[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U];
                __Vtemp_14[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U];
                __Vtemp_14[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U];
                __Vtemp_14[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U];
                __Vtemp_14[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U];
                vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U] 
                    = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U];
            } else {
                __Vtemp_14[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[1U];
                __Vtemp_14[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[2U];
                __Vtemp_14[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[3U];
                __Vtemp_14[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[4U];
                __Vtemp_14[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[5U];
                __Vtemp_14[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[6U];
                __Vtemp_14[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[7U];
                vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U] 
                    = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[0U];
            }
        }
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[4U] 
            = __Vtemp_8[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[5U] 
            = __Vtemp_8[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[6U] 
            = __Vtemp_8[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[7U] 
            = __Vtemp_8[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[4U] 
            = __Vtemp_14[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[5U] 
            = __Vtemp_14[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[6U] 
            = __Vtemp_14[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply[7U] 
            = __Vtemp_14[7U];
    }
    if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_init) {
        __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter = 0U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[0U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[1U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[2U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[3U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[4U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[5U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[6U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[7U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[8U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[8U];
    } else {
        if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_next) {
            __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)));
        }
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[0U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[1U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[2U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[3U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[4U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[5U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[6U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[7U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[8U] 
            = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U];
    }
    if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_init) {
        __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter = 0U;
    } else if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_next) {
        __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)));
    }
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[8U] 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[8U];
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter;
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter;
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter 
        = __Vdly__Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter;
}

extern const VlWide<8>/*255:0*/ VRSA_tb__ConstPool__CONST_h9e67c271_0;
extern const VlWide<9>/*287:0*/ VRSA_tb__ConstPool__CONST_h3dd8fb2c_0;

VL_INLINE_OPT void VRSA_tb___024root___nba_sequent__TOP__1(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___nba_sequent__TOP__1\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v0;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v2;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v2 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v3;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v3 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v4;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v4 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v0;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v2;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v2 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v3;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v3 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v4;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v4 = 0;
    // Body
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v0 = 0U;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v2 = 0U;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v3 = 0U;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v4 = 0U;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v0 = 0U;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v2 = 0U;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v3 = 0U;
    __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v4 = 0U;
    if (vlSelfRef.rst_n) {
        if ((1U & (~ ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid) 
                      & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready))))) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__unnamedblk4__DOT__i = 2U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid) 
                      & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready))))) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__unnamedblk4__DOT__i = 2U;
        }
        if (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid) 
             & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready))) {
            __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v0 = 1U;
        } else {
            if ((vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
                 [0U] & vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready
                 [0U])) {
                __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v2 = 1U;
            }
            if ((vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
                 [1U] & vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready
                 [1U])) {
                __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v3 = 1U;
            }
        }
        if (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid) 
             & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready))) {
            __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v0 = 1U;
        } else {
            if ((vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                 [0U] & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready
                 [0U])) {
                __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v2 = 1U;
            }
            if ((vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                 [1U] & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready
                 [1U])) {
                __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v3 = 1U;
            }
        }
        if (vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_en) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__key[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[7U];
        }
        if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_init) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x18U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x19U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1aU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1bU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1cU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1dU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1eU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x1fU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x10U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x11U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x12U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x13U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x14U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x15U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x16U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0x17U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[8U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[9U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xaU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xbU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xcU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xdU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xeU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in[0xfU];
        }
        if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_init) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x10U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x11U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x12U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x13U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x14U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x15U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x16U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0x17U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[8U] = 0U;
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[8U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[9U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xaU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xbU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xcU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xdU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xeU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0xfU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[8U] = 0U;
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[8U] = 0U;
        }
        if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_init) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_power = 0x200U;
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[0U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[1U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[2U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[3U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[4U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[5U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[6U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[7U] 
                = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[7U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[8U] = 0U;
        }
        if (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_en) {
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[0U] 
                = vlSelfRef.Testbench__DOT__i_in[0x10U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[1U] 
                = vlSelfRef.Testbench__DOT__i_in[0x11U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[2U] 
                = vlSelfRef.Testbench__DOT__i_in[0x12U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[3U] 
                = vlSelfRef.Testbench__DOT__i_in[0x13U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[4U] 
                = vlSelfRef.Testbench__DOT__i_in[0x14U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[5U] 
                = vlSelfRef.Testbench__DOT__i_in[0x15U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[6U] 
                = vlSelfRef.Testbench__DOT__i_in[0x16U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[7U] 
                = vlSelfRef.Testbench__DOT__i_in[0x17U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[0U] 
                = vlSelfRef.Testbench__DOT__i_in[8U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[1U] 
                = vlSelfRef.Testbench__DOT__i_in[9U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[2U] 
                = vlSelfRef.Testbench__DOT__i_in[0xaU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[3U] 
                = vlSelfRef.Testbench__DOT__i_in[0xbU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[4U] 
                = vlSelfRef.Testbench__DOT__i_in[0xcU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[5U] 
                = vlSelfRef.Testbench__DOT__i_in[0xdU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[6U] 
                = vlSelfRef.Testbench__DOT__i_in[0xeU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__key[7U] 
                = vlSelfRef.Testbench__DOT__i_in[0xfU];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[0U] 
                = vlSelfRef.Testbench__DOT__i_in[0U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[1U] 
                = vlSelfRef.Testbench__DOT__i_in[1U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[2U] 
                = vlSelfRef.Testbench__DOT__i_in[2U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[3U] 
                = vlSelfRef.Testbench__DOT__i_in[3U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[4U] 
                = vlSelfRef.Testbench__DOT__i_in[4U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[5U] 
                = vlSelfRef.Testbench__DOT__i_in[5U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[6U] 
                = vlSelfRef.Testbench__DOT__i_in[6U];
            vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[7U] 
                = vlSelfRef.Testbench__DOT__i_in[7U];
        }
    } else {
        __VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v4 = 1U;
        __VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v4 = 1U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[0U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[1U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[2U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[3U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[4U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[5U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[6U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[7U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a[8U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[8U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[0U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[1U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[2U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[3U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[4U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[5U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[6U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[7U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b[8U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[8U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[0U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[1U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[2U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[3U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[4U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[5U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[6U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[7U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus[8U] 
            = VRSA_tb__ConstPool__CONST_h8599945e_0[8U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_power = 0U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[0U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[1U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[2U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[3U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[4U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[5U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[6U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[7U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus[8U] 
            = VRSA_tb__ConstPool__CONST_h3dd8fb2c_0[8U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__msg[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__key[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[0U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[1U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[2U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[3U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[4U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[5U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[6U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[7U] 
            = VRSA_tb__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__i_loop__DOT__o_valid_w));
    vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__pipeline_stg1__DOT__o_valid_w));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__i_loop__DOT__o_valid_w));
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v0) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[0U] = 0U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[1U] = 0U;
    }
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v2) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[0U] = 1U;
    }
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v3) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[1U] = 1U;
    }
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent__v4) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[0U] = 0U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[1U] = 0U;
    }
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v0) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[0U] = 0U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[1U] = 0U;
    }
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v2) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[0U] = 1U;
    }
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v3) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[1U] = 1U;
    }
    if (__VdlySet__Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent__v4) {
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[0U] = 0U;
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[1U] = 0U;
    }
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__pipeline_input__DOT__o_valid_w));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_loop__DOT__o_valid_w));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_valid[0U] 
        = vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid;
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid[0U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent
              [0U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid[1U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent
              [1U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid[0U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent
              [0U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid[1U] 
        = ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid) 
           & (~ vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent
              [1U]));
}

VL_INLINE_OPT void VRSA_tb___024root___nba_comb__TOP__0(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___nba_comb__TOP__0\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready[1U] 
        = ((0x202U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
           | (IData)(vlSelfRef.Testbench__DOT__o_ready));
}

extern const VlWide<9>/*287:0*/ VRSA_tb__ConstPool__CONST_h52851b6b_0;

VL_INLINE_OPT void VRSA_tb___024root___nba_comb__TOP__1(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___nba_comb__TOP__1\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<9>/*287:0*/ __Vtemp_9;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_13;
    VlWide<9>/*287:0*/ __Vtemp_14;
    // Body
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
    if ((0x100U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter))) {
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
            VL_ADD_W(9, __Vtemp_9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
                   & __Vtemp_9[0U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
                   & __Vtemp_9[1U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
                   & __Vtemp_9[2U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
                   & __Vtemp_9[3U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
                   & __Vtemp_9[4U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
                   & __Vtemp_9[5U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
                   & __Vtemp_9[6U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
                   & __Vtemp_9[7U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
                   & __Vtemp_9[8U]);
        }
        if ((1U & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U])) {
            VL_ADD_W(9, __Vtemp_11, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
                   & __Vtemp_11[0U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
                   & __Vtemp_11[1U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
                   & __Vtemp_11[2U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
                   & __Vtemp_11[3U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
                   & __Vtemp_11[4U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
                   & __Vtemp_11[5U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
                   & __Vtemp_11[6U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
                   & __Vtemp_11[7U]);
            vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
                = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
                   & __Vtemp_11[8U]);
        }
        VL_SHIFTR_WWI(258,258,32, __Vtemp_13, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next, 1U);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[0U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
               & __Vtemp_13[0U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[1U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
               & __Vtemp_13[1U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[2U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
               & __Vtemp_13[2U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[3U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
               & __Vtemp_13[3U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[4U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
               & __Vtemp_13[4U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[5U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
               & __Vtemp_13[5U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[6U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
               & __Vtemp_13[6U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[7U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
               & __Vtemp_13[7U]);
        vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next[8U] 
            = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
               & __Vtemp_13[8U]);
    }
    VL_SUB_W(9, __Vtemp_14, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus);
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[0U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[0U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[0U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[1U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[1U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[1U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[2U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[2U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[2U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[3U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[3U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[3U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[4U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[4U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[4U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[5U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[5U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[5U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[6U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[6U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[6U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[7U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[7U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[7U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[8U] 
        = (VRSA_tb__ConstPool__CONST_h52851b6b_0[8U] 
           & (VL_GT_W(9, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result, vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus)
               ? __Vtemp_14[8U] : vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result[8U]));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_next 
        = ((0x100U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_o_valid 
        = ((0x100U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)) 
           & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid));
    vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done 
        = (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_power 
           == vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter);
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
}

VL_INLINE_OPT void VRSA_tb___024root___nba_comb__TOP__2(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___nba_comb__TOP__2\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void VRSA_tb___024root___timing_resume(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___timing_resume\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h96aaa0a4__0.resume(
                                                   "@(posedge rst_n)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf87a9c37__0.resume(
                                                   "@(posedge clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5cbbf387__0.resume(
                                                   "@( ((10'h202 == Testbench.i_rsa.i_RSAMont.round_counter) & (Testbench.i_rsa.i_RSAMont.dist_o_valid[1'h1])))");
    }
}

void VRSA_tb___024root___timing_commit(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___timing_commit\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h96aaa0a4__0.commit(
                                                   "@(posedge rst_n)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf87a9c37__0.commit(
                                                   "@(posedge clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5cbbf387__0.commit(
                                                   "@( ((10'h202 == Testbench.i_rsa.i_RSAMont.round_counter) & (Testbench.i_rsa.i_RSAMont.dist_o_valid[1'h1])))");
    }
}

void VRSA_tb___024root___eval_triggers__act(VRSA_tb___024root* vlSelf);

bool VRSA_tb___024root___eval_phase__act(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_phase__act\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRSA_tb___024root___eval_triggers__act(vlSelf);
    VRSA_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VRSA_tb___024root___timing_resume(vlSelf);
        VRSA_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRSA_tb___024root___eval_phase__nba(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_phase__nba\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRSA_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRSA_tb___024root___dump_triggers__nba(VRSA_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRSA_tb___024root___dump_triggers__act(VRSA_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VRSA_tb___024root___eval(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VRSA_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("verilog/RSA_tb.sv", 37, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VRSA_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("verilog/RSA_tb.sv", 37, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VRSA_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VRSA_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRSA_tb___024root___eval_debug_assertions(VRSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root___eval_debug_assertions\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG

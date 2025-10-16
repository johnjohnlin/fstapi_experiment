// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VRSA_tb__Syms.h"


void VRSA_tb___024root__trace_chg_0_sub_0(VRSA_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VRSA_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root__trace_chg_0\n"); );
    // Init
    VRSA_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRSA_tb___024root*>(voidSelf);
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRSA_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRSA_tb___024root__trace_chg_0_sub_0(VRSA_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root__trace_chg_0_sub_0\n"); );
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Testbench__DOT__i_valid));
        bufp->chgWData(oldp+1,(vlSelfRef.Testbench__DOT__i_in),768);
        bufp->chgBit(oldp+25,(vlSelfRef.Testbench__DOT__o_ready));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgBit(oldp+26,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_en));
        bufp->chgBit(oldp+27,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready));
        bufp->chgBit(oldp+28,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_ready));
        bufp->chgBit(oldp+29,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready[0]));
        bufp->chgBit(oldp+30,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_ready[1]));
        bufp->chgBit(oldp+31,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready[0]));
        bufp->chgBit(oldp+32,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready[1]));
        bufp->chgBit(oldp+33,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_en));
        bufp->chgBit(oldp+34,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_init));
        bufp->chgBit(oldp+35,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready));
        bufp->chgBit(oldp+36,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent[0]));
        bufp->chgBit(oldp+37,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent[1]));
        bufp->chgBit(oldp+38,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent[0]));
        bufp->chgBit(oldp+39,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent[1]));
        bufp->chgBit(oldp+40,(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__i_twopower__i_ready));
        bufp->chgBit(oldp+41,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready
                              [1U]));
        bufp->chgBit(oldp+42,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready));
        bufp->chgBit(oldp+43,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_init));
        bufp->chgBit(oldp+44,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_next));
        bufp->chgBit(oldp+45,(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__i_ready));
        bufp->chgBit(oldp+46,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready
                              [0U]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgWData(oldp+47,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply),256);
        __Vtemp_1[0U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[0U];
        __Vtemp_1[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[1U];
        __Vtemp_1[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[2U];
        __Vtemp_1[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[3U];
        __Vtemp_1[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[4U];
        __Vtemp_1[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[5U];
        __Vtemp_1[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[6U];
        __Vtemp_1[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result[7U];
        bufp->chgWData(oldp+55,(__Vtemp_1),256);
        bufp->chgWData(oldp+63,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square),256);
        bufp->chgSData(oldp+71,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter),10);
        bufp->chgSData(oldp+72,((0x3ffU & (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter) 
                                            - (IData)(1U)) 
                                           >> 1U))),10);
        bufp->chgBit(oldp+73,((0x202U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))));
        bufp->chgWData(oldp+74,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result),258);
        bufp->chgBit(oldp+83,((0x100U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter))));
        bufp->chgSData(oldp+84,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter),9);
        bufp->chgIData(oldp+85,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter),32);
        bufp->chgWData(oldp+86,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result),257);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [4U] | vlSelfRef.__Vm_traceActivity
                       [5U]) | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        if ((0U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) {
            __Vtemp_6[0U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[0U];
            __Vtemp_6[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[1U];
            __Vtemp_6[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[2U];
            __Vtemp_6[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[3U];
            __Vtemp_6[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[4U];
            __Vtemp_6[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[5U];
            __Vtemp_6[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[6U];
            __Vtemp_6[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base[7U];
        } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) {
            __Vtemp_6[0U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U];
            __Vtemp_6[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U];
            __Vtemp_6[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U];
            __Vtemp_6[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U];
            __Vtemp_6[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U];
            __Vtemp_6[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U];
            __Vtemp_6[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U];
            __Vtemp_6[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U];
        } else {
            __Vtemp_6[0U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[0U];
            __Vtemp_6[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[1U];
            __Vtemp_6[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[2U];
            __Vtemp_6[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[3U];
            __Vtemp_6[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[4U];
            __Vtemp_6[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[5U];
            __Vtemp_6[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[6U];
            __Vtemp_6[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square[7U];
        }
        bufp->chgWData(oldp+95,(__Vtemp_6),256);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+103,(vlSelfRef.Testbench__DOT__i_rsa__DOT__msg),256);
        bufp->chgWData(oldp+111,(vlSelfRef.Testbench__DOT__i_rsa__DOT__key),256);
        bufp->chgWData(oldp+119,(vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus),256);
        bufp->chgBit(oldp+127,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid));
        bufp->chgBit(oldp+128,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid[0]));
        bufp->chgBit(oldp+129,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid[1]));
        bufp->chgWData(oldp+130,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_msg),256);
        bufp->chgWData(oldp+138,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_key),256);
        bufp->chgWData(oldp+146,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_modulus),256);
        bufp->chgWData(oldp+154,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base),256);
        bufp->chgWData(oldp+162,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg),256);
        bufp->chgWData(oldp+170,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key),256);
        bufp->chgWData(oldp+178,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus),256);
        bufp->chgBit(oldp+186,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid[0]));
        bufp->chgBit(oldp+187,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid[1]));
        bufp->chgBit(oldp+188,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid));
        bufp->chgBit(oldp+189,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[0]));
        bufp->chgBit(oldp+190,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent[1]));
        bufp->chgIData(oldp+191,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__unnamedblk4__DOT__i),32);
        bufp->chgBit(oldp+192,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                               [1U]));
        bufp->chgBit(oldp+193,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                               [0U]));
        bufp->chgWData(oldp+194,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a),258);
        bufp->chgWData(oldp+203,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b),258);
        bufp->chgWData(oldp+212,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus),258);
        bufp->chgBit(oldp+221,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid));
        bufp->chgBit(oldp+222,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[0]));
        bufp->chgBit(oldp+223,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent[1]));
        bufp->chgIData(oldp+224,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_dist__DOT__unnamedblk4__DOT__i),32);
        bufp->chgBit(oldp+225,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
                               [1U]));
        __Vtemp_7[0U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[0U];
        __Vtemp_7[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[1U];
        __Vtemp_7[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[2U];
        __Vtemp_7[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[3U];
        __Vtemp_7[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[4U];
        __Vtemp_7[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[5U];
        __Vtemp_7[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[6U];
        __Vtemp_7[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__modulus[7U];
        __Vtemp_7[8U] = 0x200U;
        bufp->chgWData(oldp+226,(__Vtemp_7),288);
        bufp->chgIData(oldp+235,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_power),32);
        bufp->chgWData(oldp+236,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus),257);
        bufp->chgBit(oldp+245,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid));
        bufp->chgBit(oldp+246,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
                               [0U]));
        bufp->chgBit(oldp+247,(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+248,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid));
        bufp->chgWData(oldp+249,(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in),1024);
        bufp->chgBit(oldp+281,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_o_valid));
        bufp->chgWData(oldp+282,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b),256);
        __Vtemp_8[0U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[0U];
        __Vtemp_8[1U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[1U];
        __Vtemp_8[2U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[2U];
        __Vtemp_8[3U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[3U];
        __Vtemp_8[4U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[4U];
        __Vtemp_8[5U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[5U];
        __Vtemp_8[6U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[6U];
        __Vtemp_8[7U] = vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result[7U];
        bufp->chgWData(oldp+290,(__Vtemp_8),256);
        bufp->chgBit(oldp+298,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellout__i_montgomery__i_ready));
        bufp->chgWData(oldp+299,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in),768);
        bufp->chgWData(oldp+323,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next),258);
        bufp->chgWData(oldp+332,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result),258);
        bufp->chgBit(oldp+341,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_init));
        bufp->chgBit(oldp+342,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done));
    }
    bufp->chgBit(oldp+343,(vlSelfRef.clk));
    bufp->chgBit(oldp+344,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+345,((1U & ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid)) 
                                  | (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready)))));
    bufp->chgBit(oldp+346,(((0x202U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
                            & vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                            [1U])));
    bufp->chgBit(oldp+347,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_valid[0]));
    bufp->chgBit(oldp+348,(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_valid[1]));
    bufp->chgBit(oldp+349,((1U & (vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key[
                                  (7U & (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter) 
                                          - (IData)(1U)) 
                                         >> 6U))] >> 
                                  (0x1fU & (((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter) 
                                             - (IData)(1U)) 
                                            >> 1U))))));
    bufp->chgBit(oldp+350,((((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready) 
                             & (0x202U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter))) 
                            & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid))));
    bufp->chgBit(oldp+351,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready[0]));
    bufp->chgBit(oldp+352,(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready[1]));
    bufp->chgBit(oldp+353,(((0x202U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
                            | (IData)(vlSelfRef.Testbench__DOT__o_ready))));
    bufp->chgBit(oldp+354,(((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_o_valid) 
                            | ((~ ((0x202U == (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter)) 
                                   & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready))) 
                               & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid)))));
    bufp->chgBit(oldp+355,(((0x100U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)) 
                            & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid))));
    bufp->chgBit(oldp+356,((vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid
                            [0U] | ((0x100U != (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter)) 
                                    & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid)))));
    bufp->chgBit(oldp+357,(((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done) 
                            & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid))));
    bufp->chgBit(oldp+358,((vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
                            [1U] | ((~ ((IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done) 
                                        & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready))) 
                                    & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid)))));
    bufp->chgBit(oldp+359,(((IData)(vlSelfRef.Testbench__DOT__i_valid) 
                            | ((~ (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_ready)) 
                               & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_i_valid)))));
    bufp->chgBit(oldp+360,((vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_dist_valid
                            [0U] | ((~ vlSelfRef.Testbench__DOT__i_rsa__DOT__s1_comb_ready
                                     [0U]) & (IData)(vlSelfRef.Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid)))));
}

void VRSA_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRSA_tb___024root__trace_cleanup\n"); );
    // Init
    VRSA_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRSA_tb___024root*>(voidSelf);
    VRSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}

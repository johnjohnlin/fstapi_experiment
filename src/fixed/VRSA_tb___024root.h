// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRSA_tb.h for the primary calling header

#ifndef VERILATED_VRSA_TB___024ROOT_H_
#define VERILATED_VRSA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VRSA_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRSA_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ Testbench__DOT__i_valid;
        CData/*0:0*/ Testbench__DOT__o_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_en;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__s1_i_valid;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__s1_i_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__s1_o_valid;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__s1_o_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__s1_en;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__o_valid;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT____Vcellout__pipeline_stg1__i_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT____Vcellout__i_twopower__i_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__pipeline_input__DOT__o_valid_w;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__pipeline_stg1__DOT__o_valid_w;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_valid;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_o_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_init;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__loop_next;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT____Vcellinp__i_loop__o_done;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__i_loop__DOT__o_valid_w;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_init;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_next;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_valid;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__loop_o_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_o_valid;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellout__i_montgomery__i_ready;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_loop__DOT__o_valid_w;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_o_valid;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_init;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__loop_next;
        CData/*0:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__i_loop__DOT__o_valid_w;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr_h090cab5d__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__round_counter;
        SData/*8:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_counter;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__msg;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__key;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__modulus;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__s1_msg;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__s1_key;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__s1_modulus;
        IData/*31:0*/ Testbench__DOT__i_rsa__DOT__i_dist__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_power;
        VlWide<9>/*256:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__data_modulus;
        IData/*31:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_counter;
        VlWide<9>/*256:0*/ Testbench__DOT__i_rsa__DOT__i_twopower__DOT__round_result;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__base;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__msg;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__key;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__modulus;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__square;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__multiply;
        VlWide<8>/*255:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__montgomery_in_b;
        IData/*31:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__unnamedblk4__DOT__i;
        VlWide<9>/*257:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_a;
        VlWide<9>/*257:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_b;
        VlWide<9>/*257:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__data_modulus;
        VlWide<9>/*257:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result;
        VlWide<9>/*257:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__round_result_next;
    };
    struct {
        VlWide<9>/*257:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_montgomery__DOT__mod_result;
        IData/*31:0*/ __VactIterCount;
        VlWide<24>/*767:0*/ Testbench__DOT__i_in;
        VlWide<32>/*1023:0*/ Testbench__DOT__i_rsa__DOT____Vcellinp__i_RSAMont__i_in;
        VlWide<24>/*767:0*/ Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT____Vcellinp__i_montgomery__i_in;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__s1_dist_valid;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__s1_dist_ready;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__s1_comb_valid;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__s1_comb_ready;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__i_dist__DOT__o_sent;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__i_dist__DOT__ready_sent;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_valid;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__dist_o_ready;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__o_sent;
        VlUnpacked<CData/*0:0*/, 2> Testbench__DOT__i_rsa__DOT__i_RSAMont__DOT__i_dist__DOT__ready_sent;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h96aaa0a4__0;
    VlTriggerScheduler __VtrigSched_hf87a9c37__0;
    VlTriggerScheduler __VtrigSched_h5cbbf387__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRSA_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRSA_tb___024root(VRSA_tb__Syms* symsp, const char* v__name);
    ~VRSA_tb___024root();
    VL_UNCOPYABLE(VRSA_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

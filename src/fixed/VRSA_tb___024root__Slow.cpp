// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRSA_tb.h for the primary calling header

#include "VRSA_tb__pch.h"
#include "VRSA_tb__Syms.h"
#include "VRSA_tb___024root.h"

void VRSA_tb___024root___ctor_var_reset(VRSA_tb___024root* vlSelf);

VRSA_tb___024root::VRSA_tb___024root(VRSA_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRSA_tb___024root___ctor_var_reset(this);
}

void VRSA_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRSA_tb___024root::~VRSA_tb___024root() {
}

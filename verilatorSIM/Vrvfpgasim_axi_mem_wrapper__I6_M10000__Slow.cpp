// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"

void Vrvfpgasim_axi_mem_wrapper__I6_M10000___ctor_var_reset(Vrvfpgasim_axi_mem_wrapper__I6_M10000* vlSelf);

Vrvfpgasim_axi_mem_wrapper__I6_M10000::Vrvfpgasim_axi_mem_wrapper__I6_M10000(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim_axi_mem_wrapper__I6_M10000___ctor_var_reset(this);
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim_axi_mem_wrapper__I6_M10000::~Vrvfpgasim_axi_mem_wrapper__I6_M10000() {
}

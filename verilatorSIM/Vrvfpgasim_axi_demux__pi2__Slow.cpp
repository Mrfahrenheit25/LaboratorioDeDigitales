// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_demux__pi2.h"

void Vrvfpgasim_axi_demux__pi2___ctor_var_reset(Vrvfpgasim_axi_demux__pi2* vlSelf);

Vrvfpgasim_axi_demux__pi2::Vrvfpgasim_axi_demux__pi2(Vrvfpgasim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrvfpgasim_axi_demux__pi2___ctor_var_reset(this);
}

void Vrvfpgasim_axi_demux__pi2::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrvfpgasim_axi_demux__pi2::~Vrvfpgasim_axi_demux__pi2() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vibex_simple_system::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vibex_simple_system__Dpi.h"
#include "Vibex_simple_system.h"

#ifndef _VL_DPIDECL_mhpmcounter_get
#define _VL_DPIDECL_mhpmcounter_get
long long mhpmcounter_get(int index) {
    // DPI export at ../src/psc_ibex_ibex_simple_system_0/rtl/ibex_simple_system.sv:286:30
    return Vibex_simple_system::mhpmcounter_get(index);
}
#endif

#ifndef _VL_DPIDECL_simutil_verilator_memload
#define _VL_DPIDECL_simutil_verilator_memload
void simutil_verilator_memload(const char* file) {
    // DPI export at ../src/lowrisc_ibex_sim_shared_0/./rtl/ram_2p.sv:104:10
    return Vibex_simple_system::simutil_verilator_memload(file);
}
#endif

#ifndef _VL_DPIDECL_simutil_verilator_set_mem
#define _VL_DPIDECL_simutil_verilator_set_mem
int simutil_verilator_set_mem(int index, const svLogicVecVal* val) {
    // DPI export at ../src/lowrisc_ibex_sim_shared_0/./rtl/ram_2p.sv:110:18
    return Vibex_simple_system::simutil_verilator_set_mem(index, val);
}
#endif


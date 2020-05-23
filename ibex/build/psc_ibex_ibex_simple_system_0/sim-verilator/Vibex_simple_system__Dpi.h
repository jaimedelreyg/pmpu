// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI EXPORTS
    // DPI export at ../src/lowrisc_ibex_sim_shared_0/./rtl/ram_2p.sv:101
    extern void simutil_verilator_memload(const char* file);
    // DPI export at ../src/lowrisc_ibex_sim_shared_0/./rtl/ram_2p.sv:107
    extern int simutil_verilator_set_mem(int index, const svLogicVecVal* val);
    
#ifdef __cplusplus
}
#endif

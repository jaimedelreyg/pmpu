// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_simple_system__Syms.h"
#include "Vibex_simple_system.h"
#include "Vibex_simple_system_posit_unit.h"
#include "Vibex_simple_system_data_extract_v1.h"



// FUNCTIONS
Vibex_simple_system__Syms::Vibex_simple_system__Syms(Vibex_simple_system* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT1.PADD.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT1.PADD.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT1.PDIV.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT1.PDIV.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT1.PMULT.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT1.PMULT.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT2.PADD.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT2.PADD.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT2.PDIV.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT2.PDIV.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT2.PMULT.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT2.PMULT.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT3"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT3.PADD.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT3.PADD.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT3.PDIV.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT3.PDIV.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT3.PMULT.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT3.PMULT.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT4"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT4.PADD.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT4.PADD.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT4.PDIV.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT4.PDIV.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT4.PMULT.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_cooprocessor.PUNIT4.PMULT.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_single_processor.padd.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_single_processor.padd.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_single_processor.pdiv.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_single_processor.pdiv.uut_de2"))
    , TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_single_processor.pmul.uut_de1"))
    , TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2(Verilated::catName(topp->name(), "ibex_simple_system.u_posit_single_processor.pmul.uut_de2"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1->__PVT__PADD__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1->__PVT__PADD__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1->__PVT__PDIV__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1->__PVT__PDIV__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1->__PVT__PMULT__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1->__PVT__PMULT__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2->__PVT__PADD__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2->__PVT__PADD__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2->__PVT__PDIV__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2->__PVT__PDIV__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2->__PVT__PMULT__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2->__PVT__PMULT__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3->__PVT__PADD__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3->__PVT__PADD__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3->__PVT__PDIV__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3->__PVT__PDIV__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3->__PVT__PMULT__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3->__PVT__PMULT__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4->__PVT__PADD__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4->__PVT__PADD__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4->__PVT__PDIV__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4->__PVT__PDIV__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4->__PVT__PMULT__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4->__PVT__PMULT__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1 = &TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1;
    TOPp->__PVT__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2 = &TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__Vconfigure(this, true);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1.__Vconfigure(this, true);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1.__Vconfigure(this, false);
    TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2.__Vconfigure(this, false);
    // Setup scopes
    __Vscope_ibex_simple_system.configure(this, name(), "ibex_simple_system", "ibex_simple_system", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_core__u_ibex_tracer.configure(this, name(), "ibex_simple_system.u_core.u_ibex_tracer", "u_ibex_tracer", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_core__u_ibex_tracer__unnamedblk1.configure(this, name(), "ibex_simple_system.u_core.u_ibex_tracer.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_ram.configure(this, name(), "ibex_simple_system.u_ram", "u_ram", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_ibex_simple_system.exportInsert(__Vfinal, "mhpmcounter_get", (void*)(&Vibex_simple_system::__Vdpiexp_ibex_simple_system__DOT__mhpmcounter_get_TOP));
        __Vscope_ibex_simple_system__u_ram.exportInsert(__Vfinal, "simutil_verilator_memload", (void*)(&Vibex_simple_system::__Vdpiexp_ibex_simple_system__DOT__u_ram__DOT__simutil_verilator_memload_TOP));
        __Vscope_ibex_simple_system__u_ram.exportInsert(__Vfinal, "simutil_verilator_set_mem", (void*)(&Vibex_simple_system::__Vdpiexp_ibex_simple_system__DOT__u_ram__DOT__simutil_verilator_set_mem_TOP));
    }
}

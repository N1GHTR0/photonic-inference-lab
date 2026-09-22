// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_systolic_array_4x4);
    __Vhier.remove(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET__);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.remove(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(89);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4.configure(this, name(), "systolic_array_4x4", "systolic_array_4x4", "systolic_array_4x4", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET__.configure(this, name(), "systolic_array_4x4.g_row[0]", "g_row[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET__.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[0]", "g_col[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[0].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET__.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[1]", "g_col[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[1].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET__.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[2]", "g_col[2]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[2].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET__.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[3]", "g_col[3]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[0].g_col[3].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET__.configure(this, name(), "systolic_array_4x4.g_row[1]", "g_row[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET__.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[0]", "g_col[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[0].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET__.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[1]", "g_col[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[1].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET__.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[2]", "g_col[2]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[2].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET__.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[3]", "g_col[3]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[1].g_col[3].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET__.configure(this, name(), "systolic_array_4x4.g_row[2]", "g_row[2]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET__.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[0]", "g_col[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[0].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET__.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[1]", "g_col[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[1].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET__.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[2]", "g_col[2]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[2].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET__.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[3]", "g_col[3]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[2].g_col[3].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET__.configure(this, name(), "systolic_array_4x4.g_row[3]", "g_row[3]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET__.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[0]", "g_col[0]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[0].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET__.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[1]", "g_col[1]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[1].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET__.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[2]", "g_col[2]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[2].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET__.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[3]", "g_col[3]", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.configure(this, name(), "systolic_array_4x4.g_row[3].g_col[3].pe_inst", "pe_inst", "pe", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_systolic_array_4x4);
    __Vhier.add(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET__);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst);
    __Vhier.add(&__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET__, &__Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"a_in", &(TOP.a_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1,1 ,0,3 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"b_in", &(TOP.b_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1,1 ,0,3 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"c_out", &(TOP.c_out), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,2,1 ,0,3 ,0,3 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"en", &(TOP.en), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,3 ,7,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"a_wire", &(TOP.systolic_array_4x4__DOT__a_wire), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2,1 ,0,3 ,0,4 ,7,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,3 ,7,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"b_wire", &(TOP.systolic_array_4x4__DOT__b_wire), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2,1 ,0,4 ,0,3 ,7,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"c_out", &(TOP.systolic_array_4x4__DOT__c_out), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2,1 ,0,3 ,0,3 ,15,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__0__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__1__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__2__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__0__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__1__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__2__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"a_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__a_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"acc", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__acc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_in", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"b_out", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__b_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"clk", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"en", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_systolic_array_4x4__g_row__BRA__3__KET____g_col__BRA__3__KET____pe_inst.varInsert(__Vfinal,"rst", &(TOP.systolic_array_4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}

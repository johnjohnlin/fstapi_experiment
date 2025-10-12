#include <verilated.h>
#include "VRSA_tb.h" // Generated header for the Testbench module

#if VM_TRACE_VCD
#include <verilated_vcd_c.h> // For VCD waveform tracing
#elif VM_TRACE_FST
#include <verilated_fst_c.h> // For FST waveform tracing
#endif

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the Testbench module
    VRSA_tb* tb = new VRSA_tb;

    // Initialize simulation variables
    vluint64_t sim_time = 0;
    tb->clk = 0;
    tb->rst_n = 0;

#if VM_TRACE_VCD || VM_TRACE_FST
    Verilated::traceEverOn(true);
#if VM_TRACE_VCD
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("dump.vcd");
#elif VM_TRACE_FST
    VerilatedFstC* tfp = new VerilatedFstC;
    tb->trace(tfp, 99);
    tfp->open("dump.fst");
#endif
#endif

    // Deassert reset after a few cycles
    while (sim_time < 20) {
        tb->clk = !tb->clk;
        tb->eval();
#if VM_TRACE_VCD || VM_TRACE_FST
        if (tfp) tfp->dump(sim_time);
#endif
        sim_time++;
    }
    tb->rst_n = 1;

    // Drive the module for 1000 cycles
    for (int i = 0; i < 1000; i++) {
        tb->clk = !tb->clk;
        tb->eval();
#if VM_TRACE_VCD || VM_TRACE_FST
        if (tfp) tfp->dump(sim_time);
#endif
        sim_time++;
    }

#if VM_TRACE_VCD || VM_TRACE_FST
    // Close trace file
    if (tfp) {
        tfp->close();
        delete tfp;
    }
#endif

    // Cleanup and exit
    tb->final();
    delete tb;
    return 0;
}
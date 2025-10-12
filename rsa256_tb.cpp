#include <verilated.h>
#include "VRSA_tb.h" // Generated header for the Testbench module

// #define DUMPVCD 1 // remember to change make file to --trace
#define DUMPFST 1

#if defined(DUMPVCD) || defined(DUMPFST)
#define DUMP_ENABLED 1
#endif

#if DUMPVCD
#include <verilated_vcd_c.h> // For VCD waveform tracing
#elif DUMPFST
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

#if DUMP_ENABLED
    Verilated::traceEverOn(true);
#if DUMPVCD
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("dump.vcd");
#elif DUMPFST
    VerilatedFstC* tfp = new VerilatedFstC;
    tb->trace(tfp, 99);
    tfp->open("dump.fst");
#endif
#endif

    // Deassert reset after a few cycles
    while (sim_time < 20) {
        tb->clk = !tb->clk;
        tb->eval();
#if DUMP_ENABLED
        if (tfp) tfp->dump(sim_time);
#endif
        sim_time++;
    }
    tb->rst_n = 1;

    // magic number, RSA256 takes 132368 cycles to complete
    for (int i = 0; i < 150000; i++) {
        tb->clk = !tb->clk;
        tb->eval();
#if DUMP_ENABLED
        if (tfp) tfp->dump(sim_time);
#endif
        sim_time++;
    }

#if DUMP_ENABLED
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
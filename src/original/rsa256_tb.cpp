#include <chrono>
#include <iostream>
#include <verilated.h>
#include <verilated_fst_c.h> // For FST waveform tracing
#include "VRSA_tb.h" // Generated header for the Testbench module

using namespace std;
using namespace std::chrono;

int main(int argc, char **argv) {

    auto tic = high_resolution_clock::now();

    bool dump_fst = false;
    if (argc > 1 and argv[argc-1][0] == '1') {
        dump_fst = true;
        --argc;
    }
    Verilated::commandArgs(argc, argv);

    // Instantiate the Testbench module
    VRSA_tb* tb = new VRSA_tb;

    // Initialize simulation variables
    vluint64_t sim_time = 0;
    tb->clk = 0;
    tb->rst_n = 0;
    VerilatedFstC* tfp = nullptr;

    if (dump_fst) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedFstC;
        tb->trace(tfp, 99);
        tfp->open("dump.fst");
    }

    // Deassert reset after a few cycles
    while (sim_time < 20) {
        tb->clk = !tb->clk;
        tb->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
    }
    tb->rst_n = 1;

    // magic number, RSA256 takes 132368 cycles to complete
    for (int i = 0; i < 150000; i++) {
        tb->clk = !tb->clk;
        tb->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
    }

    // Close trace file
    if (tfp) {
        tfp->close();
        delete tfp;
    }

    // Cleanup and exit
    tb->final();
    delete tb;

    auto toc = high_resolution_clock::now();

    cout << duration_cast<microseconds>(toc-tic).count() << "us" << endl;
    return 0;
}

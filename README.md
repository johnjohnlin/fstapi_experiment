# About this repo

An experiment to rewrite `fstapi.c` for better Verilator simulation speed.

# Project structure
Everything is under `src/`

* `fstapi/`: The main focus of this repo.
* `fixed/`: Verilator generated files and Verilator libraries (copied from 5.036)
* `original/`: The human written code for genernating the verilated cpp files, and testbench.

Also, `golden.fst` is the output, our goal is to generate binary-compatible output against the original version.

# How to run
I have snapshot the Verilator output, and you just need to follow the standard cmake process. No Verilator is needed at all. You need a C++20 compiler as Verilator needs it.

```
cmake -B build src -DCMAKE_BUILD_TYPE=Release
cd build
make -j $(nproc)
time ./fixed_source 1 # FST version
time ./fixed_source # no FST version
```

# Profiling results

CPU: Ryzen 3700X

| Mode   | Runtime (s) |
|--------|-------------|
| FST    | 1.17        |
| No FST | 0.17        |

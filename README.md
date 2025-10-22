# About this repo

An experiment to rewrite `fstapi.c` for better Verilator simulation speed.

# Project structure
Everything is under `src/`

* `fstapi/fstcpp`: The main focus of this repo.
* `fstapi/gtkwave`: Original fstapi C implementation from GtkWave.
* `fixed/`: Verilator generated files and Verilator libraries (copied from 5.036)
* `original/`: The human written code for genernating the verilated cpp files, and testbench.

Also, `golden.fst` is the output, our goal is to generate binary-compatible output against the original version.

# How to run
I have snapshot the Verilator output, and you just need to follow the standard cmake process. No Verilator is needed at all. You need a C++20 compiler as Verilator needs it.

```
cmake -B build src -DCMAKE_BUILD_TYPE=Release
cd build
make -j $(nproc)
./fixed_source 1 # FST version
xxxx us # Program output
./fixed_source # no FST version
xxxx us # Program output
```

# Reference

Please refer to the [unofficial document](https://blog.timhutt.co.uk/fst_spec/).

# Profiling results

CPU: Ryzen 3700X, release mode, cell is the runtime (ms).

| Mode        | Benchmark 1 |
|:------------|------------:|
| GtkWave FST |       213.3 |
| This FST    |        TODO |
| Dummy FST   |        37.3 |
| No FST      |        11.8 |

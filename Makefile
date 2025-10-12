CXXFLAGS := "-std=c++20"

rsa256:
	verilator -Iverilog --cc --exe rsa256_tb.cpp RSA_tb.sv --timing --trace-fst
	${MAKE} VERILATOR_ROOT=.. -C obj_dir -f VRSA_tb.mk CXXFLAGS="$(CXXFLAGS)"

clean:
	rm -rf obj_dir dump.vcd dump.fst

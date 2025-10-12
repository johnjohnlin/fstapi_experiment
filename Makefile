CXXFLAGS := "-std=c++20"

rsa256:
	verilator -Iverilog --cc --exe rsa256_tb.cpp RSA_tb.sv --timing
	${MAKE} -C obj_dir -f VRSA_tb.mk CXXFLAGS="$(CXXFLAGS)"

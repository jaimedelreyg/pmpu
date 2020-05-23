# Posit Stream Cooprocessor
Welcome to the PSC repository.

## Description
- PSC is a stream cooprocessor which works with Posits. The cooprocessor uses Manish Kumar's [PaCogen](https://github.com/manish-kj/PACoGen) Hardware Project for posit calculations. Thanks Manish!

## Getting Started
0. RiscV platforms supported:
   - LowRisc's Ibex
  
1. Prerequisites:
   - FuseSoc
   - Verilog
  
2. How to Build:
   - Ibex:
  ```
      cd Ibex
      fusesoc library add psc_posit_cooprocessor .
      fusesoc library add ibex "path to lowrisc's ibex folder"
      fusesoc --config=fusesoc.conf run --target=sim --setup --build lowrisc:ibex:ibex_simple_system --RV32M=1 --RV32E=0
      make -C "testbench folder" -> in case of default test "sw/ibex/posit_cooprocessor_ini_test"
      ./build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/Vibex_simple_system -t --meminit=ram,"path to test's .elf file"
  ```

## Coming Soon

- RTL Diagram

- Custom ISA description

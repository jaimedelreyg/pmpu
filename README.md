# Posit Multi-Processing Unit repository
Welcome to the Posit Multi-Processing Unit repository

0. RiscV platforms supported:
   - LowRisc's Ibex
  
1. Prerequisites:
   - FuseSoc
   - Verilog
  
2. How to Build:
   - Ibex:
  ```
      cd Ibex
      fusesoc library add ppmu_posit_cooprocessor .
      fusesoc library add ibex "path to lowrisc's ibex folder"
      fusesoc --config=fusesoc.conf run --target=sim --setup --build lowrisc:ibex:ibex_simple_system --RV32M=1 --RV32E=0
      make -C "testbench folder" -> in case of default test "sw/ibex/posit_cooprocessor_ini_test"
      ./build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/Vibex_simple_system -t --meminit=ram,"path to test's .elf file"
  ```


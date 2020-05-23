# ppu
Welcome to the Posit Processing Unit repository

RiscV platforms supported:
  -LowRisc's Ibex
  
 Prerequisites:
  - FuseSoc
  - Verilog
  
 How to Build:
  -Ibex:
  ```
      cd Ibex
      fusesoc library add pvp_posit_cooprocessor .
      fusesoc library add ibex "path to lowrisc's ibex folder"
      fusesoc --config=fusesoc.conf run --target=sim --setup --build lowrisc:ibex:ibex_simple_system --RV32M=1 --RV32E=0
      make -C "testbench folder" -> in case of default test "sw/ibex/posit_cooprocessor_ini_test"
      ./build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/Vibex_simple_system -t --meminit=ram,"path to test's .elf file"
  ```


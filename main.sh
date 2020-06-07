PATH_IBEX=$1
echo "Abs. path of Ibex Core ${PATH_IBEX}"

PATH_ABS=$(realpath .)

cd ibex

echo "Creating template..."

function create_template {
	eval "echo \"$(cat $1)\""
}

create_template fusesoc.conf.template > fusesoc.conf

rm -r build/*

fusesoc library add psc_posit_cooprocessor . >/dev/null 2>&1
fusesoc library add ibex ${PATH_IBEX} >/dev/null 2>&1
fusesoc --config=fusesoc.conf run --target=sim --setup --build psc:ibex:ibex_simple_system --RV32M=1 --RV32E=0 >/dev/null 2>&1
make -C "../sw/ibex/posit_cooprocessor_ini_test" >/dev/null 2>&1
./build/psc_ibex_ibex_simple_system_0/sim-verilator/Vibex_simple_system -t --raminit=../sw/ibex/posit_cooprocessor_ini_test/test.vmem


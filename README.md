# Hardware
Pivoting to hardware?


##

FPGA are these very interesthing thing where you can "program" the circuit logic. How the hell do you program a circuit?

Here is the thing, I don't have an FPGA, but luckly, there an emulator called Verilator

## Verilator

This thing by itself is very intersthing because it takes verilog and *transpiles* it to C++ code (modules) to be executed for simulation. Very nice.

Tourns out installing verilatro direclty from ubuntu packages is a bad idea since it is outdated. So don't do `sudo apt install verilator`

Install it from source

```js
// Dependencies
sudo apt install help2man perl python3 make
sudo apt g++
sudo apt install libfl2
sudo apt install libfl-dev
sudo apt install zlib1g zlib1g-dev
sudo apt install libsystemc libsystemc-dev
sudo apt install z3
sudo apt install perl-doc
sudo apt install ccache
sudo apt install mold
sudo apt install libgoogle-perftools-dev numactl
sudo apt install autoconf flex bison
// compiling
git clone https://github.com/verilator/verilator.git
cd verilator
git pull
unset VERILATOR_ROOT //  Important
autoconf
./configure
make -j$(nproc)      //  Fast build using all cores
sudo make install
```

Transpile simple hello world
```js
verilator --cc --exe --build --main -j 0 top.v
// run it
./obj_dir/Vtop

// Add timing
verilator --cc --exe --build --main --timing -j 1 andGate.v
./obj_dir/VandGate

// XOR, NAND
verilator --cc --exe --build --main --timing -j 1 xnorGate.v 
```

You can actually create C++ main function for tests. Maybe later


## Path

* Gates
* Adder
* Multiplexer
* Memory (SRAM)
* LTU

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

### Half adder

To simulate the add operation on bits, the XOR gate is used. Its true table correctly representes the sum of values (0,0), (0,1), (1,0) and for the case (1,1) an AND gate is used in conjunction to get the the carry bit 

XOR (1, 1) = 0 => Sum
AND (1, 1) = 1 => Carry
             10

For all other states, only XOR is neccesary


## Path

* Gates
* Half Adder
* Full Adder
* Multiplexer
* Memory (SRAM)
* LTU

* CPU
* Assembler
* Kernel module
* TPU
* ML training
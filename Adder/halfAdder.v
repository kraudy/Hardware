
// Simple half adder

// a  b  | sum cout
// ------+---------
// 0  0  |  0    0
// 0  1  |  1    0
// 1  0  |  1    0
// 1  1  |  0    1

// verilator lint_off UNOPTFLAT

module xor_gate (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = (a ^ b); 
endmodule

module and_gate (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = (a & b);  // Continuous assignment for combinational logic
endmodule

module half_adder (
  input   wire a,
  input   wire b,
  output  wire sum,
  output  wire cout
);

  // Instantiate gates
  xor_gate xor1 (.a(a), .b(b), .y(sum));

  and_gate and1 (.a(a), .b(b), .y(cout));

endmodule

module top;
  // Variables
  reg a = 0;
  reg b = 0;

  // Output variables, like pointers
  wire sum;
  wire cout;

  // Instantiate and map half adder
  half_adder half1 (.a(a), .b(b), .sum(sum), .cout(cout));

  initial begin
    $display("a  b | sum cout");
    $display("-----+---------");

    // Note how we change the reg values and the adder automatically runs the logic and updates the out wires
    a=0; b=0; #10 $display("%b  %b  |  %b    %b", a, b, sum, cout);
    a=0; b=1; #10 $display("%b  %b  |  %b    %b", a, b, sum, cout);
    a=1; b=0; #10 $display("%b  %b  |  %b    %b", a, b, sum, cout);
    a=1; b=1; #10 $display("%b  %b  |  %b    %b", a, b, sum, cout);

    #1 $display("Simulation complete!");
    $finish;
  end

endmodule
// Simple half subtractor

// a  b  | diff borrow
// ------+------------
// 0  0  |  0     0
// 0  1  |  1     1
// 1  0  |  1     0
// 1  1  |  0     0

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
    assign y = (a & b);
endmodule

module not_gate (
    input  wire a,
    output wire y
);
    assign y = ~a;
endmodule

module half_subtractor (
  input   wire a,
  input   wire b,
  output  wire diff,
  output  wire borrow
);

  wire a_inv;

  // Difference: same as adder sum
  xor_gate xor1 (.a(a), .b(b), .y(diff));

  // Borrow: ~a & b
  not_gate inv_a (.a(a), .y(a_inv));
  and_gate and1 (.a(a_inv), .b(b), .y(borrow));

endmodule

module top;
  // Inputs
  reg a = 0;
  reg b = 0;

  // Outputs
  wire diff;
  wire borrow;

  // Instantiate half subtractor
  half_subtractor hs1 (.a(a), .b(b), .diff(diff), .borrow(borrow));

  initial begin
    $display("a  b | diff borrow");
    $display("-----+------------");

    a=0; b=0; #10 $display("%b  %b  |  %b     %b", a, b, diff, borrow);
    a=0; b=1; #10 $display("%b  %b  |  %b     %b", a, b, diff, borrow);
    a=1; b=0; #10 $display("%b  %b  |  %b     %b", a, b, diff, borrow);
    a=1; b=1; #10 $display("%b  %b  |  %b     %b", a, b, diff, borrow);

    #1 $display("Simulation complete!");
    $finish;
  end

endmodule
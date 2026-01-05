// Simple full subtractor built using two half subtractors

// Full Subtractor Truth Table (with borrow-in)
// a  b bin | diff bout
// ---------+-----------
// 0  0  0  |  0    0
// 0  0  1  |  1    1
// 0  1  0  |  1    1
// 0  1  1  |  0    1
// 1  0  0  |  1    0
// 1  0  1  |  0    0
// 1  1  0  |  0    0
// 1  1  1  |  1    1

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

module or_gate (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = (a | b);
endmodule

// Existing half subtractor (unchanged)
module half_subtractor (
  input   wire a,
  input   wire b,
  output  wire diff,
  output  wire borrow
);

  wire a_inv;

  xor_gate xor1 (.a(a), .b(b), .y(diff));

  not_gate inv_a (.a(a), .y(a_inv));
  and_gate and1 (.a(a_inv), .b(b), .y(borrow));

endmodule

module full_subtractor (
  input   wire a,
  input   wire b,
  input   wire bin,    // borrow-in
  output  wire diff,
  output  wire bout   // borrow-out
);

  wire diff1;    // intermediate difference from first HS
  wire borrow1;  // intermediate borrow from first HS
  wire borrow2;  // borrow from second HS

  // First stage: subtract b from a
  half_subtractor hs1 ( .a(a), .b(b), .diff(diff1), .borrow(borrow1));

  // Second stage: subtract bin from the intermediate difference
  half_subtractor hs2 ( .a(diff1), .b(bin), .diff(diff), .borrow(borrow2));

  // Final borrow-out: either of the two borrows can generate it
  or_gate or_bout ( .a(borrow1), .b(borrow2), .y(bout));

endmodule

module top;
  // Inputs
  reg a = 0;
  reg b = 0;
  reg bin = 0;

  // Outputs
  wire diff;
  wire bout;

  // Instantiate full subtractor
  full_subtractor fs1 (.a(a), .b(b), .bin(bin), .diff(diff), .bout(bout));

  initial begin
    $display("a  b bin | diff bout");
    $display("---------+-----------");

    // Test all 8 combinations
    for (int i = 0; i < 8; i = i + 1) begin
      {a, b, bin} = i[2:0];  // a = MSB, b = middle, bin = LSB
      #10 $display("%b  %b  %b   |  %b     %b", a, b, bin, diff, bout);
    end

    #1 $display("Simulation complete!");
    $finish;
  end

endmodule

// Simple XNOR gate

// a b | y
// ----+---
// 0 0 | 1
// 0 1 | 0
// 1 0 | 0
// 1 1 | 1

// verilator lint_off UNOPTFLAT
module xnor_gate (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = ~(a ^ b);
endmodule

module top;
  reg a = 0;
  reg b = 0;

  wire y;
  xnor_gate dut (.a(a), .b(b), .y(y));

  initial begin;
    $display("a b | y");
    $display("----+---");

    a = 0; b = 0; #10 $display("%b %b | %b", a, b, y);
    a = 0; b = 1; #10 $display("%b %b | %b", a, b, y);
    a = 1; b = 0; #10 $display("%b %b | %b", a, b, y);
    a = 1; b = 1; #10 $display("%b %b | %b", a, b, y);

    $finish;
  end

endmodule;



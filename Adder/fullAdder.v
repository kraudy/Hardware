
// Simple one bit adder made from primitive gates

// a  b cin | sum cout
// ---------+---------
// 0  0  0  |  0    0
// 0  0  1  |  1    0
// 0  1  0  |  1    0
// 0  1  1  |  0    1
// 1  0  0  |  1    0
// 1  0  1  |  0    1
// 1  1  0  |  0    1
// 1  1  1  |  1    1

// verilator lint_off UNOPTFLAT

module or_gate (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = (a | b); 
endmodule

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

module full_adder (
    input  wire a,
    input  wire b,
    input  wire cin, // A full adder needs an external cin singnal for the second half adder
    output wire sum,
    output wire cout
);
    // Intermediary variable
    wire half_sum;

    wire c1;
    wire c2;

    // half adders
    // Note how the carries are not fed from one adder to the other
    half_adder half1 (.a(a), .b(b), .sum(half_sum), .cout(c1));

    // fed external cin to the second half adder
    half_adder half2 (.a(half_sum), .b(cin), .sum(sum), .cout(c2));

    or_gate or1 (.a(c1), .b(c2), .y(cout));

endmodule

module top;
    reg a = 0;
    reg b = 0;
    reg cin = 0;

    wire sum;
    wire cout;

    full_adder dut (.a(a), .b(b), .cin(cin), .sum(sum), .cout(cout));

    initial begin
      $display("a b cin | sum cout");
      $display("--------+---------");

      // Test all 8 combinations (now with cin)
      {a,b,cin}=3'b000; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
      {a,b,cin}=3'b001; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
      {a,b,cin}=3'b010; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
      {a,b,cin}=3'b011; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
      {a,b,cin}=3'b100; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
      {a,b,cin}=3'b101; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
      {a,b,cin}=3'b110; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
      {a,b,cin}=3'b111; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);

      #1 $display("Simulation complete!");
      $finish;
    end

endmodule
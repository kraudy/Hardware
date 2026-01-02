
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

module or_gate_3i ( // 3 input OR Gate for carry out
    input  wire a,
    input  wire b,
    input  wire c,
    output wire y
);
    assign y = (a | b | c); // Bitwise or
endmodule

module full_adder (
    input  wire a,
    input  wire b,
    input  wire cin,
    output wire sum,
    output wire cout
);
    // Intermediate wires
    wire xor_ab;        // a ^ b
    wire and_ab;        // a & b
    wire and_ac;        // a & cin
    wire and_bc;        // b & cin

    // Instantiate gates
    xor_gate xor1 (.a(a),    .b(b),   .y(xor_ab));
    xor_gate xor2 (.a(xor_ab), .b(cin), .y(sum));

    and_gate and1 (.a(a), .b(b),   .y(and_ab));
    and_gate and2 (.a(a), .b(cin), .y(and_ac));
    and_gate and3 (.a(b), .b(cin), .y(and_bc));

    or_gate_3i or1 (.a(and_ab), .b(and_ac), .c(and_bc), .y(cout));
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

        a=0; b=0; cin=0; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
        a=0; b=0; cin=1; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
        a=0; b=1; cin=0; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
        a=0; b=1; cin=1; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
        a=1; b=0; cin=0; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
        a=1; b=0; cin=1; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
        a=1; b=1; cin=0; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);
        a=1; b=1; cin=1; #10 $display("%b %b  %b  |  %b    %b", a, b, cin, sum, cout);

        #1 $display("Simulation complete!");
        $finish;
    end
endmodule
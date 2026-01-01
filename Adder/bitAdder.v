
// Simple one bit adder made from primitive gates

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


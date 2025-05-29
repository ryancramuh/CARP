`timescale 1ns / 1ps

module ALU(
    input logic [31:0] SRC_A,
    input logic [31:0] SRC_B,
    input logic [3:0] ALU_CTRL,
    output logic [31:0] RESULT,
    output logic ZERO
    );
    
    always_comb begin
    case(ALU_CTRL)
    4'b0000: begin RESULT = SRC_A + SRC_B; end                   // ADD
    4'b1000: begin RESULT = SRC_A - SRC_B; end                   // SUB
    4'b0110: begin RESULT = SRC_A | SRC_B; end                   // OR
    4'b0111: begin RESULT = SRC_A & SRC_B; end                   // AND
    4'b0100: begin RESULT = SRC_A ^ SRC_B; end                   // XOR
    4'b0101: begin RESULT = SRC_A >> SRC_B[4:0]; end             // SRL
    4'b0001: begin RESULT = SRC_A << SRC_B[4:0]; end             // SLL
    4'b1101: begin RESULT = $signed(SRC_A) >>> SRC_B[4:0]; end   // SRA
    4'b0010: begin RESULT = {31'b0_0000_0000_0000_0000_0000_0000_0000,($signed(SRC_A) < $signed(SRC_B))}; end // SLT
    4'b0011: begin RESULT = {31'b0_0000_0000_0000_0000_0000_0000_0000,(SRC_A < SRC_B)}; end                   // SLTU
    4'b1001: begin RESULT = SRC_A; end                           // LUI (copy)
    default: begin RESULT = 32'd0; end
    endcase
    end
    
    // zero for checking 
    assign ZERO = |RESULT;

endmodule

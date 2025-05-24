`timescale 1ns/1ps

module MUX8T1(

    input [2:0] SEL,
    input [31:0] D0;
    input [31:0] D1;
    input [31:0] D2;
    input [31:0] D3;
    input [31:0] D4;
    input [31:0] D5;
    input [31:0] D6;
    input [31:0] D7;
    output logic [31:0] DOUT;

);

    always_comb begin
        case(SEL) 
            3'b000: begin
                DOUT <= D0;
            end
            3'b001: begin
                DOUT <= D1;
            end
            3'b010: begin
                DOUT <= D2;
            end
            3'b011: begin
                DOUT <= D3;
            end
            3'b100: begin
                DOUT <= D4;
            end
            3'b101: begin
                DOUT <= D5;
            end
            3'b110: begin
                DOUT <= D6;
            end
            3'b111: begin
                DOUT <= D7;
            end
            default: begin
                DOUT <= D0;
            end
        endcase
    end

endmodule
`timescale 1ns/1ps

module MUX4T1(

    input [1:0] SEL,
    input [31:0] D0,
    input [31:0] D1,
    input [31:0] D2,
    input [31:0] D3,
    output logic [31:0] DOUT

);

    always_comb begin
        case(SEL) 
            2'b00: begin
                DOUT = D0;
            end
            2'b01: begin
                DOUT = D1;
            end
            2'b10: begin
                DOUT = D2;
            end
            2'b11: begin
                DOUT = D3;
            end
            default: begin
                DOUT = D0;
            end
        endcase
    end

endmodule
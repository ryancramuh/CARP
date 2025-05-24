`timescale 1ns/1ps

module MUX2T1(

    input SEL,
    input [31:0] D0,
    input [31:0] D1,
    output logic [31:0] DOUT

);

    always_comb begin
        case(SEL) 
            1'b0: begin
                DOUT <= D0;
            end
            1'b1: begin
                DOUT <= D1;
            end
            default: begin
                DOUT <= D0;
            end
        endcase
    end

endmodule
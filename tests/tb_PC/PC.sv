`timescale 1ns/1ps

parameter n = 32;

module PC(
    input clk,
    input rst,
    input pc_en,
    input [n-1:0] pc_in,
    output logic [n-1:0] pc_out
);

    always_ff @ (posedge clk) begin
        if (rst) begin
            pc_out <= 32'h0000_0000;
        end
        else if (pc_en) begin
            pc_out <= pc_in;
        end 
        else
            pc_out <= pc_out;
    end

endmodule
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2025 10:15:15 PM
// Design Name: 
// Module Name: OTTER_TB
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module tb_OTTER();

    logic CLK;
    logic RST;
    
    OTTER UUT(
        .CLK(CLK),
        .RST(RST)
    );

    initial begin
        $dumpfile("tb_OTTER.vcd");
        $dumpvars(2, tb_OTTER);
    end
    
    initial begin
        #5 CLK = 1'b0;
        forever #5 CLK = ~CLK;
    end
    
    initial begin
        RST = 1'b1;
    end 
    
    always begin
        #200 RST = 1'b0;
        #2700 
            $finish;
    end
     
endmodule

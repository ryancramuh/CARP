`timescale 1ns/1ps

module REG_FILE(

    input CLK,
    input [4:0] REG_ADDR1,
    input [4:0] REG_ADDR2,
    input WRITE_EN,
    input [4:0] WRITE_ADDR,
    input [31:0] WRITE_DATA,
    output logic [31:0] REG_1_DATA,
    output logic [31:0] REG_2_DATA

);

    logic [31:0] register[0:31];
    
    initial begin
    static int i = 0;
        for (i = 0; i < 32; i++) begin
        register[i] = 0;
        end
    end
    
    // asynchronous reads for RS1, RS2
    assign REG_1_DATA = register[REG_ADDR1];
    assign REG_2_DATA = register[REG_ADDR2];
   
   // register flip flop
   // NOTE *** (x0) is never written to and remains 0.
    always_ff@(posedge CLK) begin
        if (WRITE_EN && WRITE_ADDR != 'd0) begin
            register[WRITE_ADDR] <= WRITE_DATA;
        end
    end 


endmodule;
`timescale 1ns/1ps

module tb_PC();

    logic CLK, RST;
    logic PC_EN;
    logic [31:0] PC_IN, PC_OUT;

    PC dut(
        .clk(CLK),
        .rst(RST),
        .pc_en(PC_EN),
        .pc_in(PC_IN),
        .pc_out(PC_OUT)
    );

    

    initial begin
        $dumpfile("tb_PC.vcd");
        $dumpvars(0, tb_PC);
    end

    initial begin
        #5 CLK = 1'b0;
        forever #5 CLK = ~CLK;
    end

    always begin
        // TEST RESET
        #10 RST   = 1'b1;
            PC_EN = 1'b0;
            PC_IN = 32'h0000_0000;

        // TEST PRIORITY
        #10 RST   = 1'b1;
            PC_EN = 1'b1;
            PC_IN = 32'h0000_0001;
        
        // TEST WRITING
        #10 RST   = 1'b0;
            PC_EN = 1'b1;
            PC_IN = 32'h0000_feed;

        // TEST HOLDING DATA
        #10 RST   = 1'b0;
            PC_EN = 1'b0;
            PC_IN = 32'h0000_feed;

        // TEST CLEARING DATA
        #10 RST   = 1'b1;
            PC_EN = 1'b0;
            PC_IN = 32'h0000_feed;

        // TEST VARIOUS DATA:
        #10 RST   = 1'b0;
            PC_EN = 1'b1;
            PC_IN = 32'h0000_beef;

        #10 RST   = 1'b0;
            PC_EN = 1'b1;
            PC_IN = 32'h0000_dead;
        
        #10 RST   = 1'b0;
            PC_EN = 1'b1;
            PC_IN = 32'h0000_abba;
        
        #10 RST   = 1'b0;
            PC_EN = 1'b1;
            PC_IN = 32'h0000_beed;
        
        // FINISH
        #100 
            $finish;
    end
endmodule
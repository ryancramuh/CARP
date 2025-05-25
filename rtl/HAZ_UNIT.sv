`timescale 1ns/1ps 

module HAZ_UNIT(

    input [31:0] IR,         // Instruction in decode
    input [4:0]  RD_M,       // Destination register in EX
    input [4:0]  RD_W,       // Destination register in WB
    input [4:0]  RS1,        // Source register 1 in decode
    input [4:0]  RS2,        // Source register 2 in decode
    input        MEM_READ_EX, // Is EX instruction a load?
    input        MEM_READ_WB, // Is WB instruction a load?
    output logic [1:0] FWD_A_SEL,
    output logic [1:0] FWD_B_SEL,
    output logic STALL,
    output logic FLUSH
);

    logic MEM_FWD1, MEM_FWD2, WB_FWD1, WB_FWD2;

    assign MEM_FWD1 = (RD_M == RS1) && (RD_M != 5'd0) && (RS1 != 5'd0);
    assign MEM_FWD2 = (RD_M == RS2) && (RD_M != 5'd0) && (RS2 != 5'd0);
    assign WB_FWD1  = (RD_W == RS1) && (RD_W != 5'd0) && (RS1 != 5'd0);
    assign WB_FWD2  = (RD_W == RS2) && (RD_W != 5'd0) && (RS2 != 5'd0);

    logic load_use;
    assign load_use = MEM_READ_EX && (MEM_FWD1 || MEM_FWD2);

    always_comb begin
        FWD_A_SEL = 2'b00;
        FWD_B_SEL = 2'b00;
        STALL     = 1'b0;
        FLUSH     = 1'b0;

        // Forwarding A
        if (MEM_FWD1)
            FWD_A_SEL = 2'b01;              // Forward from EX
        else if (WB_FWD1 && !MEM_READ_WB)
            FWD_A_SEL = 2'b10;              // Forward ALU result from WB
        else if (WB_FWD1 && MEM_READ_WB)
            FWD_A_SEL = 2'b11;              // Forward load result from WB (memout)

        // Forwarding B
        if (MEM_FWD2)
            FWD_B_SEL = 2'b01;
        else if (WB_FWD2 && !MEM_READ_WB)
            FWD_B_SEL = 2'b10;
        else if (WB_FWD2 && MEM_READ_WB)
            FWD_B_SEL = 2'b11;

        // Load-use stall
        if (load_use)
            STALL = 1'b1;
    end

endmodule




/*

logic [31:0] fwd_a_out, fwd_b_out;
logic [1:0] fwd_a_sel, fwd_b_sel;

HAZ_UNIT OTTER_HU (
    .IR(FE_DE.IR),
    .RD_M(EX_MEM.DEST_REG),
    .RD_W(MEM_WB.DEST_REG),
    .RS1(FE_DE.IR[19:15]),
    .RS2(FE_DE.IR[24:20]),
    .MEM_READ_EX(DE_EX.MEM_READ),
    .MEM_READ_WB(MEM_WB.MEM_READ),
    .FWD_A_SEL(fwd_a_sel),
    .FWD_B_SEL(fwd_b_sel),
    .STALL(stall),
    .FLUSH(flush)
);


MUX4T1 FWD_A_MUX(
    .SEL(fwd_a_sel),
    .D0(src_a_out),
    .D1(EX_MEM.ALU_RESULT),
    .D2(MEM_WB.ALU_RESULT),
    .D3(memout)
    .DOUT(fwd_a_out)
);

MUX4T1 FWD_B_MUX(
    .SEL(fwd_b_sel),
    .D0(src_a_out),
    .D1(EX_MEM.ALU_RESULT),
    .D2(MEM_WB.ALU_RESULT),
    .D3(memout)
    .DOUT(fwd_b_out)
);

// MAKE SURE ALU GETS FORWARD MUX OUTPUTS AS SOURCE
*/ 
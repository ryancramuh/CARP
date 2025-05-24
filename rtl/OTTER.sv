`timescale 1ns/1ps

module OTTER(

    input CLK,
    input RST

);
 
    // AUXILARY
    logic mem_err;

    // PIPELINE REGISTER
    typedef struct packed {

        logic [31:0] IR;
        logic [31:0] PC;
        logic [31:0] NEXT_PC;
        logic [31:0] RS1;
        logic [31:0] RS2;
        logic [31:0] IMM;
        logic [1:0] SRC_A_SEL;
        logic [1:0] SRC_B_SEL;
        //logic [1:0]
        //logic [1:0]
        logic [3:0] ALU_CTRL;
        logic [31:0] ALU_RESULT;
        logic MEM_WRITE;
        logic MEM_READ;
        logic MEM_READ;
        logic REG_WRITE;
        logic [31:0] MEM_DATA;
        logic [1:0] RF_MUX_SEL;
        logic [4:0] DEST_REG;
        logic [31:0] DEST_REG_DATA;

    } pipeline_reg_t;

    pipeline_reg_t FE_DE, DE_EX, EX_MEM, MEM_WB;


    logic [31:0] ir;
    logic [31:0] pc_in;
    logic [31:0] pc_out; // pc out
    logic [31:0] nextpc;

    assign nextpc = pc_out + 4;

    logic [31:0] u_type;
    logic [31:0] i_type;
    logic [31:0] s_type;
    logic [31:0] b_type;
    logic [31:0] j_type;

    logic [31:0] rs1, rs2;
    logic [2:0] pc_sel;
    logic src_a_sel;
    logic [1:0] src_b_sel;
    logic [3:0] alu_ctrl;
    logic regwrite;
    lorgic memwrite;
    logic memread;
    logic [1:0] rf_sel;
    logic [2:0] imm_sel;

    logic [31:0] src_a_out;
    logic [31:0] src_b_out;
    logic [31:0] alu_result;

    logic [31:0] memout;


    always_ff @ (posedge CLK) begin

        if (RST) begin
            FE_DE <= 'b0;
            DE_EX <= 'b0;
            EX_MEM <= 'b0;
            MEM_WB <= 'b0;
        end
        else begin

            FE_DE.IR <= ir;
            FE_DE.PC <= pc_out;
            FE_DE.NEXT_PC <= nextpc;

            DE_EX.IR <= FE_DE.IR;
            DE_EX.PC <= FE_DE.PC;
            DE_EX.NEXT_PC <= FE_DE.NEXT_PC
            DE_EX.SRC_A_SEL <= src_a_sel;
            DE_EX.SRC_B_SEL <= src_b_sel;
            DE_EX.REG_WRITE <= regwrite;
            DE_EX.MEM_WRITE <= memwrite;
            DE_EX.MEM_READ2 <= memread;
            DE_EX.RF_MUX_SEL <= rf_sel;
            DE_EX.ALU_CTRL <= alu_ctrl;
            DE_EX.SRC_A_SEL <= src_a_sel;
            DE_EX.SRC_B_SEL <= src_b_sel;

            EX_MEM.IR <= DE_EX.IR;
            EX_MEM.PC <= DE_EX.PC;
            EX_MEM.NEXT_PC <= DE_EX.NEXT_PC;
            EX_MEM.ALU_RESULT <= alu_result;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL; 
            EX_MEM.REG_WRITE <= DE_EX.REG_WRITE;
            EX_MEM.MEM_WRITE <= DE_EX.MEM_WRITE;
            EX_MEM.MEM_READ2 <= DE_EX.MEM_READ;
            EX_MEM.RF_MUX_SEL <= DE_EX.RF_MUX_SEL;
            EX_MEM.ALU_CTRL <= DE_EX.ALU_CTRL;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL;

            MEM_WB.ERR <= memerr;
            MEM_WB.MEM_DATA <= memout;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
            MEM_WB.REG_WRITE <= EX_MEM.REG_WRITE;
            MEM_WB.MEM_WRITE <= EX_MEM.MEM_WRITE;
            MEM_WB.MEM_READ2 <= EX_MEM.MEM_READ2;
            MEM_WB.RF_MUX_SEL <= EX_MEM.RF_MUX_SEL;
            MEM_WB.ALU_CTRL <= EX_MEM.ALU_CTRL;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
        end
    end

    
    DUALPORT_MEM OTTER_MEM(
        .MEM_ADDR1(pc_out),                 // ADDRESS OF INSTRUCTION
        .MEM_ADDR2(EX_MEM.ALU_RESULT),  // RESULT OF ALU
        .MEM_CLK(CLK),                  // CLK
        .MEM_DIN2(EX_MEM.RS2),          // **WILL NEED TO CHANGE FOR HAZARDS
        .MEM_WRITE2(EX_MEM.MEM_WRITE),  // MEM_WRITE COMPUTED IN
        .MEM_READ1(1'b1),
        .MEM_READ2(EX_MEM.MEM_READ),
        .IO_IN(),
        .ERR(memerr),        // high if misaligned or O.O.B. memory access
        .MEM_DOUT1(ir),
        .MEM_DOUT2(memout),
        .IO_WR()
    );


    REG_FILE OTTER_RF(
        
        .CLK(CLK),
        .REG_ADDR1(rs1),
        .REG_ADDR2(rs2),
        .WRITE_EN(MEM_WB.REG_WRITE),
        .WRITE_ADDR(MEM_WB.DEST_REG),
        .WRITE_DATA(MEM_WB.DEST_REG_DATA),
        .REG_1_DATA(rs1),
        .REG_2_DATA(rs2)
    
    );


    MUX4T1 PC_MUX(

        .SEL(1'b00),
        .D0(nextpc),
        .D1(32'h0000_0000),
        .D2(32'h0000_0000),
        .D3(32'h0000_0000),
        .DOUT(pc_in)

    );


    PC OTTER_PC(

        .CLK(CLK),
        .RST(RST),
        .PC_EN(1'b0), // IN THE FUTURE CHANGE TO FLUSH OR STALL
        .PC_IN(pc_in),
        .PC_OUT(pc_out)

    );
    

    CTRL_UNIT OTTER_CU(

        .OPCODE(FE_DE.IR[6:0]),
        .FUNC3(FE_DE.IR[14:12]),
        .FUNC7(FE_DE.IR[30]),
        .REG_WRITE(regwrite),
        .MEM_WRITE(memwrite),
        .MEM_READ2(memread),
        .RF_SEL(rf_sel),
        .ALU_FUN(alu_ctrl),
        .ALU_SRCA(src_a_sel),
        .ALU_SRCB(src_b_sel),
        .PC_SRC(pc_sel)
        .IMM_SEL(imm_sel)

    );
    
    

    IMMED_GEN OTTER_IG(

        .IR(FE_DE.IR[31:7]),
        .IMM_SEL(imm_sel),
        .IMM(imm)

    );
    

    MUX2T1 SRC_A_MUX(

        .SEL(DE_EX.SRC_A_SEL),
        .D0(DE_EX.REG_1_DATA),
        .DOUT(src_a_out)

    );


    MUX4T1 SRC_B_MUX(

        .SEL(DE_EX.SRC_B_SEL),
        .D0(DE_EX.REG_2_DATA),
        .D1(DE_EX.IMM),
        .D2(DE_EX.PC),
        .D3(32'h0000_0000),
        .DOUT(src_b_out)

    );


    ALU OTTER_ALU(

        .SRC_A(src_a_out),
        .SRC_B(src_b_out),
        .ALU_CTRL(DE_EX.alu_ctrl),
        .RESULT(alu_result)

    );


    MUX4T1 RF_MUX(

        .SEL(MEM_WB.RF_MUX_SEL),
        .D0(MEM_WB.NEXT_PC),
        .D1(32'h0000_0000),
        .D2(MEM_WB.MEM_DATA),
        .D3(MEM_WB.ALU_RESULT),
        .DOUT(MEM_WB.DEST_REG_DATA)

    );



endmodule


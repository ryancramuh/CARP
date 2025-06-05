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
        logic SRC_A_SEL;
        logic [1:0] SRC_B_SEL;
        //logic [1:0]
        //logic [1:0]
        logic [3:0] ALU_CTRL;
        logic [31:0] ALU_RESULT;
        logic MEM_WRITE;
        logic MEM_READ;
        logic REG_WRITE;
        logic [31:0] MEM_DATA;
        logic [1:0] RF_MUX_SEL;
        logic [4:0] DEST_REG;
        logic [31:0] DEST_REG_DATA;
        logic ERR;
        logic [31:0] DIN2;
        logic JUMP;
        logic BRANCH;
        logic [2:0] BR_TYPE;
        logic [1:0] PC_SEL;

    } pipeline_reg_t;

    pipeline_reg_t FE_DE, DE_EX, EX_MEM, MEM_WB;


    logic [31:0] ir;
    logic [31:0] pc_in;
    logic [31:0] pc_out; // pc out
    logic [31:0] nextpc;
    logic [1:0] pc_sel_final;
    always_comb begin
        nextpc = pc_out + 4;
        pc_sel_final = EX_MEM.PC_SEL;
        if(flush) begin
            pc_sel_final = 2'b00;
            nextpc = EX_MEM.PC+4;
        end
    end

    logic [31:0] u_type;
    logic [31:0] i_type;
    logic [31:0] s_type;
    logic [31:0] b_type;
    logic [31:0] j_type;

    logic [31:0] rs1, rs2;
    logic [1:0] pc_sel;
    logic src_a_sel;
    logic [1:0] src_b_sel;
    logic [3:0] alu_ctrl;
    logic regwrite;
    logic memwrite;
    logic memread;
    logic [1:0] rf_sel;
    logic [2:0] imm_sel;
    logic [31:0] imm;
    logic branch;
    logic jump;
    logic [2:0] br_type;
    logic branch_taken;

    logic [31:0] src_a_out;
    logic [31:0] src_b_out;
    logic [31:0] alu_result;

    logic [31:0] memout;
    logic memerr;
    logic zero;

    logic [31:0] fwd_a_out, fwd_b_out;
    logic [1:0] fwd_a_sel, fwd_b_sel;

    logic [1:0] rf_mux_sel;
    assign rf_mux_sel = MEM_WB.RF_MUX_SEL;
    logic [31:0] rf_nextPC;
    assign rf_nextPC = MEM_WB.NEXT_PC;
    logic [31:0] rf_alu_result;
    assign rf_alu_result = MEM_WB.ALU_RESULT;
    logic [31:0] rf_rd;
    assign rf_rd = MEM_WB.DEST_REG_DATA;

    logic [1:0] sw_sel;
    logic [31:0] din2;

    logic stall;
    logic flush;
    logic stall_mem_read;
    logic stall_mem_write;

    logic [31:0] jalr_addr, jal_addr, branch_addr;
    
    always_ff @ (posedge CLK) begin

        if (RST) begin
            FE_DE <= 'b0;
            EX_MEM <= 'b0;
            MEM_WB <= 'b0;
        end
        else if (branch_taken) begin
            FE_DE.IR <= 32'h00000013;  // NOP (ADDI x0, x0, 0)
            FE_DE.PC <= 0;
            FE_DE.NEXT_PC <= 0;
            EX_MEM.IR <= DE_EX.IR;
            EX_MEM.PC <= DE_EX.PC;
            EX_MEM.NEXT_PC <= DE_EX.NEXT_PC;
            EX_MEM.ALU_RESULT <= alu_result;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL; 
            EX_MEM.REG_WRITE <= DE_EX.REG_WRITE;
            EX_MEM.MEM_WRITE <= DE_EX.MEM_WRITE;
            EX_MEM.MEM_READ <= DE_EX.MEM_READ;
            EX_MEM.RF_MUX_SEL <= DE_EX.RF_MUX_SEL;
            EX_MEM.ALU_CTRL <= DE_EX.ALU_CTRL;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL;
            EX_MEM.RS1 <= DE_EX.RS1;
            EX_MEM.RS2 <= DE_EX.RS2;
            EX_MEM.DEST_REG <= DE_EX.DEST_REG;
            //EX_MEM.DIN2 <= din2;
            EX_MEM.PC_SEL <= DE_EX.PC_SEL;

            MEM_WB.PC <= EX_MEM.PC;
            MEM_WB.NEXT_PC <= EX_MEM.NEXT_PC;
            MEM_WB.ERR <= memerr;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
            MEM_WB.REG_WRITE <= EX_MEM.REG_WRITE;
            MEM_WB.MEM_WRITE <= EX_MEM.MEM_WRITE;
            MEM_WB.MEM_READ <= EX_MEM.MEM_READ;
            MEM_WB.RF_MUX_SEL <= EX_MEM.RF_MUX_SEL;
            MEM_WB.ALU_CTRL <= EX_MEM.ALU_CTRL;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
            MEM_WB.RS1 <= EX_MEM.RS1;
            MEM_WB.RS2 <= EX_MEM.RS2;
            MEM_WB.DEST_REG <= EX_MEM.DEST_REG;
            MEM_WB.ALU_RESULT <= EX_MEM.ALU_RESULT;
            branch_addr <= BRANCH;
        end
        else if(stall) begin
            FE_DE.IR <= FE_DE.IR;
            FE_DE.PC <= FE_DE.PC;
            FE_DE.NEXT_PC <= nextpc;

            EX_MEM.IR <= DE_EX.IR;
            EX_MEM.PC <= DE_EX.PC;
            EX_MEM.NEXT_PC <= DE_EX.NEXT_PC;
            EX_MEM.ALU_RESULT <= alu_result;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL; 
            EX_MEM.REG_WRITE <= DE_EX.REG_WRITE;
            EX_MEM.MEM_WRITE <= DE_EX.MEM_WRITE;
            EX_MEM.MEM_READ <= DE_EX.MEM_READ;
            EX_MEM.RF_MUX_SEL <= DE_EX.RF_MUX_SEL;
            EX_MEM.ALU_CTRL <= DE_EX.ALU_CTRL;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL;
            EX_MEM.RS1 <= DE_EX.RS1;
            EX_MEM.RS2 <= DE_EX.RS2;
            EX_MEM.DEST_REG <= DE_EX.DEST_REG;
            //EX_MEM.DIN2 <= din2;
            EX_MEM.PC_SEL <= DE_EX.PC_SEL;

            MEM_WB.PC <= EX_MEM.PC;
            MEM_WB.NEXT_PC <= EX_MEM.NEXT_PC;
            MEM_WB.ERR <= memerr;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
            MEM_WB.REG_WRITE <= EX_MEM.REG_WRITE;
            MEM_WB.MEM_WRITE <= EX_MEM.MEM_WRITE;
            MEM_WB.MEM_READ <= EX_MEM.MEM_READ;
            MEM_WB.RF_MUX_SEL <= EX_MEM.RF_MUX_SEL;
            MEM_WB.ALU_CTRL <= EX_MEM.ALU_CTRL;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
            MEM_WB.RS1 <= EX_MEM.RS1;
            MEM_WB.RS2 <= EX_MEM.RS2;
            MEM_WB.DEST_REG <= EX_MEM.DEST_REG;
            MEM_WB.ALU_RESULT <= EX_MEM.ALU_RESULT;
        end
        
        else begin
            jalr_addr <= JALR;
            jal_addr <= JAL;
            branch_addr <= BRANCH;
            FE_DE.IR <= ir;
            FE_DE.PC <= pc_out;
            FE_DE.NEXT_PC <= nextpc;

            EX_MEM.IR <= DE_EX.IR;
            EX_MEM.PC <= DE_EX.PC;
            EX_MEM.NEXT_PC <= DE_EX.NEXT_PC;
            EX_MEM.ALU_RESULT <= alu_result;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL; 
            EX_MEM.REG_WRITE <= DE_EX.REG_WRITE;
            EX_MEM.MEM_WRITE <= DE_EX.MEM_WRITE;
            EX_MEM.MEM_READ <= DE_EX.MEM_READ;
            EX_MEM.RF_MUX_SEL <= DE_EX.RF_MUX_SEL;
            EX_MEM.ALU_CTRL <= DE_EX.ALU_CTRL;
            EX_MEM.SRC_A_SEL <= DE_EX.SRC_A_SEL; 
            EX_MEM.SRC_B_SEL <= DE_EX.SRC_B_SEL;
            EX_MEM.RS1 <= DE_EX.RS1;
            EX_MEM.RS2 <= DE_EX.RS2;
            EX_MEM.DEST_REG <= DE_EX.DEST_REG;
            EX_MEM.BRANCH <= DE_EX.BRANCH;
            EX_MEM.BR_TYPE <= DE_EX.BR_TYPE;
            EX_MEM.JUMP <= DE_EX.JUMP;
            EX_MEM.PC_SEL <= DE_EX.PC_SEL;
            //EX_MEM.DIN2 <= din2;


            MEM_WB.PC <= EX_MEM.PC;
            MEM_WB.NEXT_PC <= EX_MEM.NEXT_PC;
            MEM_WB.ERR <= memerr;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
            MEM_WB.REG_WRITE <= EX_MEM.REG_WRITE;
            MEM_WB.MEM_WRITE <= EX_MEM.MEM_WRITE;
            MEM_WB.MEM_READ <= EX_MEM.MEM_READ;
            MEM_WB.RF_MUX_SEL <= EX_MEM.RF_MUX_SEL;
            MEM_WB.ALU_CTRL <= EX_MEM.ALU_CTRL;
            MEM_WB.SRC_A_SEL <= EX_MEM.SRC_A_SEL; 
            MEM_WB.SRC_B_SEL <= EX_MEM.SRC_B_SEL;
            MEM_WB.RS1 <= EX_MEM.RS1;
            MEM_WB.RS2 <= EX_MEM.RS2;
            MEM_WB.DEST_REG <= EX_MEM.DEST_REG;
            MEM_WB.ALU_RESULT <= EX_MEM.ALU_RESULT;
            stall_mem_read <= memread;
            stall_mem_write <= memwrite;

            MEM_WB.BRANCH <= EX_MEM.BRANCH;
            MEM_WB.BR_TYPE <= EX_MEM.BR_TYPE;
            MEM_WB.JUMP <= EX_MEM.JUMP;
        end
    end

    always_ff@(negedge CLK) begin
        if (RST) begin
            DE_EX <= 'b0;
        end
        else if(stall)begin
            DE_EX.IR <= 32'h00000013;
            DE_EX.PC <= DE_EX.PC;
            DE_EX.NEXT_PC <= DE_EX.NEXT_PC;
            DE_EX.SRC_A_SEL <= 1'b0;
            DE_EX.SRC_B_SEL <= 2'b00;
            DE_EX.REG_WRITE <= 1'b0;
            DE_EX.MEM_WRITE <= 1'b0;
            DE_EX.MEM_READ <= 1'b0;
            DE_EX.RF_MUX_SEL <= rf_sel;
            DE_EX.ALU_CTRL <= alu_ctrl;
            DE_EX.SRC_A_SEL <= src_a_sel;
            DE_EX.SRC_B_SEL <= src_b_sel;
            DE_EX.RS1 <= 32'h0000_0000;
            DE_EX.RS2 <= 32'h0000_0000;
            DE_EX.DEST_REG <= 5'b00000;
            DE_EX.IMM <= 32'h0000_0000;
            DE_EX.BR_TYPE <= 3'b000;
            DE_EX.BRANCH <= 1'b0;
            DE_EX.JUMP <= 1'b0;
            DE_EX.PC_SEL <= 2'b00;
        end
        else if (branch_taken) begin
            DE_EX.IR <= FE_DE.IR;
            DE_EX.PC <= FE_DE.PC;
            DE_EX.NEXT_PC <= FE_DE.PC;
            DE_EX.SRC_A_SEL <= src_a_sel;
            DE_EX.SRC_B_SEL <= src_b_sel;
            DE_EX.REG_WRITE <= regwrite;
            DE_EX.MEM_WRITE <= memwrite;
            DE_EX.MEM_READ <= memread;
            DE_EX.RF_MUX_SEL <= rf_sel;
            DE_EX.ALU_CTRL <= alu_ctrl;
            DE_EX.SRC_A_SEL <= src_a_sel;
            DE_EX.SRC_B_SEL <= src_b_sel;
            DE_EX.BRANCH <= branch;
            DE_EX.BR_TYPE <= br_type;
            DE_EX.JUMP <= jump;
            DE_EX.RS1 <= rs1;
            DE_EX.RS2 <= rs2;
            DE_EX.DEST_REG <= FE_DE.IR[11:7];
            DE_EX.IMM <= imm;
            DE_EX.PC_SEL <= 2'b00;
        end
        else begin
            DE_EX.IR <= FE_DE.IR;
            DE_EX.PC <= FE_DE.PC;
            DE_EX.NEXT_PC <= FE_DE.NEXT_PC;
            DE_EX.SRC_A_SEL <= src_a_sel;
            DE_EX.SRC_B_SEL <= src_b_sel;
            DE_EX.REG_WRITE <= regwrite;
            DE_EX.MEM_WRITE <= memwrite;
            DE_EX.MEM_READ <= memread;
            DE_EX.RF_MUX_SEL <= rf_sel;
            DE_EX.ALU_CTRL <= alu_ctrl;
            DE_EX.SRC_A_SEL <= src_a_sel;
            DE_EX.SRC_B_SEL <= src_b_sel;
            DE_EX.BRANCH <= branch;
            DE_EX.BR_TYPE <= br_type;
            DE_EX.JUMP <= jump;
            DE_EX.RS1 <= rs1;
            DE_EX.RS2 <= rs2;
            DE_EX.DEST_REG <= FE_DE.IR[11:7];
            DE_EX.IMM <= imm;
            DE_EX.PC_SEL <= pc_sel;
        end
    end

    logic [31:0] reg_result;

    always_ff@(posedge CLK) begin
        reg_result <= MEM_WB.ALU_RESULT;
    end

    MUX4T1 SW_MUX(
        .SEL(sw_sel),
        .D0(DE_EX.RS2),
        .D1(fwd_b_out),
        .D2(reg_result),
        .D3(MEM_WB.ALU_RESULT),
        .DOUT(din2)
    );
    
    DUALPORT_MEM OTTER_MEM(
        .MEM_ADDR1(pc_out),                 // ADDRESS OF INSTRUCTION
        .MEM_ADDR2(EX_MEM.ALU_RESULT),  // RESULT OF ALU
        .MEM_CLK(CLK),                  // CLK
        .MEM_DIN2(din2),          // **WILL NEED TO CHANGE FOR HAZARDS
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
        .REG_ADDR1(FE_DE.IR[19:15]),
        .REG_ADDR2(FE_DE.IR[24:20]),
        .WRITE_EN(MEM_WB.REG_WRITE),
        .WRITE_ADDR(MEM_WB.DEST_REG),
        .WRITE_DATA(rf_rd),
        .REG_1_DATA(rs1),
        .REG_2_DATA(rs2)
    
    );

    logic [31:0] JAL, JALR, BRANCH;

    assign JAL = DE_EX.PC + DE_EX.IMM;
    assign JALR = (DE_EX.IMM + fwd_a_out) & ~1;
    assign BRANCH = DE_EX.PC + DE_EX.IMM;

    MUX4T1 PC_MUX(

        .SEL(pc_sel_final),
        .D0(nextpc),
        .D1(branch_addr),
        .D2(jal_addr),
        .D3(jalr_addr),
        .DOUT(pc_in)

    );



    PC OTTER_PC(

        .CLK(CLK),
        .RST(RST),
        .PC_EN(!stall), // IN THE FUTURE CHANGE TO FLUSH OR STALL
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
        .PC_SRC(pc_sel),
        .IMM_SEL(imm_sel),
        .BRANCH(branch),
        .BR_TYPE(br_type),
        .JUMP(jump)

    );
    
    

    IMMED_GEN OTTER_IG(

        .IR(FE_DE.IR[31:7]),
        .IMM_SEL(imm_sel),
        .IMM(imm)

    );

    

    

    HAZ_UNIT OTTER_HU (
        .IR(FE_DE.IR),
        .RD_M(EX_MEM.DEST_REG),
        .RD_W(MEM_WB.DEST_REG),
        .RS1(FE_DE.IR[19:15]),
        .RS2(FE_DE.IR[24:20]),
        .MEM_READ_EX(stall_mem_read),
        .MEM_READ_WB(MEM_WB.MEM_READ),
        .MEM_WRITE_DE(memwrite), // logic stall_mem_write
        .MEM_WRITE_EX(EX_MEM.MEM_WRITE),
        .FWD_A_SEL(fwd_a_sel),
        .FWD_B_SEL(fwd_b_sel),
        .JUMP(DE_EX.JUMP),
        .BRANCH(DE_EX.BRANCH),
        .BRANCH_ARG1(fwd_a_out),
        .BRANCH_ARG2(fwd_b_out),
        .BRANCH_TYPE(DE_EX.BR_TYPE),
        .BRANCH_TAKEN(branch_taken),
        .SW_SEL(sw_sel),
        .STALL(stall),
        .FLUSH(flush)
    );


    MUX4T1 FWD_A_MUX(
        .SEL(fwd_a_sel),
        .D0(src_a_out),
        .D1(EX_MEM.ALU_RESULT),
        .D2(MEM_WB.ALU_RESULT),
        .D3(memout),
        .DOUT(fwd_a_out)
    );

    MUX4T1 FWD_B_MUX(
        .SEL(fwd_b_sel),
        .D0(src_b_out),
        .D1(EX_MEM.ALU_RESULT),
        .D2(MEM_WB.ALU_RESULT),
        .D3(memout),
        .DOUT(fwd_b_out)
    );
    

    MUX2T1 SRC_A_MUX(

        .SEL(DE_EX.SRC_A_SEL),
        .D0(DE_EX.RS1),
        .D1(DE_EX.IMM),
        .DOUT(src_a_out)

    );


    MUX4T1 SRC_B_MUX(

        .SEL(DE_EX.SRC_B_SEL),
        .D0(DE_EX.RS2),
        .D1(DE_EX.IMM),
        .D2(DE_EX.PC),
        .D3(32'h0000_0000),
        .DOUT(src_b_out)

    );


    ALU OTTER_ALU(

        .SRC_A(fwd_a_out),
        .SRC_B(fwd_b_out),
        .ALU_CTRL(DE_EX.ALU_CTRL),
        .RESULT(alu_result),
        .ZERO(zero)

    );

    
    MUX4T1 RF_MUX(

        .SEL(rf_mux_sel),
        .D0(rf_nextPC),
        .D1(32'h0000_0000),
        .D2(memout),
        .D3(rf_alu_result),
        .DOUT(rf_rd)

    );



    



endmodule


`timescale 1ns / 1ps

module CTRL_UNIT(

    input logic [6:0] OPCODE,        // ir[6:0]
    input logic [2:0] FUNC3,         // ir[14:12]
    input logic FUNC7,         // ir[30]
    output logic REG_WRITE,
    output logic MEM_WRITE,
    output logic MEM_READ2,
    //output logic BRANCH,
    //output logic JUMP,
    output logic [1:0] RF_SEL,
    output logic [3:0] ALU_FUN,
    output logic ALU_SRCA,
    output logic [1:0] ALU_SRCB,       
    output logic [2:0] PC_SRC,
    output logic [2:0] IMM_SEL
);

    always_comb begin
        // Default all outputs
        ALU_FUN    = 4'b0000;
        ALU_SRCA   = 1'b0;
        ALU_SRCB   = 2'b00;
        REG_WRITE  = 1'b0;
        MEM_WRITE  = 1'b0;
        MEM_READ2  = 1'b0;
        RF_SEL     = 2'b00;
        IMM_SEL    = 3'b00;

        case (OPCODE)

            7'b0100011: begin // Store
                ALU_SRCB   = 2'b10;   // S-type offset
                MEM_WRITE  = 1'b1;
                IMM_SEL    = 3'b001;
            end

            7'b0000011: begin // Load
                ALU_SRCB   = 2'b01;   // I-type offset
                RF_SEL     = 2'b10;   // Mem -> reg
                MEM_READ2  = 1'b1;
                REG_WRITE  = 1'b1;
                IMM_SEL    = 3'b000;
            end

            7'b0110111: begin // LUI
                ALU_FUN    = 4'b1001;
                ALU_SRCA   = 1'b1;
                ALU_SRCB   = 2'b01;   // U-type
                RF_SEL     = 2'b11;
                REG_WRITE  = 1'b1;
                IMM_SEL    = 3'b011;

            end

            7'b0010111: begin // AUIPC
                ALU_FUN    = 4'b0000;
                ALU_SRCA   = 1'b1;
                ALU_SRCB   = 2'b01;
                RF_SEL     = 2'b11;
                REG_WRITE  = 1'b1;
                IMM_SEL    = 3'b011;
            end

            7'b0010011: begin // I-Type ALU ops
                ALU_SRCB   = 2'b01;
                RF_SEL     = 2'b11;
                REG_WRITE  = 1'b1;
                IMM_SEL    = 3'b000;
                case (FUNC3)
                    3'b000: ALU_FUN = 4'b0000;  // ADDI
                    3'b001: ALU_FUN = 4'b0001;  // SLLI
                    3'b010: ALU_FUN = 4'b0010;  // SLTI
                    3'b011: ALU_FUN = 4'b0011;  // SLTIU
                    3'b100: ALU_FUN = 4'b0100;  // XORI
                    3'b101: ALU_FUN = (FUNC7 == 1'b0) ? 4'b0101 : 4'b1101; // SRLI/SRAI
                    3'b110: ALU_FUN = 4'b0110;  // ORI
                    3'b111: ALU_FUN = 4'b0111;  // ANDI
                    default: ;
                endcase
            end

            7'b0110011: begin // R-Type ALU ops
                ALU_FUN    = {FUNC7, FUNC3};  
                ALU_SRCB   = 2'b00;
                RF_SEL     = 2'b11;
                REG_WRITE  = 1'b1;
            end

            /*
            7'b1100011: begin // Branch (B-type)
                BRANCH     = 1'b1;
                IMM_SEL    = 3'b010;
                case (FUNC3)
                    3'b000: BR_TYPE = 3'b000; // BEQ
                    3'b001: BR_TYPE = 3'b001; // BNE
                    3'b100: BR_TYPE = 3'b010; // BLT
                    3'b101: BR_TYPE = 3'b011; // BGE
                    3'b110: BR_TYPE = 3'b100; // BLTU
                    3'b111: BR_TYPE = 3'b101; // BGEU
                    default: BR_TYPE = 3'b000;
                endcase
            end

            7'b1101111: begin // JAL
                RF_SEL = 2'b00;        // PC + 4
                ALU_SRCB = 2'b11;      // PC
                ALU_SRCA = 1'b1;       // U-type imm unused
                REG_WRITE = 1'b1;
                JUMP = 1'b1;
                PC_SRC = 3'd2;
                IMM_SEL    = 3'b100;
            end
            7'b1100111: begin // JALR
                RF_SEL = 2'b00;
                ALU_SRCB = 2'b01;      // I-type imm
                ALU_SRCA = 1'b0;       // rs1
                REG_WRITE = 1'b1;
                JUMP = 1'b1;
                PC_SRC = 3'd3;
                IMM_SEL    = 3'b100;
            end 
            */
            default: ; // do nothing
        endcase
    end

endmodule


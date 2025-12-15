#pragma once

#include "inst.hpp"
#include "utils/utils.hpp"

// R-type instruction class
class InstructionR : public Instruction {
    public:
        uint16_t rd;
        uint16_t funct3;
        uint16_t rs1;
        uint16_t rs2;
        uint16_t funct7;

        InstructionR(uint32_t raw) : Instruction(raw) {
            rd = 0;
            funct3 = 0;
            rs1 = 0;
            rs2 = 0;
            funct7 = 0;
            opcode = 0;
        }
};
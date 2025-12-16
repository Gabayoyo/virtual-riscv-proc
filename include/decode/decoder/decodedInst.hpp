#pragma once

#include <cstdint>
#include "utils/utils.hpp"

// base class for decoded RISC-V instructions
class DecodedInst {
    public:
        virtual ~DecodedInst() = default;

    protected:
        // automatically extract opcode from raw bits
        DecodedInst(uint32_t bits) {
            opcode = utils::selectBits(bits, 0, 7);
        }
        uint32_t opcode;
};

class DecodedInstR : public DecodedInst {
    public:
        uint8_t rd;
        uint8_t funct3;
        uint8_t rs1;
        uint8_t rs2;
        uint8_t funct7;

        DecodedInstR(uint32_t raw) : DecodedInst(raw) {
            rd = utils::selectBits(raw, 7, 5);
            funct3 = utils::selectBits(raw, 12, 3);
            rs1 = utils::selectBits(raw, 15, 5);
            rs2 = utils::selectBits(raw, 20, 5);
            funct7 = utils::selectBits(raw, 25, 7);
        }
};
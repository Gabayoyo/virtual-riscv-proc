#pragma once

#include <cstdint>
#include <tuple>

// abstract base class for RISC-V instructions
class Instruction {
    public:
        virtual ~Instruction() = default;

        Instruction(uint32_t bits) : raw(bits) {}
        uint32_t raw;
        uint16_t opcode;
};
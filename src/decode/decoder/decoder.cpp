#include "decode/decoder/decoder.hpp"
#include <iostream>
#include <bitset>
using namespace std;

DecodedInst Decoder::decodeInstruction(uint32_t rawInstruction) {
    uint8_t opcode = utils::selectBits(rawInstruction, 0, 7);
    switch (opcode) {
        case 0b0110011: { // R-type instruction
            DecodedInstR decodedR(rawInstruction);
            return decodedR;
        }
        
        default:
            throw runtime_error("Unsupported opcode: " + to_string(opcode));
    }
}
#include "decode/decoder/decoder.hpp"
#include <iostream>

DecodedInst Decoder::decodeInstruction(uint32_t rawInstruction) {
    // R-type instruction decoded via constructor
    return DecodedInstR(rawInstruction);
}
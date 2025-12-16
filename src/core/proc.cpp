#include <iostream>
using namespace std;

#include "decode/regfile/regfile.hpp"
#include "decode/decoder/decodedInst.hpp"
#include "instTranslator/RISCop.hpp"
#include "instTranslator/instTranslator.hpp"
#include "utils/utils.hpp"
#include "decode/decoder/decoder.hpp"

int main() {

    Regfile rf;
    RISCop op("ADDI x2, x2, x4");
    InstTranslator translator;
    uint32_t inst32 = translator.instTo32Bit(op);
    Decoder decoder;
    DecodedInst decodedInst = decoder.decodeInstruction(inst32);
    return 0;
}
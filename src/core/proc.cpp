#include <iostream>
using namespace std;

#include "decode/regfile/regfile.hpp"
#include "instTranslator/RISCop.hpp"
#include "instTranslator/instTranslator.hpp"

int main() {

    Regfile rf;
    RISCop op("ADD x2, x1, x3");
    InstTranslator translator;
    uint32_t inst32 = translator.instTo32Bit(op);
    rf.write(2, 42);
    rf.printReg(2);
    return 0;
}
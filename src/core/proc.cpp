#include <iostream>
using namespace std;

#include "decode/regfile/regfile.hpp"
#include "decode/decoder/instR.hpp"

int main() {

    Regfile rf;
    InstructionR instr(0b00000000000000000000000000000011); // Example R-type instruction
    cout << "Opcode: " << dec << instr.opcode << endl;
    rf.write(2, 42);
    rf.printReg(2);
    return 0;
}
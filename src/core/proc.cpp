#include <iostream>
using namespace std;

#include "decode/regfile/regfile.hpp"
#include "decode/decoder/instR.hpp"
#include "translator/RISCop.hpp"

int main() {

    Regfile rf;
    RISCop op("ADD x2, x1, x3");
    rf.write(2, 42);
    rf.printReg(2);
    return 0;
}
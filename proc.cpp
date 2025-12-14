#include <iostream>
using namespace std;

#include "regfile/regfile.hpp"

int main() {

    Regfile rf;
    rf.write(1, 42);
    rf.printReg(1);
    return 0;
}
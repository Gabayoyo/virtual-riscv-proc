#include <iostream>
using namespace std;

#include "regfile/regfile.hpp"

int main() {

    Regfile rf;
    rf.write(2, 42);
    rf.printReg(2);
    return 0;
}
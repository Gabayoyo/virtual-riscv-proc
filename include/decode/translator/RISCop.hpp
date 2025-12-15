#pragma once
#include <string>
using namespace std;

class RISCop {
    public:
        string op;
        uint8_t rd;
        uint8_t rs1;
        uint8_t rs2;
        int32_t imm;
};
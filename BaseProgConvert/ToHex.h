#pragma once
#include "Converter.h"
#include <map>
using namespace std;

class ToHex : public Converter {
private:
    map<int, string> extraDigit{
        {10, "A"},
        {11, "B"},
        {12, "C"},
        {13, "D"},
        {14, "E"},
        {15, "F"}
    };

public:
    string convert(int input);
    ToHex();
};
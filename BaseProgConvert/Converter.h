#pragma once
#include <string>
#include <stack>
using namespace std;

class Converter {
protected:
    int resultBase;

public:
    string convert(int input);
    Converter(int inResultBase);
};
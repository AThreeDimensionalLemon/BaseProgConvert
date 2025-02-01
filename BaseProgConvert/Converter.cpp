#include "Converter.h"
#include <cmath>
using namespace std;

string Converter::convert(int input) {
    string result;
    stack<int> resultDigits;

    //Convert number
    while (input > 0) {
        resultDigits.push(input % resultBase);
        input = floor(input / resultBase);
    }

    //Rebuild number
    while (resultDigits.size() > 0) {
        result += to_string(resultDigits.top());
        resultDigits.pop();
    }

    return result;
}

Converter::Converter(int inResultBase) {
    Converter::resultBase = inResultBase;
}
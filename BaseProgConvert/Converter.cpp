#include "Converter.h"
#include <queue>
#include <cmath>
using namespace std;

int Converter::convert(int input) {
    queue<int> resultDigits;
    int result = 0;

    //Convert number
    while (input > 0) {
        resultDigits.push(input % resultBase);
        input = floor(input / resultBase);
    }

    //Rebuild number
    int place = 1;
    while (resultDigits.size() > 0) {
        result += resultDigits.front() * place;
        resultDigits.pop();
        place *= 10;
    }

    return result;
}

Converter::Converter(int inResultBase) {
    Converter::resultBase = inResultBase;
}
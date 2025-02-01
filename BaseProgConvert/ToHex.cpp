#include "ToHex.h"

string ToHex::convert(int input) {
    string result;
    stack<int> resultDigits;

    //Convert number
    while (input > 0) {
        resultDigits.push(input % resultBase);
        input = floor(input / resultBase);
    }

    //Rebuild number
    while (resultDigits.size() > 0) {

        if (resultDigits.top() > 9)
            result += extraDigit[resultDigits.top()];

        else
            result += to_string(resultDigits.top());

        resultDigits.pop();
    }

    return result;
}

ToHex::ToHex() :
    Converter(16) {
}
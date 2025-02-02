#include <iostream>
#include "ToBinary.h"
#include "ToOctal.h"
#include "ToHex.h"
using namespace std;

int main() {
    cout << "Eisig Liang - 2 Feb. 2025\n\n";

    //Object construction
    ToBinary binary;
    ToOctal octal;
    ToHex hexa;

    while (true) {
        int value = 0;
        cout << "Decimal value: ";
        cin >> value;
        cout << "Binary value: " << binary.convert(value) << endl;
        cout << "Octal value: " << octal.convert(value) << endl;
        cout << "Hexadecimal value: " << hexa.convert(value) << endl << endl;
    }
}
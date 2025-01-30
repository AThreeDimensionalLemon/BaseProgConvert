#include <iostream>
#include "ToBinary.h"
#include "ToOctal.h"
#include "ToHex.h"
using namespace std;

int main() {
    cout << "Eisig Liang - 2 Feb. 2025\n\n";

    //Object construction
    ToBinary binary;
    //ToOctal octal;
    //ToHex hexa;

    //Binary conversion
    cout << "Testing binary conversion\n----------------\n";
    cout << "17 -> " << binary.convert(17) << endl;
    cout << "82 -> " << binary.convert(82) << endl;
    cout << "45 -> " << binary.convert(45) << endl << endl;

    //Octal convertion
    //cout << "Testing octal conversion\n----------------\n";
    //cout << "3 -> " << octal.convert(3) << endl;
    //cout << "69 -> " << octal.convert(69) << endl;
    //cout << "24 -> " << octal.convert(24) << endl << endl;

    //Hex convertion
    //cout << "Testing hex conversion\n----------------\n";
    //cout << "91 -> " << hexa.convert(91) << endl;
    //cout << "56 -> " << hexa.convert(56) << endl;
    //cout << "38 -> " << hexa.convert(38) << endl;
}
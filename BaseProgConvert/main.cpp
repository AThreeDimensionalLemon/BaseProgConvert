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

    //Binary conversion
    cout << "Testing binary conversion\n----------------\n";
    cout << "26 -> " << binary.convert(26) << endl;
    cout << "43 -> " << binary.convert(43) << endl;
    cout << "45 -> " << binary.convert(57) << endl << endl;

    //Octal convertion
    cout << "Testing octal conversion\n----------------\n";
    cout << "26 -> " << octal.convert(26) << endl;
    cout << "42 -> " << octal.convert(42) << endl;
    cout << "57 -> " << octal.convert(57) << endl << endl;

    //Hex convertion
    cout << "Testing hex conversion\n----------------\n";
    cout << "26 -> " << hexa.convert(26) << endl;
    cout << "47 -> " << hexa.convert(47) << endl;
    cout << "183 -> " << hexa.convert(183) << endl;
}
#pragma once

class Converter {
private:
    int resultBase;

public:
    int convert(int input);
    Converter(int inResultBase);
};
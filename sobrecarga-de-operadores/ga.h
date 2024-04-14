#pragma once
#include <iostream>

class Vetor{
private:

public:
    int x;
    int y;
    int z;
    Vetor(int a = 0, int b = 0, int c = 0);
    ~Vetor(){};
    Vetor operator+(Vetor a);

};

std::ostream& operator<<(std::ostream& saida, Vetor a);
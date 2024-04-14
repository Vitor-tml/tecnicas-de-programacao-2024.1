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

template <typename TipoGenerico>
float determinante(TipoGenerico a, TipoGenerico b, TipoGenerico c)
{
    float det;
    // Calcula o determinante usando a regra de Sarrus
    det += a.x * b.y * c.z;
    det += a.y * b.z * c.x;
    det += a.z * b.x * c.y;
    det -= a.z * b.y * c.x;
    det -= a.x * b.z * c.y;
    det -= a.y * b.x * c.z;
    return det;
}
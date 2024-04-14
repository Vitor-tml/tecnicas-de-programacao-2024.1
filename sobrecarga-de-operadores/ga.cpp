#include "ga.h"

// Métodos:
Vetor::Vetor(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

// Operadores
Vetor Vetor::operator+(Vetor n)
{
    Vetor a;
    a.x = x + n.x;
    a.y = y + n.y;
    a.z = z + n.z;
    return a;
}

std::ostream& operator<<(std::ostream& saida, Vetor a)
{
    saida << "x = " << a.x<< " y = " << a.y << " z = " << a.z;
    return saida;
}
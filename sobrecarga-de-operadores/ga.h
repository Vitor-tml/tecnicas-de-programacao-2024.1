#pragma once
#include <iostream>

// Métodos de classe template tem que ser no .h

//Definição de classe
template <typename T>
class Vetor{
private:

public:
    T x;
    T y;
    T z;
    Vetor(T a = 0, T b = 0, T c = 0);
    ~Vetor(){};
    Vetor operator+(Vetor a);

};

// Operadores
template <typename TipoGenerico>
std::ostream& operator<<(std::ostream& saida, Vetor<TipoGenerico> a);

template <typename T>
std::ostream& operator<<(std::ostream& saida, Vetor<T> a)
{
    saida << "x = " << a.x<< " y = " << a.y << " z = " << a.z;
    return saida;
}

// Métodos
template <typename T>
Vetor<T>::Vetor(T a, T b, T c)
{
    x = a;
    y = b;
    z = c;
}

// Operadores
template <typename T>
Vetor<T> Vetor<T>::operator+(Vetor<T> n)
{
    Vetor a;
    a.x = x + n.x;
    a.y = y + n.y;
    a.z = z + n.z;
    return a;
}

// Funções
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
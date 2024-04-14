#include <iostream>
using namespace std;
#include "ga.h"

int main()
{
    Vetor a(1, 9, 5);
    Vetor b(3, 7, 8);
    Vetor c(10, 4, 2);
    
    cout << determinante(a, b, c) << endl;
}


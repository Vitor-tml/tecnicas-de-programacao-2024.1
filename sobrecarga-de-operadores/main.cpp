#include <iostream>
using namespace std;
#include "ga.h"

int main()
{
    Vetor<int> a(1, 9, 5);
    Vetor<int> b(3, 7, 8);
    Vetor<int> c(10, 4, 2);
    
    cout << determinante(a, b, c) << endl;
}


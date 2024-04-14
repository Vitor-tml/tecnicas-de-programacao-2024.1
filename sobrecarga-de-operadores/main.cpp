#include <iostream>
using namespace std;
#include "ga.h"

int main()
{
    Vetor a(1, 1, 1);
    Vetor b(1, 2, 3);
    Vetor c = a + b;
    
    cout << c << endl;
}


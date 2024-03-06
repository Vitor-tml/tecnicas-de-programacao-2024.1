#include <iostream>
#include "Pessoa.h"

int main()
{
    Pessoa einstein(14, 3, 1879, "Alberto Einsten");
    Pessoa newton(4, 1, 1643, "Isaqueh Newton");

    einstein.calculaIdade(1, 1, 2024);
    newton.calculaIdade(1, 1, 2024);

    printf("Einsten tem %d anos.\n", einstein.getIdade());
    printf("Newton tem %d anos.\n", newton.getIdade());
}
#include <iostream>
#include "Principal.h"
#include "persistencia.h"

int main()
{
    // Principal main;
    // main.executar();
    // return 0;    


    // Testes de persistência de objetos e static
    Liquido coca;
    Liquido agua;
    Garrafa termica;
    Garrafa pet;

    coca.recupera();
    termica.recupera();

    termica.informaGarrafa();
}
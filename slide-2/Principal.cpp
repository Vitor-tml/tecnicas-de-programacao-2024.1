#include "Principal.h"
#include <iostream>

Principal::Principal():
vitor(31, 8, 2004, "Capivara")
{
    //vitor.inicializa(31, 8, 2004, "Capivara");
    einsten.inicializa(14, 3, 1879, "Alberto Einsten");
    newton.inicializa(4, 1, 1643, "Isaqueh Newton");
}

Principal::~Principal()
{
    std::cout << "Bye bye" << std::endl;
}
void Principal::executar()
{
    vitor.calculaIdade(diaAtual, mesAtual, anoAtual);
    vitor.informaIdade();
    einsten.calculaIdade(diaAtual, mesAtual, anoAtual);
    einsten.informaIdade();
    newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    newton.informaIdade();
}
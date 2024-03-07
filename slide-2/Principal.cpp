#include "Principal.h"

Principal::Principal()
{
    vitor.inicializa(31, 8, 2004, "Capivara");
    einsten.inicializa(14, 3, 1879, "Alberto Einsten");
    newton.inicializa(4, 1, 1643, "Isaqueh Newton");
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
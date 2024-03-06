#include <stdio.h>
#define ANOATUAL 2024
#define MESATUAL 3
#define DIAATUAL 5

typedef struct{
    int ano;
    int mes;
    int dia;
    int idade;
}PESSOA;

int calculaIdade(PESSOA fulano, int anoAtual);

int main()
{
    PESSOA einstein, newton;

    einstein.dia = 14;
    einstein.mes = 3;
    einstein.ano = 1879;

    newton.dia = 4;
    newton.mes = 1;
    newton.ano = 1643;

    einstein.idade = calculaIdade(einstein, ANOATUAL);
    newton.idade = calculaIdade(newton, ANOATUAL);

    printf("Idade de Einstein: %d\n", einstein.idade);
    printf("Idade de Newton: %d\n", newton.idade);
}

int calculaIdade(PESSOA fulano, int anoAtual)
{
    return anoAtual - fulano.ano;
}
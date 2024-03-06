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

void calculaIdade(PESSOA *fulano, int anoAtual, int mesAtual, int diaAtual);

int main()
{
    PESSOA einstein, newton;

    einstein.dia = 14;
    einstein.mes = 3;
    einstein.ano = 1879;

    newton.dia = 4;
    newton.mes = 1;
    newton.ano = 1643;

    calculaIdade(&einstein, ANOATUAL, MESATUAL, DIAATUAL);
    calculaIdade(&newton, ANOATUAL, MESATUAL, DIAATUAL);

    printf("Idade de Einstein: %d\n", einstein.idade);
    printf("Idade de Newton: %d\n", newton.idade);
}

void calculaIdade(PESSOA *fulano, int anoAtual, int mesAtual, int diaAtual)
{
    fulano->idade = anoAtual - fulano->ano;

    if(fulano->mes > mesAtual)
        fulano->idade--;
    else
        if(fulano->mes == mesAtual && fulano->dia > diaAtual)
            fulano->idade--;
}
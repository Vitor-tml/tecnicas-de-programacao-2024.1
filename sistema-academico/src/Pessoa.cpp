#include "Pessoa.h"
#include <string.h>
#include <iostream>

Pessoa::Pessoa(int dia, int mes, int ano, const char *nome)
{
    inicializa(dia, mes, ano, nome);
}

Pessoa::~Pessoa()
{

}

void Pessoa::inicializa(int dia, int mes, int ano, const char *nome)
{
    diaPessoa = dia;
    mesPessoa = mes;
    anoPessoa = ano;
    strcpy(nomePessoa, nome);
    idadePessoa = -1;
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual)
{
    idadePessoa = anoAtual - anoPessoa;

    if(mesAtual < mesPessoa)
        idadePessoa--;
    else
        if(mesAtual == mesPessoa && diaPessoa > diaAtual)
            idadePessoa--;
}

void Pessoa::informaIdade()
{
    std::cout << nomePessoa << " tem " << idadePessoa << " anos." << std::endl; 
}

char* Pessoa::getNome()
{
    return nomePessoa;
}
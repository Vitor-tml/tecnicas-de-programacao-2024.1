#pragma once
#include "Universidade.h"
#include "Departamento.h"

class Pessoa
{
protected:
    int diaPessoa;
    int mesPessoa;
    int anoPessoa;
    int idadePessoa;
    char nomePessoa[30];
public:
    Pessoa(int dia = 0, int mes = 0, int ano = 0, const char *nome = "");
    ~Pessoa();
    void inicializa(int dia, int mes, int ano, const char *nome);
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    void informaIdade();
    char *getNome();
};
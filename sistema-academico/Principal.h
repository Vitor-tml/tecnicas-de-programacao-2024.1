#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Principal
{
private:
    Pessoa vitor;
    Pessoa einsten;
    Pessoa newton;

    Universidade utfpr;
    Universidade puc;
    Universidade positivo;

    Departamento dainf;

    int diaAtual = 1;
    int mesAtual = 1;
    int anoAtual = 2024;
public:
    Principal();
    ~Principal();
    void executar();
};
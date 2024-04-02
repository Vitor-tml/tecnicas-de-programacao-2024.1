#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Professor.h"
#include "Aluno.h"

class Principal
{
private:
    Aluno vitor;
    Professor einsten;
    Professor newton;

    Universidade utfpr;
    Universidade puc;
    Universidade positivo;

    Departamento dainf;
    Departamento damat;
    Departamento dafis;

    int diaAtual = 1;
    int mesAtual = 1;
    int anoAtual = 2024;
public:
    Principal();
    ~Principal();
    void executar();
};
#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Professor.h"
#include "Aluno.h"

// ERRO DO DESALOCAR:
// AO USAR UMA AUXILIAR ELE É DESALOCADO NO FINAL DA DESTRUTORA

class Principal
{
private:
    Universidade utfpr;
    Universidade puc;
    Universidade positivo;

    Aluno vitor;
    Professor einsten;
    Professor newton;


    int diaAtual = 1;
    int mesAtual = 1;
    int anoAtual = 2024;
public:
    Principal();
    ~Principal();
    void executar();
};
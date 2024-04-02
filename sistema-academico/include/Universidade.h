#pragma once
#include "Departamento.h"

class Universidade
{
private:
    char nomeUniversidade[50];
    Departamento *pDpto;
public:
    Universidade(const char *nome);
    Universidade();
    ~Universidade();
    void inicializa(const char *nome);
    void imprimeNome();
    char* getNome();
    void setDepartamento(const char *nomeDpto, const char *siglaDpto);
    void listaDepartamento();
};
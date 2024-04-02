#pragma once
//#include "Disciplina.h"

class Departamento
{
private:
    char siglaDepartamento[6];
    char nomeDepartamento[50];
    Departamento *prox;
    //Disciplina *pDisciplinas;
public:
    Departamento(const char *nome="", const char *sigla="");
    ~Departamento();
    char* getNome();
    void inicializa(const char *nome, const char *sigla);
    void setProximo(Departamento *p);
    Departamento* getProximo();
    //void setDisciplina(const char *nome, const char *codigo, Professor *pProf);
    void listaDisciplinas();
}; 
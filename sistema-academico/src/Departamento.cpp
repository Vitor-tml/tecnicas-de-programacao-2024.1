#include "Departamento.h"
#include <string.h>
#include <iostream>

Departamento::Departamento(const char *nome, const char *sigla)
{
    inicializa(nome, sigla);
    prox = NULL;
}

Departamento::~Departamento()
{
    
}

char* Departamento::getNome()
{
    return nomeDepartamento;
}

void Departamento::inicializa(const char *nome, const char *sigla)
{
    strcpy(nomeDepartamento, nome);
    strcpy(siglaDepartamento, sigla);
}

void Departamento::setProximo(Departamento *p)
{
    prox = p;
}

Departamento* Departamento::getProximo()
{
    return prox;
}

// void Departamento::setDisciplina(const char *nome, const char *codigo, Professor *pProf)
// {
//     Disciplina *aux = new Disciplina;
//     aux->inicializa(nome, codigo, pProf);
//     aux->setProx(pDisciplinas);
//     pDisciplinas = aux;
// }

// void Departamento::listaDisciplinas()
// {
//     Disciplina *aux = pDisciplinas;
//     while (aux != nullptr)
//     {
//         aux->informaDisciplina();
//         aux = aux->getProx();
//     }
// }
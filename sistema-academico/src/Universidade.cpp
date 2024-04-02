#include "Universidade.h"
#include <string.h>
#include <iostream>

Universidade::Universidade(const char *nome)
{
    inicializa(nome);
    pDpto = NULL;
}

Universidade::Universidade()
{
    inicializa("");
}
/*
    Quando chama a destrutora explícitamente funciona melhor, mas não 100%
    pode ter algo a ver com os departamentos serem destruidos primeiro?
    O único problema é na destrutora
*/
Universidade::~Universidade() 
{
    // Departamento *aux = pDpto;
    // Departamento *next;
    // while (aux != nullptr)
    // {
    //     std::cout<<"Destrutora:\n"<<aux->getNome()<<std::endl;
    //     next = aux->getProximo();
    //     delete aux;
    //     aux = next;
    // }
}


void Universidade::inicializa(const char *nome)
{
    strcpy(nomeUniversidade, nome);
}

void Universidade::imprimeNome()
{
    std::cout << nomeUniversidade << std::endl;    
}

char* Universidade::getNome()
{
    return nomeUniversidade;
}

void Universidade::setDepartamento(const char *nome, const char *sigla)
{
    Departamento *aux = new Departamento();
    aux->inicializa(nome, sigla);
    aux->setProximo(pDpto);
    pDpto = aux;
    
    // std::cout<<"Set: "<<aux->getNome()<<std::endl;
}

void Universidade::listaDepartamento()
{   
    Departamento *aux = pDpto;
    while(aux != nullptr)
    {
        std::cout << aux->getNome() << std::endl;
        aux = aux->getProximo();
    }
}
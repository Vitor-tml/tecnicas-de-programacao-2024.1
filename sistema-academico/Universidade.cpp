#include "Universidade.h"
#include <string.h>
#include <iostream>

Universidade::Universidade(const char *nome)
{
    inicializa(nome);
}

Universidade::Universidade()
{
    inicializa("");
}

Universidade::~Universidade()
{

}

void Universidade::inicializa(const char *nome)
{
    strcpy(nomeUniversidade, nome);
}

void Universidade::imprimeNome()
{
    std::cout << nomeUniversidade << std::endl;    
}
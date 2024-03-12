#include "Departamento.h"
#include <string.h>

Departamento::Departamento(const char *nome, const char *sigla)
{
    inicializa(nome, sigla);
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
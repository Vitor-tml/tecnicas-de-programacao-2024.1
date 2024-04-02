#include "Professor.h"
#include <iostream>

Professor::Professor(int dia, int mes, int ano, const char *nome):
Pessoa(dia, mes, ano, nome)
{
	pDptoFiliado = nullptr;
	pUniversidadeFiliado = nullptr;
}

Professor::~Professor()
{

}
void Professor::setDepartamento(Departamento *p)
{
	pDptoFiliado = p;
}

void Professor::setUniversidade(Universidade *p)
{
	pUniversidadeFiliado = p;
}

char* Professor::getUniversidade()
{
	if(pUniversidadeFiliado != nullptr)
		return pUniversidadeFiliado->getNome();
	else
		std::cout << nomePessoa << "não está filido à universidade." << std::endl;
	return NULL;
}
char* Professor::getDepartamento()
{
	if(pDptoFiliado != nullptr)
		return pDptoFiliado->getNome();
	else
		std::cout << nomePessoa << "não está filido à departamento." << std::endl;	
	return NULL;
}
#pragma once
#include "Pessoa.h"
#include "Departamento.h"
#include "Universidade.h"

class Professor : public Pessoa
{
private:
	Universidade *pUniversidadeFiliado;
	Departamento *pDptoFiliado;
public:
	Professor(int dia = 0, int mes = 0, int ano = 0, const char *nome = "");
	~Professor();
	void setDepartamento(Departamento *p);
	void setUniversidade(Universidade *p);
	char* getUniversidade();
	char* getDepartamento();
};
#pragma once
#include "Pessoa.h"
#include "Departamento.h"
#include "Universidade.h"


class Aluno : public Pessoa
{
private:
	int RA;
	float CR;
public:
	Aluno(int dia = 0, int mes = 0, int ano = 0, const char *nome = "", int registroAcademico = -1);
	~Aluno();
	void setRA(int n);
	int getRA();
};
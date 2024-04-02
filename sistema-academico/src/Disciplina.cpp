#include "Disciplina.h"
#include <string.h>
#include <iostream>
#include <cstring>

Disciplina::Disciplina(const char *nome, const char *codigo, Professor *pProf)
{
	inicializa(nome, codigo, pProf);
}

void Disciplina::inicializa(const char *nome, const char *codigo, Professor *pProf)
{
	char *nomeDisciplina = new char[std::strlen(nome)];
	char *codigoDisciplina = new char[std::strlen(codigo)];
	strcpy(nomeDisciplina, nome);
	strcpy(codigoDisciplina, codigo);
	pProfessor = pProf;
}

Disciplina::~Disciplina()
{
	// Desalocar alunos
}

void Disciplina::setProx(Disciplina *p)
{
	pProx = p;
}

Disciplina* Disciplina::getProx()
{
	return pProx;
}

void Disciplina::informaDisciplina()
{
	std::cout << nomeDisciplina << " - " << codigoDisciplina << "Lecionada por:" << pProfessor->getNome() << std::endl;	
}
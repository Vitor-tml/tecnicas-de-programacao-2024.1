#include "Disciplina.h"
#include "Aluno.h"
#include "Professor.h"
#include "Departamento.h"
#include <string.h>
#include <iostream>
#include <cstring>

Disciplina::Disciplina(const char *nome, const char *codigo, Professor *pProf)
{
	inicializa(nome, codigo, pProf);
}

void Disciplina::inicializa(const char *nome, const char *codigo, Professor *pProf)
{
	nomeDisciplina = new char[std::strlen(nome)];
	codigoDisciplina = new char[std::strlen(codigo)];

	strcpy(nomeDisciplina, nome);
	strcpy(codigoDisciplina, codigo);
	pProfessor = pProf;
	pProx = nullptr;
	pAlunos = nullptr;
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
	if(nomeDisciplina != nullptr)
		std::cout << nomeDisciplina << " - " << codigoDisciplina << " do Departamento " << pDeptoAssociado->getNome() << " Lecionada por: " << pProfessor->getNome() << std::endl;	
	else
		std::cout << "Disciplina não iniciada corretamente!" << std::endl;
}

void Disciplina::setDepartamento(Departamento *p)
{
	std::cout << "Nome departamento: " << p->getNome() << std::endl;
	pDeptoAssociado = p;
}
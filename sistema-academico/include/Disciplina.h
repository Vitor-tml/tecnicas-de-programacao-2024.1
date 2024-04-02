#pragma once
#include "Professor.h"
#include "Aluno.h"

class Disciplina
{
private:
	char *nomeDisciplina;
	char *codigoDisciplina;
	Professor *pProfessor;
	Disciplina *pProx;
	// Aluno pAlunos;	
public:
	Disciplina(const char *nome = "", const char *codigo = "", Professor *pProf = nullptr);
	~Disciplina();
	void inicializa(const char *nome, const char *codigo, Professor *pProf);
	void setProx(Disciplina *p);
	Disciplina* getProx();
	void informaDisciplina();
	// void setAluno()
};
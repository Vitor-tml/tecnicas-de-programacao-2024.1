#include "Aluno.h"

Aluno::Aluno(int dia, int mes, int ano, const char *nome, int registroAcademico):
Pessoa(dia, mes, ano, nome)
{
	RA = registroAcademico;
}

Aluno::~Aluno()
{

}

void Aluno::setRA(int n)
{
	RA = n;
}

int Aluno::getRA()
{
	return RA;
}

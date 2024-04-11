#pragma once

// Declaração antecipada (Forward declaration)
class Aluno;
class Professor;
class Departamento;

class Disciplina
{
private:
	char *nomeDisciplina;
	char *codigoDisciplina;
	Professor *pProfessor;
	Disciplina *pProx;
	Aluno *pAlunos;	
	Departamento *pDeptoAssociado;
public:
	Disciplina(const char *nome = "", const char *codigo = "", Professor *pProf = nullptr);
	~Disciplina();
	void inicializa(const char *nome, const char *codigo, Professor *pProf);
	void setProx(Disciplina *p);
	Disciplina* getProx();
	void informaDisciplina();
	void setDepartamento(Departamento *p);
	//void setAluno();
};
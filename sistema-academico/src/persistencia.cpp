#include "persistencia.h"
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;

int Liquido::cont = 0;
int Garrafa::cont = 0;

Liquido::Liquido(const char *n)
{
	id = ++cont;
	strcpy(nome, n);
}

Garrafa::Garrafa(int litros, Liquido *p)
{
	id = ++cont;
	tamanho = litros;
	conteudo = p;
}

void Liquido::getCont()
{
	std::cout << "Existem " << cont << " liquidos." << std::endl;
}

void Garrafa::getCont()
{
	std::cout << "Existem " << cont << " garrafas." << std::endl;
}

void Garrafa::informaGarrafa()
{
	if(conteudo != NULL)
		std::cout << "Tem um a garrafa de " << tamanho << "l de " << conteudo->getNome() << std::endl;
} 

const char* Liquido::getNome()
{
	return nome;
}

void Liquido::salvar()
{
	ofstream arquivo("./data/liquido.dat", ios_base::out);

	if(!arquivo)
	{
		cerr << "Arquivo de liquido nao pode ser aberto" << std::endl;
		fflush(stdin);
		getchar();
		return;
	}

	arquivo << id << ' ' << nome << endl;
	arquivo.close();
}

void Garrafa::salvar()
{
	ofstream arquivo("./data/garrafa.dat", ios_base::out);

	if(!arquivo)
	{
		cerr << "Arquivo de garrafa nao pode ser aberto" << std::endl;
		fflush(stdin);
		getchar();
		return;
	}

	arquivo << id << ' ' << tamanho << ' ' << conteudo->getID() << endl;
	arquivo.close();
}

void Liquido::recupera()
{
	ifstream arquivo("./data/liquido.dat", ios_base::in);
	
	if(!arquivo)
	{
		cerr << "Arquivo de liquido nao pode ser aberto" << std::endl;
		fflush(stdin);
		getchar();
		return;
	}

	arquivo >> id >> nome;
	arquivo.close();
}

void Garrafa::recupera()
{
	ifstream arquivo("./data/garrafa.dat", ios_base::in);
	int i;
	if(!arquivo)
	{
		cerr << "Arquivo de garrafa nao pode ser aberto" << std::endl;
		fflush(stdin);
		getchar();
		return;
	}

	arquivo >> id >> tamanho >> i;
	std::cout << "A garrafa " << id << " tem o liquido " << i << std::endl;
	arquivo.close();
}
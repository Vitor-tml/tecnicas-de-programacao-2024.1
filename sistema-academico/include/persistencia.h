#pragma once

class Liquido{
private:
	int id;
	static int cont;
	char nome[10];
public:
	Liquido(const char *n = "");
	~Liquido(){};
	static void getCont();
	const char* getNome();
	void salvar();
	void recupera();
	int getID(){ return id; };
};


class Garrafa{
private:	
	int id;
	static int cont;
	int tamanho;
	Liquido *conteudo;
public:
	Garrafa(int litros = 0, Liquido *p = nullptr);
	~Garrafa(){};
	static void getCont();
	void informaGarrafa();
	void salvar();
	void recupera();
};


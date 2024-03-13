#pragma once

class Departamento
{
private:
    char siglaDepartamento[6];
    char nomeDepartamento[50];
public:
    Departamento(const char *nome="", const char *sigla="");
    ~Departamento();
    char* getNome();
    void inicializa(const char *nome, const char *sigla);
}; 
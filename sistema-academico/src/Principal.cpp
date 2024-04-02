#include "Principal.h"
#include <iostream>

Principal::Principal():
vitor(31, 8, 2004, "Capivara")
{
    //  PESSOAS
    //vitor.inicializa(31, 8, 2004, "Capivara");
    einsten.inicializa(14, 3, 1879, "Alberto Einsten");
    newton.inicializa(4, 1, 1643, "Isaqueh Newton");

    // UNIVERSIDADES
    utfpr.inicializa("Universdade Tecnolgica Federal do Parana");
    puc.inicializa("UniEsquina");
    positivo.inicializa("UniBairro");

    // DEPARTAMENTO
    utfpr.setDepartamento("Departamento de Informatica", "DAINF");
    utfpr.setDepartamento("Departamento de Matematica", "DAMAT");
    utfpr.setDepartamento("Departamento de Fisica", "DAFIS");

    //  RELAÇÃO DE OBJETOS
    //Universdade aluno
    vitor.setRA(777);
    einsten.setUniversidade(&utfpr);
    newton.setUniversidade(&positivo);
    //Departamento aluno
    einsten.setDepartamento(&dainf);
}

Principal::~Principal()
{
    //std::cout << "Bye bye" << std::endl;
}
void Principal::executar()
{
    newton.getUniversidade();
    std::cout << newton.getNome() << " trabalha na " << newton.getUniversidade() << std::endl;
}
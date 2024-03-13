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
    dainf.inicializa("Departamento de Informatica", "DAINF");

    //  RELAÇÃO DE OBJETOS
    //Universdade
    vitor.setUniversidade(&utfpr);
    einsten.setUniversidade(&puc);
    newton.setUniversidade(&positivo);
    //Departamento
    vitor.setDepartamento(&dainf);
}

Principal::~Principal()
{
    //std::cout << "Bye bye" << std::endl;
}
void Principal::executar()
{
    vitor.informaDepartamento();
}
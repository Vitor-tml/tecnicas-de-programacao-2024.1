#include "Pessoa.h"
#include "Universidade.h"

class Principal
{
private:
    Pessoa vitor;
    Pessoa einsten;
    Pessoa newton;

    Universidade utfpr;
    
    int diaAtual = 1;
    int mesAtual = 1;
    int anoAtual = 2024;
public:
    Principal();
    ~Principal();
    void executar();
};
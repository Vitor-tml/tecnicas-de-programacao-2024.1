#include "Pessoa.h"
class Principal
{
private:
    Pessoa vitor;
    Pessoa einsten;
    Pessoa newton;
    int diaAtual = 1;
    int mesAtual = 1;
    int anoAtual = 2024;
public:
    Principal();
    ~Principal();
    void executar();
};
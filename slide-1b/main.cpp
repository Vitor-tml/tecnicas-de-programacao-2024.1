#include <iostream>

class Pessoa
{
private:
    int diaPessoa;
    int mesPessoa;
    int anoPessoa;
    int idadePessoa;
public:
    Pessoa(int dia, int mes, int ano)
    {
        diaPessoa = dia;
        mesPessoa = mes;
        anoPessoa = ano;
        idadePessoa = -1;
    }

    void calculaIdade(int diaAtual, int mesAtual, int anoAtual)
    {
        idadePessoa = anoAtual - anoPessoa;

        if(mesAtual > mesPessoa)
            idadePessoa--;
        else
            if(mesAtual == mesPessoa && diaPessoa > diaAtual)
                idadePessoa--;
    }

    int getIdade()
    {
        return idadePessoa;
    }
};

int main()
{
    Pessoa einstein(14, 3, 1879);
    Pessoa newton(4, 1, 1643);

    einstein.calculaIdade(1, 1, 2024);
    newton.calculaIdade(1, 1, 2024);

    printf("Einsten tem %d anos.\n", einstein.getIdade());
    printf("Newton tem %d anos.\n", newton.getIdade());
}
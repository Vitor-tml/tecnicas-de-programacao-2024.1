class Pessoa
{
private:
    int diaPessoa;
    int mesPessoa;
    int anoPessoa;
    int idadePessoa;
    char nomePessoa[30];
public:
    Pessoa(int dia, int mes, int ano, const char *nome);
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    int getIdade();
};
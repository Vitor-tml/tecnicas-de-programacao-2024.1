class Universidade
{
private:
    char nomeUniversidade[50];

public:
    Universidade(const char *nome);
    Universidade();
    ~Universidade();
    void inicializa(const char *nome);
    void imprimeNome();
};
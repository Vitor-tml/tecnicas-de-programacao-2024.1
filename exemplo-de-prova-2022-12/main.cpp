#include <iostream>
using namespace std;

//==================================Transporte======================================
class Transporte{
private:
    long int id_geral;
public:
    Transporte(const long int ig = -1); // Inicializa id em -1 por default
    ~Transporte() {};
    const int getId() const { return id_geral; };
    virtual void informarIDs() const = 0;    
};
Transporte::Transporte(const long int ig) : id_geral(ig){}

//==================================Barco======================================
class Barco : public Transporte{
private:
    int id_barco;
public:
    Barco(const long int ig = -1, const int ib = -1);
    ~Barco() {};
    const long int getIdB() const { return id_barco; }
    virtual void informarIDs() const;
};

Barco::Barco(const long int ig, const int ib) : Transporte(ig), id_barco(ib){}

void Barco::informarIDs() const
{
    cout << "ID transporte: " << getId()  << endl;
    cout << "ID barco: "      << getIdB() << endl;
}
//==================================Barco======================================
class CarroAnfibio : public Barco {
private:
    short int id_carroanf;
public:
    CarroAnfibio(const long int ig = -1, const int ib = -1, short int ica = -1);
    ~CarroAnfibio() {};
    const short int getIdCA() const { return id_carroanf;};
    void informaIDs() const;
};

CarroAnfibio::CarroAnfibio(const long int ig, const int ib, short int ica) : Barco(ig, ib), id_carroanf(ica) {}
void CarroAnfibio::informaIDs() const
{
    cout << "ID transporte: "    << getId()  << endl;
    cout << "ID barco: "         << getIdB() << endl;
    cout << "ID carro anfibio: " << getIdCA() << endl;
}

//==================================ElementoTransporte======================================
class ElemTransp{
private:
    ElemTransp *pProx;
    Transporte *pTransp;
public:
    ElemTransp();
    ~ElemTransp() {};
    void setProx(ElemTransp *p);
    ElemTransp* getProx() const{}
};

ElemTransp::ElemTransp()
{
    pProx = nullptr;
    pTransp = nullptr;
}

ElemTransp::~ElemTransp()
{
    pProx = nullptr;
    pTransp = nullptr;
}


#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"


class Poupanca : public Conta{
    public:
    //Construtores
        Poupanca();
        Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento);
    //Destrutor
        virtual ~Poupanca();
    //Metodos get
        double getTaxaRendimento();
        int getVariacao();
    //Metodos set
        void setTaxaRendimento (double taxaRendimento);
        void setVariacao(int variacao);
    //Metodos
        double render();
        void printInf(Poupanca *objeto);

    private:
        int variacao;
        double taxaRendimento;

};

#endif // POUPANCA_H

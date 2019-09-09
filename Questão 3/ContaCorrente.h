#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta{
    public:
    //Construtores
        ContaCorrente();
        ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario);
    //Destrutor
        virtual ~ContaCorrente();
    //Metodos get
        double getSalario();
        double getLimite();
    //Metodos set
        void setSalario (double salario);
        void setLimite(double limite);
    //Metodos
        double definirLimite();
        void printInf(ContaCorrente *objeto);

    protected:
        double salario;
        double limite;

};

#endif // CONTACORRENTE_H

#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"

#include <string>


class Conta : public IConta{
    public:
    //Construtores
        Conta();
        Conta(std::string nomeClinte, double salarioMensal, int numeroConta, double saldo);
    //Destrutor
        virtual ~Conta();
    //Metodos get
        std::string getNomeClinte();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();
     //Metodos set
        void setNomeClinte(std::string nomeClinte);
        void setSalarioMensal(double salarioMensal);
        void setNumeroConta(int numeroConta);
        void setSaldo(double saldo);
        void setLimite(double limite);
    //Metodos
        void definirLimite();
        void sacar(double valor);
        void depositar(double valor);

    protected:
        std::string nomeClinte;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
};

#endif // CONTA_H

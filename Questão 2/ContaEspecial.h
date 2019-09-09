#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"


class ContaEspecial : public Conta{
    public:
    //Construtores
        ContaEspecial();
        ContaEspecial(std::string nomeClinte, double salarioMensal, int numeroConta, double saldo);
    //Destrutor
        virtual ~ContaEspecial();
    //Metodo
        void definirLimite();
};

#endif // CONTAESPECIAL_H

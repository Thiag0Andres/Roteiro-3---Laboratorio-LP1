#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta{
    public:
    //Construtores
        Conta();
        Conta(std::string nomeCliente, int numero, double saldo);
    //Destrutor
        virtual ~Conta();
    //Metodos get
        std::string getNomeCliente();
        int getNumero();
        double getSaldo();
    //Metodos set
        void setNomeCliente(std::string nomeCliente);
        void setNumero(int numero);
        void setSaldo(double saldo);
    //Metodos virtuais
        void sacar(double valor);
        void depositar(double valor);

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;
};

#endif // CONTA_H

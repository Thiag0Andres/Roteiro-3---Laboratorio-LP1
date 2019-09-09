#include <iostream>
#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial(){
    //ctor
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numero, double saldo, double salario) : ContaCorrente(nomeCliente, numero, saldo, salario){
    setSalario(salario);
    setLimite(limite);
}

ContaEspecial::~ContaEspecial(){
    //dtor
}

double ContaEspecial::definirLimite(){
    limite = salario * 4;
    setLimite(limite);
}


void ContaEspecial::printInf(ContaEspecial *objeto){
    double valor;

    cout    << "Conta Especial: " << objeto-> getNumero() << endl
            << "Nome: " << objeto-> getNomeCliente() << endl
            << "Salario:  R$ " << objeto-> getSalario() << endl
            << "Saldo:  R$ " << objeto-> getSaldo() << endl;

    objeto-> definirLimite();
    cout << "Limite da conta especial: " << objeto-> getLimite() << endl << endl;

    cout << "Digite um valor para o saque: ";
    cin >> valor;
    objeto-> sacar(valor);
	cout << "Saldo:  R$ " << objeto-> getSaldo() << endl;

    cout << "Digite um valor para o deposito: ";
    cin >> valor;
    objeto-> depositar(valor);
    cout << "Saldo:  R$ " << objeto-> getSaldo() << endl << endl;
}


#include <iostream>
#include "ContaCorrente.h"

using namespace std;

ContaCorrente::ContaCorrente(){
    //ctor
}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario) : Conta(nomeCliente, numero, saldo){
    setSalario(salario);
    setLimite(limite);
}

ContaCorrente::~ContaCorrente(){
    //dtor
}

double ContaCorrente::getSalario(){
    return salario;
}

double ContaCorrente::getLimite(){
    return limite;
}

void ContaCorrente::setSalario(double salario){
    this-> salario = salario;
}

void ContaCorrente::setLimite(double limite){
    this-> limite = limite;
}

double ContaCorrente::definirLimite(){
    limite = salario * 2;
    setLimite(limite);
}

void ContaCorrente::printInf(ContaCorrente *objeto){
    double valor;

    cout    << "Conta corrente: " << objeto-> getNumero() << endl
            << "Nome: " << objeto-> getNomeCliente() << endl
            << "Salario:  R$ " << objeto-> getSalario() << endl
            << "Saldo:  R$ " << objeto-> getSaldo() << endl;

    objeto-> definirLimite();
    cout << "Limite da conta corrente:  R$ " << objeto-> getLimite() << endl << endl;

    cout << "Digite um valor para o saque: ";
    cin >> valor;
    objeto-> sacar(valor);
	cout << "Saldo:  R$ " << objeto-> getSaldo() << endl;

    cout << "Digite um valor para o deposito: ";
    cin >> valor;
    objeto-> depositar(valor);
    cout << "Saldo:  R$ " << objeto-> getSaldo() << endl << endl;
}


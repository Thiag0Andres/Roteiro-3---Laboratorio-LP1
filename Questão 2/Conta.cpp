#include "Conta.h"
#include <iostream>

using namespace std;

Conta::Conta(){
    //ctor
}

Conta::~Conta(){
    //dtor
}

Conta::Conta(std::string nomeClinte, double salarioMensal, int numeroConta, double saldo){
    setNomeClinte(nomeClinte);
    setSalarioMensal(salarioMensal);
    setNumeroConta(numeroConta);
    setSaldo(saldo);
}

std::string Conta::getNomeClinte(){
    return nomeClinte;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

void Conta::setNomeClinte(std::string nomeClinte){
    this-> nomeClinte = nomeClinte;
}

void Conta::setSalarioMensal(double salarioMensal){
    if(salarioMensal <= 0)
        salarioMensal = 0;
    this-> salarioMensal = salarioMensal;
}

void Conta::setNumeroConta(int numeroConta){
    this-> numeroConta = numeroConta;
}

void Conta::setSaldo(double saldo){
    this-> saldo = saldo;
}

void Conta::setLimite(double limite){
    this-> limite = limite;
}

void Conta::definirLimite(){
    limite = salarioMensal * 2;
    setLimite(limite);
}

void Conta::sacar(double valor){
	if (valor > saldo){
		cout << "!!!Saldo Insdisponivel!!!" << endl;
	}
	else{
		saldo -= valor;
		setSaldo(saldo);
	}
}

void Conta::depositar(double valor){
    saldo+= valor;
    setSaldo(saldo);
}


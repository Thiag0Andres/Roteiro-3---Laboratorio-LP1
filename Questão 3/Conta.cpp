#include "Conta.h"
#include <iostream>

using namespace std;

Conta::Conta(){
    nomeCliente = " ";
    numero = 0;
    saldo = 0;
}

Conta::Conta(std::string nomeCliente, int numero, double saldo){
    setNomeCliente(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
}

Conta::~Conta(){
    //dtor
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumero(){
    return numero;
}

double Conta::getSaldo(){
    return saldo;
}

void Conta::setNomeCliente(std::string nomeCliente){
    this-> nomeCliente = nomeCliente;
}

void Conta::setNumero(int numero){
    this-> numero = numero;
}

void Conta::setSaldo(double saldo){
    this-> saldo = saldo;
}

void Conta::sacar(double valor){
    if(valor > saldo){
        cout << "!!!Saldo Insdisponivel!!!" << endl;
    }
    else
        saldo -= valor;
}

void Conta::depositar(double valor){
    saldo += valor;
}



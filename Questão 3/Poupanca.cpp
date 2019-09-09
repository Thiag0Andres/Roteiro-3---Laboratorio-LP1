#include <iostream>
#include "Poupanca.h"

using namespace std;

Poupanca::Poupanca(){
    variacao = 0;
    taxaRendimento = 0;
}

Poupanca::Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento) : Conta(nomeCliente, numero, saldo){
    setVariacao(variacao);
    setTaxaRendimento(taxaRendimento);
}

Poupanca::~Poupanca(){
    //dtor
}

double Poupanca::getTaxaRendimento(){
     return taxaRendimento;
}

int Poupanca::getVariacao(){
    return variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento){
    this-> taxaRendimento = taxaRendimento;
}

void Poupanca::setVariacao(int variacao){
    this-> variacao = variacao;
}

double Poupanca::render(){
	double renda = 0;

	if (variacao == 51){
		renda = saldo * (taxaRendimento / 100);
	}
	else if (variacao == 1){
    renda = saldo * ((taxaRendimento / 100) + ((taxaRendimento / 100) * (0.5 / 100)));

	}
	return renda;
}

void Poupanca::printInf(Poupanca *objeto){
     cout   << "Conta Especial: " << objeto-> getNumero() << endl
            << "Nome: " << objeto-> getNomeCliente() << endl
            << "Saldo:  R$ " << objeto-> getSaldo() << endl
            << "Variacao: " << objeto-> getVariacao() << endl
            << "Taxa de rendimento: " << objeto-> getTaxaRendimento() << "%" << endl
            << "Rendimento: R$ " << objeto-> render() << endl;
}

#include "Comissionado.h"
#include <iostream>

using namespace std;

Comissionado::Comissionado(){
    //ctor
}

Comissionado::Comissionado(std::string nome, int matricula, double vendasSemanais, double percentual, double salario){
    this->nome = nome;
    this->matricula = matricula;
	this->vendasSemanais = vendasSemanais;
	this->percentual = percentual;
	this->salario = salario;
}

Comissionado::~Comissionado(){
    //dtor
}

double Comissionado::calcularSalario(){
    return (salario + ((vendasSemanais * 4) * percentual));
}


void Comissionado::printInf(){
    cout    << "Comissionado" << endl
            << "Nome: " << nome << endl
            << "Matricula: " << matricula << endl
            << "Salario base: R$ " << salario << endl
            << "Vendas semanais: R$ " << vendasSemanais << endl
            << "Percentual de comissao: " << percentual << "%" << endl
            << "Salario mensal: R$ " << calcularSalario() << endl << endl;
}




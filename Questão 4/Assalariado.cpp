#include "Assalariado.h"
#include <iostream>

using namespace std;

Assalariado::Assalariado(){
    //ctor
}

Assalariado::Assalariado(std::string nome, int matricula, double salario){
    this->nome = nome;
    this->matricula = matricula;
	this->salario = salario;
}

Assalariado::~Assalariado(){
    //dtor
}

double Assalariado::calcularSalario(){
    return salario;
}

void Assalariado::printInf(){
    cout    << "Assalariado" << endl
            << "Nome: " << nome << endl
            << "Matricula: " << matricula << endl
            << "Salario mensal: R$ " << salario << endl << endl;
}



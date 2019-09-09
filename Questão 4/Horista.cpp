#include "Horista.h"
#include <iostream>

using namespace std;

Horista::Horista(){
    //ctor
}

Horista::Horista(std::string nome, int matricula, double valorPorHora, double horasTrabalhadas){
    this->nome = nome;
    this->matricula = matricula;
	this->valorPorHora = valorPorHora;
	this->horasTrabalhadas = horasTrabalhadas;
}

Horista::~Horista(){
    //dtor
}

double Horista::calcularSalario(){
	double salarioSemanal = 0;

	if (horasTrabalhadas <= 40){
		salarioSemanal = horasTrabalhadas * valorPorHora;
	}

	else if (horasTrabalhadas > 40){
		horaExtra = horasTrabalhadas - 40;
		salarioSemanal = (40 * valorPorHora) + (horaExtra * (1.5 * valorPorHora));
	}

	return salarioSemanal * 4;
}


void Horista::printInf(){
    cout    << "Horista" << endl
            << "Nome: " << nome << endl
            << "Matricula: " << matricula << endl
            << "Salario por hora: R$ " << valorPorHora << endl
            << "Horas trabalhadas: " << horasTrabalhadas << endl
            << "Horas extras trabalhadas: " << horaExtra << endl
            << "Salario mensal: R$ " << calcularSalario() << endl << endl;
}


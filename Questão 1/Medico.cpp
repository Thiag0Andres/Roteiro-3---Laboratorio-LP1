#include "Medico.h"

Medico::Medico(std::string nome, double altura, double peso){
    setNome(nome);
	setAltura(altura);
	setPeso(peso);
	especializacao = "Medico geral";
}

void Medico::setNome(std::string nome){
	this-> nome = nome;
}

void Medico::setAltura(double altura){
	this-> altura = altura;
}

void Medico::setPeso(double peso){
	this-> peso = peso;
}

std::string Medico::getNome(){
	return nome;
}

double Medico::getAltura(){
	return altura;
}

double Medico::getPeso(){
	return peso;
}

void Medico::realizarOperacao(){
	cout << "Fazendo checkup geral" << endl;
}

std::string Medico::getEspecializacao(){
	return especializacao;
}

#include "Funcionario.h"

Funcionario::Funcionario(){
    //ctor
}

Funcionario::~Funcionario(){
    //dtor
}

std::string Funcionario::getNome() {
	return nome;
}

int Funcionario::getMatricula() {
	return matricula;
}

void Funcionario::setNome(std::string) {
	this->nome = nome;
}

void Funcionario::setMatricula(int matricula) {
	this->matricula = matricula;
}

void Funcionario::printInf(){

}




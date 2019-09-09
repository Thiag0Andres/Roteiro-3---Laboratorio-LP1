#include "Cirurgiao.h"

Cirurgiao::Cirurgiao(std::string nome, double altura, double peso) : Medico(nome, altura, peso){
	especializacao = "Cirurgiao";
}

void Cirurgiao::realizarOperacao(){
	cout << "Fazendo cirurgia" << endl;
}

std::string Cirurgiao::getEspecializacao(){
	return especializacao;
}

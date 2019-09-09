#include "Otorrino.h"

Otorrino::Otorrino(std::string nome, double altura, double peso) : Medico(nome, altura, peso){
	especializacao = "Otorrino";
}

void Otorrino::realizarOperacao(){
	cout << "Checando os ouvidos" << endl;
}

std::string Otorrino::getEspecializacao(){
	return especializacao;
}

#include "Ginecologista.h"

Ginecologista::Ginecologista(std::string nome, double altura, double peso) : Medico(nome, altura, peso){
	especializacao = "Ginecologista";
}

void Ginecologista::realizarOperacao(){
	cout << "Realizando exame de rotina para saude feminina" << endl;
}

std::string Ginecologista::getEspecializacao(){
	return especializacao;
}

#include "Oftamologista.h"

Oftamologista::Oftamologista(std::string nome, double altura, double peso) : Medico(nome, altura, peso){
	especializacao = "Oftamologista";
}

void Oftamologista::realizarOperacao(){
	cout << "Checando a visao " << endl;
}

std::string Oftamologista::getEspecializacao(){
	return especializacao;
}

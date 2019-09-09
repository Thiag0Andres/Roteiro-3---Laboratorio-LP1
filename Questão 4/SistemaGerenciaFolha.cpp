#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){
    orcamentoMaximo = 0;
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMaximo){
    this->orcamentoMaximo = orcamentoMaximo;
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario * func) {
	funcionarios[a] = func;
	a++;
}

double SistemaGerenciaFolha::calculaValorTotalDaFolha() {
	double valorTotal = 0;

	for (int i = 0; i < 3; i++) {
		valorTotal += funcionarios[i]->calcularSalario();
	}

    if (valorTotal <= orcamentoMaximo){
        return valorTotal;
    }

	throw OrcamentoEstouradoException();
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome) {
	for (int i = 0; i < 3; i++) {
		if (nome == funcionarios[i]->getNome())
			return funcionarios[i]->calcularSalario();
	}

	throw FuncionarioNaoExisteException();
}

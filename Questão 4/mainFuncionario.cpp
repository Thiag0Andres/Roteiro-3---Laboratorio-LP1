/*
    Thiago Andres Paiva Palacios
    Questao 4
*/

#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	Funcionario * f1 = new Assalariado("Thiago", 201901, 1200);
	Funcionario * f2 = new Comissionado("Pablo", 201902,  20, 0.25, 800);
	Funcionario * f3 = new Horista("Andressa", 201903, 12, 50);
	SistemaGerenciaFolha folha = SistemaGerenciaFolha(5000);//Define o orcamento maximo

    f1->calcularSalario();
    f2->calcularSalario();
    f3->calcularSalario();

    folha.setFuncionarios(f1);
    folha.setFuncionarios(f2);
    folha.setFuncionarios(f3);


    f1->printInf();
    f2->printInf();
    f3->printInf();

    double a = 0;

    try{
        a = folha.calculaValorTotalDaFolha();
        cout << "Valor total da folha: R$ " << a << endl;
    }
    catch(OrcamentoEstouradoException orc){

        std::cerr << orc.what() << endl;
    }

    double b = 0;

    try{
        b = folha.consultaSalarioFuncionario("Andressa");
        cout << "\nSalario do funcionario: R$ " << b << endl;

    }
    catch(FuncionarioNaoExisteException func){
        std::cerr << func.what() << endl;
    }
	
    delete f1;
    delete f2;
    delete f3;
	
    return 0;
}


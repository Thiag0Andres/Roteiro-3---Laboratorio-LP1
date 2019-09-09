/*
    Thiago Andres Paiva Palacios
    Questao 2
*/

#include <iostream>
#include "stdlib.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
    double valor;

    Conta *conta1 = new Conta("Thiago", 9000, 666, 5677.98);
    ContaEspecial *conta2 = new ContaEspecial("Rosas", 500, 999, 255);

//Conta 1
    cout  << "Conta 1: " << conta1-> getNumeroConta() << endl << "Nome: " << conta1-> getNomeClinte() << endl << "Salario Mensal: " << conta1-> getSalarioMensal() << endl << "Saldo: " << conta1-> getSaldo() << endl;
    conta1-> definirLimite();
    cout << "Limite conta 1: " << conta1-> getLimite() << endl << endl;

    cout << "Digite um valor para o saque: ";
    cin >> valor;
    conta1-> sacar(valor);
	cout << "Saldo: " << conta1-> getSaldo() << endl;

    cout << "Digite um valor para o deposito: ";
    cin >> valor;
    conta1-> depositar(valor);
    cout << "Saldo: " << conta1-> getSaldo() << endl << endl;

    delete conta1;

//Conta 2
    cout << "\nConta 2: " << conta2-> getNumeroConta() << endl << "Nome: " << conta2-> getNomeClinte() << endl << "Salario Mensal: "<< conta2-> getSalarioMensal() << endl << "Saldo: " << conta2-> getSaldo() << endl;
    conta2-> definirLimite();
    cout << "Limite conta 2: " << conta2-> getLimite() << endl << endl;

    cout << "Digite um valor para o saque: ";
    cin >> valor;
    conta2-> sacar(valor);
    cout << "Saldo: " << conta2-> getSaldo() << endl;

    cout << "Digite um valor para o deposito: ";
    cin >> valor;
    conta2-> depositar(valor);
    cout << "Saldo: " << conta2-> getSaldo() << endl;

    delete conta2;

    return 0;
}

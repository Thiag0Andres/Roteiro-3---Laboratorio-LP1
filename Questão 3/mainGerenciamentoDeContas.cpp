/*
    Thiago Andres Paiva Palacios
    Questao 3
*/

#include <iostream>
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main(){
    double valor;

    ContaCorrente *contaCorrente1 = new ContaCorrente("Thiago", 201901, 5899.96, 6600);
    ContaEspecial *contaEspecial1 = new ContaEspecial("Andressa", 201902, 9359.00, 7500);
    Poupanca *poupanca1 = new Poupanca("Pablo", 201903, 7689.90, 51, 2.5);

//Conta corrente
    contaCorrente1-> printInf(contaCorrente1);
    delete contaCorrente1;
//Conta Especial
    contaEspecial1-> printInf(contaEspecial1);
    delete contaEspecial1;
//Poupanca
    poupanca1-> printInf(poupanca1);
    delete poupanca1;

    return 0;
}

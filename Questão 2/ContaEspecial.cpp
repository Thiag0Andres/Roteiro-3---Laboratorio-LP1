#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){
    //ctor
}

ContaEspecial::ContaEspecial(std::string nomeClinte, double salarioMensal, int numeroConta, double saldo){
    setNomeClinte(nomeClinte);
    setSalarioMensal(salarioMensal);
    setNumeroConta(numeroConta);
    setSaldo(saldo);
}


ContaEspecial::~ContaEspecial(){
    //dtor
}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
    setLimite(limite);
}

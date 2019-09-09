#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
    //Construtores
        Horista();
        Horista(std::string nome, int matricula, double valorPorHora, double horasTrabalhadas);
    //Destrutor
        virtual ~Horista();
    //Metodos
         double calcularSalario();
         void printInf();

    private:
        double valorPorHora;
        int horasTrabalhadas;
        double horaExtra;
};

#endif // HORISTA_H

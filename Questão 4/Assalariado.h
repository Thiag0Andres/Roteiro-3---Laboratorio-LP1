#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"


class Assalariado : public Funcionario
{
    public:
    //Construtores
        Assalariado();
        Assalariado(std::string nome, int matricula, double salario);
    //Destrutor
        virtual ~Assalariado();
    //Metodos
        double calcularSalario();
        void printInf();

    private:
        double salario;
};

#endif // ASSALARIADO_H

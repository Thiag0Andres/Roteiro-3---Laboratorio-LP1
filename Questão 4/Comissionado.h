#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
    //Construtores
        Comissionado();
        Comissionado(std::string nome, int matricula, double vendasSemanais, double percentual, double salario);
    //Destrutor
        virtual ~Comissionado();
    //Metodos
        double calcularSalario();
        void printInf();

    private:
        double vendasSemanais;
        double percentual;
        double salario;
};

#endif // COMISSIONADO_H

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario{
    public:
    //Construtores
        Funcionario();
     //Destrutor
        virtual ~Funcionario();
    //Metodos get
        std::string getNome();
        int getMatricula();
    //Metodos set
        void setNome(std::string nome);
        void setMatricula(int matricula);
    //Metodos
        virtual double calcularSalario() = 0;
        virtual void printInf();

    protected:
        std::string nome;
        int matricula;

};

#endif // FUNCIONARIO_H

#ifndef GINECOLOGISTA_H_INCLUDED
#define GINECOLOGISTA_H_INCLUDED

#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Ginecologista : public Medico{
    public:
    //Construtor
        Ginecologista(std::string nome, double altura, double peso);
    //Metodo virtual
        void realizarOperacao();
        std::string getEspecializacao();
    private:
        std::string especializacao;
};

#endif // GINECOLOGISTA_H_INCLUDED


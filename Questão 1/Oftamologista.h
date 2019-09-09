#ifndef OFTAMOLOGISTA_H_INCLUDED
#define OFTAMOLOGISTA_H_INCLUDED

#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Oftamologista : public Medico{
    public:
    //Construtor
        Oftamologista(std::string nome, double altura, double peso);
    //Metodos virtuais
        void realizarOperacao();
        std::string getEspecializacao();
    private:
        std::string especializacao;
};
#endif // OFTAMOLOGISTA_H_INCLUDED


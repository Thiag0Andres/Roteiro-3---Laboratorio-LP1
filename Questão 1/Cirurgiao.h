#ifndef CIRURGIAO_H_INCLUDED
#define CIRURGIAO_H_INCLUDED

#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Cirurgiao : public Medico{
    public:
    //Construtor
        Cirurgiao(std::string nome, double altura, double peso);
    //Metodo virtual
        void realizarOperacao();
        std::string getEspecializacao();
    private:
        std::string especializacao;
};
#endif // CIRURGIAO_H_INCLUDED


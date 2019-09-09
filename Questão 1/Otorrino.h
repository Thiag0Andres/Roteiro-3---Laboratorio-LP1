#ifndef OTORRINO_H_INCLUDED
#define OTORRINO_H_INCLUDED

#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Otorrino : public Medico{
    public:
    //Construtor
        Otorrino(std::string nome, double altura, double peso);
    //Metodos virtuais
        void realizarOperacao();
        std::string getEspecializacao();
    private:
        std::string especializacao;
};

#endif // OTORRINO_H_INCLUDED


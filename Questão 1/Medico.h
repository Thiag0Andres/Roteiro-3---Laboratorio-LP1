#ifndef MEDICO_H_INCLUDED
#define MEDICO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Medico{
    public:
    //Construtor
        Medico(std::string nome, double altura, double peso);
    //Metodo get
        std::string getNome();
        double getAltura();
        double getPeso();
    //Metodo set
        void setNome(std::string nome);
        void setAltura(double altura);
        void setPeso(double peso);
    //Metodos virtuais
        virtual std::string getEspecializacao();
        virtual void realizarOperacao();
	protected:
        std::string nome;
        double altura;
        double peso;
        std::string especializacao;
};
#endif // MEDICO_H_INCLUDED

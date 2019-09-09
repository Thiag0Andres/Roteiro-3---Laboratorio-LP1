#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

#include <string>
#include <exception>


class OrcamentoEstouradoException : public std::exception{
    public:
    //Construtor
        OrcamentoEstouradoException() throw();
    //Destrutor
        virtual ~OrcamentoEstouradoException() throw();
    //Metodo Exception
        virtual std::string what();
    private:
        std::string erro = "Orcamento estourado";

};

#endif // ORCAMENTOESTOURADOEXCEPTION_H

#ifndef  FUNCIONARIONAOEXISTEEXCEPTION_H
#define  FUNCIONARIONAOEXISTEEXCEPTION_H

#include <string>
#include <exception>


class  FuncionarioNaoExisteException : public std::exception{
    public:
    //Construtor
        FuncionarioNaoExisteException() throw();
    //Destrutor
        virtual ~ FuncionarioNaoExisteException() throw();
    //Metodo Exception
        virtual std::string what();
    private:
        std::string erro = "Funcionario nao existe";

};

#endif //  FUNCIONARIONAOEXISTEEXCEPTION_H

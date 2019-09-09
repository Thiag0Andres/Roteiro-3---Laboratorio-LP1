#include " FuncionarioNaoExisteException.h"

 FuncionarioNaoExisteException:: FuncionarioNaoExisteException() throw(){
    //ctor
}

 FuncionarioNaoExisteException::~ FuncionarioNaoExisteException() throw(){
    //dtor
}

std::string FuncionarioNaoExisteException::what(){
    return erro;
}

#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException() throw(){
    //ctor
}

OrcamentoEstouradoException::~OrcamentoEstouradoException() throw(){
    //dtor
}

std::string OrcamentoEstouradoException::what(){
    return erro;
}


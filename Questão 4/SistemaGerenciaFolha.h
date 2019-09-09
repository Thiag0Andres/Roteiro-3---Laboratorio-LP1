#ifndef SISTEMA_H
#define SISTEMA_H

#include "Funcionario.h"
#include " FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha {
    public:
    //Construtores
        SistemaGerenciaFolha();
        SistemaGerenciaFolha(double orcamentoMaximo);
    //Metodo set
        void setFuncionarios(Funcionario *func);
    //Metodos
        double calculaValorTotalDaFolha();
        double consultaSalarioFuncionario(std::string nome);
    private:
        Funcionario * funcionarios[3];
        int a = 0;
        double orcamentoMaximo;
};

#endif // SISTEMA_H


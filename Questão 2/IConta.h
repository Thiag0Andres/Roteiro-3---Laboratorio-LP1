#ifndef ICONTA_H
#define ICONTA_H

class IConta{
    public:
    //Construtor
        IConta();
    //Destrutor
        virtual ~IConta();
    //Metodos virtuais puro
        virtual void sacar(double valor) = 0;
        virtual void depositar(double valor) = 0;

    private:
        double valor;
};

#endif // ICONTA_H

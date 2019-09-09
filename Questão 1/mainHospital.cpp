/*
    Thiago Andres Paiva Palacios
    Questao 1
*/


/*
    O que é polimorfismo?

    Polimorfismo em linguagens orientadas a objeto, é a capacidade de objetos se comportarem de forma diferenciada em face
    de suas características ou do ambiente ao qual estejam submetidos, mesmo quando executando ação que detenha, semanticamente,
    a mesma designação.
    O polimorfismo em C++ se apresenta sob diversas formas diferentes, desde as mais simples, como funções com mesmo nome e lista
    de parâmetros diferentes, até as mais complexas como funções virtuais, cujas formas de execução são dependentes da classe a
    qual o objeto pertence e são identificadas em tempo de execução.

*/

#include "Medico.h"
#include "Cirurgiao.h"
#include "Ginecologista.h"
#include "Oftamologista.h"
#include "Otorrino.h"

int main(void) {
	Medico * m1 = new Oftamologista("Andre", 1.82, 85);
	Medico * m2 = new Cirurgiao("Tayna", 1.79, 87);
	Medico * m3 = new Otorrino("Thiago", 1.67, 78);
	Medico * m4 = new Ginecologista("Pablo", 1.76, 68);

	cout << m1->getNome() << endl << m1->getAltura() << endl << m1->getPeso() << endl << m1->getEspecializacao() << endl;
	m1->realizarOperacao();

	cout << endl;

	cout << m2->getNome() << endl << m2->getAltura() << endl << m2->getPeso() << endl << m2->getEspecializacao() << endl;
	m2->realizarOperacao();

	cout << endl;

	cout << m3->getNome() << endl << m3->getAltura() << endl << m3->getPeso() << endl << m3->getEspecializacao() << endl;
	m3->realizarOperacao();

	cout << endl;

	cout << m4->getNome() << endl << m4->getAltura() << endl << m4->getPeso() << endl << m4->getEspecializacao() << endl;
	m4->realizarOperacao();
}

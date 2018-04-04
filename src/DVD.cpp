#include "DVD.h"

#include <iostream>
#include <limits>
#include <iomanip>

istream &DVD::digitar(istream &I)
{
    Produto::digitar(I);
    cout << "Duração: \n";
    I >> duracao;
    return I;
}

ostream &DVD::imprimir(ostream &O) const
{
    O << "D: ";
    Produto::imprimir(O);
    O << duracao << endl;
    return O;
}

istream &DVD::ler(istream &I)
{
    Produto::ler(I);
    I>>duracao;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return I;
}

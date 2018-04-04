#include "Livro.h"

#include <iostream>
#include <limits>

istream &Livro::digitar(istream &I)
{
    Produto::digitar(I);
    cout << "Autor: \n";
    I.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(I, autor, '\n');
    return I;
}

ostream &Livro::imprimir(ostream &O) const
{
    O << "L: ";
    Produto::imprimir(O);
    O << '"' << autor << '"' << endl;
    return O;
}

istream &Livro::ler(istream &I)
{
    Produto::ler(I);
    I.ignore(numeric_limits<streamsize>::max(), '"');
    getline(I, autor, '"');
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return I;
}

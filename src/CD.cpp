#include "CD.h"

#include <limits>

istream &CD::digitar(istream &I)
{
    Produto::digitar(I);
    cout << "N� de faixas: \n";
    I >> faixas;
    return I;
}

ostream &CD::imprimir(ostream &O) const
{
    O << "C: ";
    Produto::imprimir(O);
    O << faixas << endl;
    return O;
}

istream &CD::ler(istream &I)
{
    Produto::ler(I);
    I>>faixas;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return I;
}

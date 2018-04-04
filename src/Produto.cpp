#include "Produto.h"

#include <limits>

istream &Produto::digitar(istream &I)
{
    cout << "Nome: \n";
    I.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(I, nome, '\n');
    float price=0;
    cout << "preço: ";
    I >> price;
    price=price*100.00;
    preco = price+0.5;
    return I;
}

ostream &Produto::imprimir(ostream &O) const
{
    O << '"' << nome << '"' << ';' << '$' <<float (preco)/100.00 << ';';
    return O;
}

istream &Produto::ler(istream &I)
{
    I.ignore(numeric_limits<streamsize>::max(), '"');
    getline(I, nome, '"');
    I.ignore(numeric_limits<streamsize>::max(), '$');
    float price=0;
    I>> price;
    I.ignore(numeric_limits<streamsize>::max(), ';');

    preco = price*100;
    return I;
}

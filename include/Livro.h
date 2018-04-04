#ifndef LIVRO_H
#define LIVRO_H

#include "Produto.h"
#include <iostream>
#include <string>

using namespace std;

class Livro: public Produto
{
private:
    string autor;
public:
    inline Livro(const char *N="", unsigned P=0,const char *A=""):Produto(N , P) , autor(A) {}
    istream &digitar(istream &I);
    ostream &imprimir(ostream &O) const;
    istream &ler(istream &I);
    inline ostream &salvar(ostream &O) const {return imprimir(O);}
};

inline istream &operator>>(istream &I, Livro &L) {return L.digitar(I);}
inline ostream &operator<<(ostream &O, Livro &L) {return L.imprimir(O);}

#endif // LIVRO_H

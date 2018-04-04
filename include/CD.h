#ifndef CD_H
#define CD_H

#include <iostream>
#include <string>

using namespace std;

class CD: public Produto
{
private:
    unsigned faixas;
public:
    inline CD(const char *N="", unsigned P=0,const unsigned f=0):Produto(N , P) , faixas(f) {}
    istream &digitar(istream &I);
    ostream &imprimir(ostream &O) const;
    istream &ler(istream &I);
    inline ostream &salvar(ostream &O) const {return imprimir(O);}
};

inline istream &operator>>(istream &I, CD &C) {return C.digitar(I);}
inline ostream &operator<<(ostream &O, CD &C) {return C.imprimir(O);}

#endif // CD_H

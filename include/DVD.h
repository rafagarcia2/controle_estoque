#ifndef DVD_H
#define DVD_H

#include <iostream>
#include <string>

using namespace std;

class DVD: public Produto
{
private:
    int duracao;
public:
    inline DVD(const char *N="", unsigned P=0,const int d=0):Produto(N , P) , duracao(d) {}
    istream &digitar(istream &I);
    ostream &imprimir(ostream &O) const;
    istream &ler(istream &I);
    inline ostream &salvar(ostream &O) const {return imprimir(O);}
};

inline istream &operator>>(istream &I, DVD &D) {return D.digitar(I);}
inline ostream &operator<<(ostream &O, DVD &D) {return D.imprimir(O);}

#endif // DVD_H

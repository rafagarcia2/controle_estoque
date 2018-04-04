#ifndef LISTADVD_H
#define LISTADVD_H

#include "DVD.h"

class ListaDVD
{
private:
    DVD *x;
    unsigned N;
public:
    inline ListaDVD(): x(NULL), N(0) {}
    // Inclua os construtores, destrutor e operadores necessarios
    void incluir(const DVD &D);
    void excluir(unsigned id);
    void imprimir() const;
    void ler(istream &I);
    void salvar(ostream &O) const;
};

#endif // LISTADVD_H

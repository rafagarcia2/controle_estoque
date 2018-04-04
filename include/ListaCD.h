#ifndef LISTACD_H
#define LISTACD_H

#include "CD.h"

class ListaCD
{
private:
    CD *x;
    unsigned N;
public:
    inline ListaCD(): x(NULL), N(0) {}
    // Inclua os construtores, destrutor e operadores necessarios
    void incluir(const CD &C);
    void excluir(unsigned id);
    void imprimir() const;
    void ler(istream &I);
    void salvar(ostream &O) const;
};

#endif // LISTACD_H

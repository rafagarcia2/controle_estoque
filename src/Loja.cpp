#include "Loja.h"

#include <iostream>
#include <stdint.h>
#include <fstream>
#include <string>
#include <limits>
#include <iomanip>


void Loja::imprimir() const
{
//    cout << " LISTA LIVRO" << LL.getTam() << endl;
    LL.imprimir();
//    cout << " LISTA LIVRO" << LC.getTam() << "\n";
    LC.imprimir();
//    cout << " LISTA LIVRO" << LD.getTam() << "\n";
    LD.imprimir();

}

void Loja::ler(const char* arq)
{
    ifstream ifs(arq);
    LL.ler(ifs);
    LC.ler(ifs);
    LD.ler(ifs);
    ifs.close();
}

void Loja::salvar(const char* arq) const
{
    ofstream ofs (arq);
    LL.salvar(ofs);
    LC.salvar(ofs);
    LD.salvar(ofs);
    ofs.close();
}

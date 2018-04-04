#include "ListaLivro.h"

#include <iostream>
#include <limits>

void ListaLivro::incluir(const Livro &L)
{
    Livro *novoX = new Livro[N+1];
    for (unsigned i=0; i < N ; i++)
    {
        novoX[i] = x[i];
    }
    novoX[N]= L;
    if (x!=NULL)
    {
        delete[] x;
    }
    x=novoX;
    N++;
}

void ListaLivro::excluir(unsigned id)
{
    if (N==0 or id>=N)
    {
        cerr << "Indices Errados";
        return;
    }
    Livro *novoX = new Livro[N-1];
    for (unsigned i=0; i < id ; i++)
    {
        novoX[i] = x[i];
    }
    for (unsigned i=id; i < N-1 ; i++)
    {
        novoX[i] = x[i+1];
    }
    if (x!=NULL)
    {
        delete[] x;
    }
    x=novoX;
    N--;
}

void ListaLivro::imprimir() const
{
    cout << "LISTALIVRO " << N << endl;
    for (unsigned i=0; i < N ; i++)
    {
        cout << i << ") "<< x[i];
    }
}

void ListaLivro::ler(istream &I)
{
    I.ignore(numeric_limits<streamsize>::max(),' ');
    unsigned n=0;
    I >> n;
    Livro *novoX = new Livro[N+n];
    for (unsigned i=0; i < N ; i++)
    {
        novoX[i]=x[i];
    }
    for (unsigned i=N; i < N+n ; i++)
    {
        novoX[i].ler(I);
    }
    x=novoX;
    N+=n;
}

void ListaLivro::salvar(ostream &O) const
{
    O << "LISTALIVRO " << N << endl;
    for (unsigned i=0; i < N ; i++)
    {
        O<<x[i];
    }
}

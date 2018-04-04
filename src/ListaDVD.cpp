#include "ListaDVD.h"

#include <iostream>
#include <limits>
#include <iomanip>

void ListaDVD::incluir(const DVD &L)
{
    DVD *novoX = new DVD[N+1];
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

void ListaDVD::excluir(unsigned id)
{
    if (N==0 or id>=N)
    {
        cerr << "Indices Errados";
        return;
    }
    DVD *novoX = new DVD[N-1];
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

void ListaDVD::imprimir() const
{
    cout << "LISTADVD " << N << endl;
    for (unsigned i=0; i < N ; i++)
    {
        cout << i << ") "<<  x[i];
    }
}

void ListaDVD::ler(istream &I)
{
    I.ignore(numeric_limits<streamsize>::max(),' ');
    unsigned n=0;
    I >> n;
    DVD *novoX = new DVD[N+n];
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

//
void ListaDVD::salvar(ostream &O) const
{
    O << "LISTADVD: " << N << endl;

    for (unsigned i=0; i < N ; i++)
    {
        O << x[i];
    }
}

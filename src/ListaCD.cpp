#include "ListaCD.h"

#include <limits>
#include <iomanip>

void ListaCD::incluir(const CD &L)
{
    CD *novoX = new CD[N+1];
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

void ListaCD::excluir(unsigned id)
{
    if (N==0 or id>=N)
    {
        cerr << "Indices Errados";
        return;
    }
    CD *novoX = new CD[N-1];
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

void ListaCD::imprimir() const
{
    cout << "ListaCDS " << N << endl;
    for (unsigned i=0; i < N ; i++)
    {
        cout << i << ") "<<  x[i];
    }
}

void ListaCD::ler(istream &I)
{
    I.ignore(numeric_limits<streamsize>::max(),' ');
    unsigned n=0;
    I >> n;
    CD *novoX = new CD[N+n];
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
void ListaCD::salvar(ostream &O) const
{
    O << "ListaCD " << N << endl;
    for (unsigned i=0; i < N ; i++)
    {
        O<<x[i];
    }
}


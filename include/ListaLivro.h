#ifndef LISTALIVRO_H
#define LISTALIVRO_H

class ListaLivro
{
private:
    Livro *x;
    unsigned N;
public:
    inline ListaLivro(): x(NULL), N(0) {}
    // Inclua os construtores, destrutor e operadores necessarios
    void incluir(const Livro &L);
    void excluir(unsigned id);
    void imprimir() const;
    void ler(istream &I);
    void salvar(ostream &O) const;
};

#endif // LISTALIVRO_H

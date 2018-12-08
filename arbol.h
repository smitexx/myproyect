#include <iostream>
#include "nodo.h"
using namespace std;

#ifndef _ARBOL_
#define _ARBOL_

class Arbol
{
  private:
    Nodo *raiz;
    void RSI(Nodo *&b);
    void RDI(Nodo *&a);
    void RSD(Nodo *&a);
    void RDD(Nodo *&a);
    int mayor(int n1, int n2);
    int altura(Nodo *a);
    void inorden(Nodo *a, int N, int &contador);
    void inorden_date(Nodo *a, Fecha f1, Fecha f2, int &contador);
    void insertar(Nodo *&a, Cuac *ref);

  public:
    Arbol();
    ~Arbol();
    void insertar(Cuac *ref);
    void last(int N);
    void date(Fecha f1, Fecha f2);
};

#endif
#include <iostream>
#include "fecha.h"
#include "cuac.h"

using namespace std;

#ifndef _NODO_
#define _NODO_

class Nodo
{
    friend class Arbol;

  private:
    Nodo *hIzq;
    Nodo *hDcho;
    Cuac *valor;
    int altura;

  public:
    Nodo();
    Nodo(Cuac *ref);
    ~Nodo();
    int altura_nodo(Nodo *a);
    int getAltura() { return this->altura; }
    Cuac *getValor() { return this->valor; }
    Nodo *getHizq() { return this->hIzq; }
    Nodo *getHdcho() { return this->hDcho; }
};

#endif
// Modulo uno
#include <iostream>
#include "fecha.h"
#include "cuac.h"
#include <list>

using namespace std;

#ifndef _TABLA_HASH_
#define _TABLA_HASH_


class TablaHash
{
  private:
    list<Cuac> tabla[10000];
    int B; //número de cubetas;
    long contador;
    int funcionDisp(string clave);
  public:
    TablaHash();
    Cuac * insertar(Cuac nuevo);
    void consultar(string nombre);
    long getContador(){ return contador;};
    
};

#endif
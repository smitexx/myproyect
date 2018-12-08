// Modulo uno
#include <iostream>
#include "tablaHash.h"
#include "arbol.h"


using namespace std;

#ifndef _DICCIONARIO_CUACS_
#define _DICCIONARIO_CUACS_

class diccionarioCuacs
{

    private:
        TablaHash tabla;
        Arbol arbol;
    public:
        diccionarioCuacs();
        void insertar(Cuac nuevo);
        void last (int n);
        void follow(string nombre);
        void date(Fecha f1, Fecha f2);
        long numElem()
            {return tabla.getContador();}
};

#endif
#include <iostream>
#include <list>
#include "fecha.h"
#include "cuac.h"
#include "interprete_c.h"
#include "diccionario_cuacs.h"

using namespace std;

    diccionarioCuacs::diccionarioCuacs(){   
        this->tabla = TablaHash();
        this->arbol = Arbol();
    }
    void diccionarioCuacs::insertar(Cuac nuevo){
        Cuac * ref = tabla.insertar(nuevo); 
        arbol.insertar(ref);
    } 
    void diccionarioCuacs::follow(string nombre){
        tabla.consultar(nombre);
    }
    void diccionarioCuacs::last(int n){
       arbol.last(n);
    }
    
    void diccionarioCuacs::date(Fecha f1, Fecha f2){
       arbol.date(f1,f2);
    }

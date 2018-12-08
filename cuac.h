// Modulo uno
#include <iostream>
#include "fecha.h"
using namespace std;

#ifndef _CUAC_
#define _CUAC_

class Cuac
{
    private:
        string nombre;
        Fecha fecha;
        string mensaje;
    public:
        void leer_mcuac();
        void leer_pcuac();
        void escribir_cuac();
        string getNombre();
        Fecha getFecha();
        string getMensaje();
        bool es_anterior(Cuac &otro); 
        bool operator< (Cuac otro) {return es_anterior(otro);}
};

#endif
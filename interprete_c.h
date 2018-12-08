#include <iostream>
#include "diccionario_cuacs.h"
using namespace std;

#ifndef _INTERPRETE_C_
#define _INTERPRETE_C_

class Interprete_c
{
    private:
        diccionarioCuacs dic;   
    public:
        Interprete_c();
        void procesar_mcuac();
        void procesar_pcuac();
        void procesar_last();
        void procesar_follow();
        void procesar_date();
        void interprete(string comando);
        void exit();
};

#endif
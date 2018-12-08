// Modulo dos
#include <iostream>
using namespace std;

#ifndef _FECHA_
#define _FECHA_

class Fecha
{
  private:
    int dia, mes, ano;
    int hora, minuto, segundo;
    long long convierte_a_segundos();

  public:
    Fecha();
    bool leer();
    void escribir();
    bool es_menor(Fecha &otra);
    bool es_igual(Fecha &otra);
    bool operator< (Fecha otra) {return es_menor(otra);}
		bool operator== (Fecha otra) {return es_igual(otra);}
   
};

#endif
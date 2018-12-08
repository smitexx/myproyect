#include <list>
#include <iostream>
#include <cmath>
#include "tablaHash.h"

using namespace std;

TablaHash::TablaHash()
{
    this->B = 10000;
    contador = 0;
}
int TablaHash::funcionDisp(string clave)
{
    int aux = clave.length();
    int suma = 0;
    for (int i = 0; i < clave.length(); i++)
    {
        int ascii = clave[i];
        suma = suma + ascii * (27 * aux);
        aux--;
    }
    return fabs(suma % B);
}

Cuac * TablaHash::insertar(Cuac nuevo)
{
    string clave = nuevo.getNombre();
    int indice = funcionDisp(clave);
    list<Cuac>::iterator it = tabla[indice].begin();
    while (it != tabla[indice].end() && nuevo.es_anterior(*it))
        it++;
    if (it == tabla[indice].end() || !nuevo.es_anterior(*it))
    {
        tabla[indice].insert(it, nuevo);
        contador++;
        it--;
        return &(*it);
    }
    return NULL;
}
void TablaHash::consultar(string nombre)
{
    int indice = funcionDisp(nombre);
    int cont = 1;
    if (tabla[indice].size() > 0)
    {
        list<Cuac>::iterator it = --tabla[indice].end();

        for (it; it != --tabla[indice].begin(); it--)
        {
            Cuac copia = *it;
            if (copia.getNombre() == nombre)
            {
                cout << cont << ". ";
                copia.escribir_cuac();
                cont++;
            }
        }
    }
    cout << "Total: " << cont - 1 << " cuac" << endl;
}

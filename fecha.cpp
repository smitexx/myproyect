#include <iostream>
#include "funciones.h"
#include "fecha.h"

using namespace std;

Fecha::Fecha()
{
    dia = 0;
    mes = 0;
    ano = 0;
    hora = 0;
    minuto = 0;
    segundo = 0;
}

bool Fecha::leer()
{

    cin >> this->dia;
    cin.ignore();
    cin >> this->mes;
    cin.ignore();
    cin >> this->ano;
    cin.ignore();
    cin >> this->hora;
    cin.ignore();
    cin >> this->minuto;
    cin.ignore();
    cin >> this->segundo;
    return true;
}
void Fecha::escribir()
{
    cout << dia << "/" << mes << "/" << ano << " ";
    if (hora < 10)
        cout << "0";
    cout << hora << ":";
    if (minuto < 10)
        cout << "0";
    cout << minuto << ":";
    if (segundo < 10)
        cout << "0";
    cout << segundo;
}
long long Fecha::convierte_a_segundos()
{
	return segundo+60*(minuto+60*(hora+24*(dia+31*((long long)mes+12*ano))));
}
bool Fecha::es_menor(Fecha &f2)
{
   return convierte_a_segundos() < f2.convierte_a_segundos();
}

bool Fecha::es_igual(Fecha &f2)
{
   	return convierte_a_segundos() == f2.convierte_a_segundos();

}

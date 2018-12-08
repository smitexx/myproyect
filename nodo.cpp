#include <iostream>
#include "nodo.h"

//FUNCIONES DEL NODO

Nodo::Nodo()
{
    this->hIzq = NULL;
    this->hDcho = NULL;
    this->valor = NULL;
    this->altura = 0;
}
Nodo::Nodo(Cuac *ref)
{
    this->hIzq = NULL;
    this->hDcho = NULL;
    this->valor = ref;
    this->altura = 0;
}
Nodo::~Nodo()
{
    delete hIzq;
    delete hDcho;
}

#include <iostream>
#include "arbol.h"

using namespace std;
//Constructor.
Arbol::Arbol()
{
    raiz = NULL;
}
//Destructor.//
Arbol::~Arbol()
{
    delete raiz;
}

//Función mayor//
int Arbol::mayor(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

//Altura del Avl.//
int Arbol::altura(Nodo *a)
{
    if (a == NULL)
    {
        return -1;
    }
    else
    {
        return a->getAltura();
    }
}
// ROTACIONES //
void Arbol::RSD(Nodo *&a)
{
    Nodo *b = a->hDcho;
    a->hDcho = b->hIzq;
    b->hIzq = a;
    a->altura = 1 + mayor(altura(a->hDcho), altura(a->hIzq));
    b->altura = 1 + mayor(altura(a), altura(b->hDcho));
    a = b;
}
void Arbol::RSI(Nodo *&b)
{
    Nodo *a = b->hIzq;
    b->hIzq = a->hDcho;
    a->hDcho = b;
    b->altura = 1 + mayor(altura(b->hIzq), altura(b->hDcho));
    a->altura = 1 + mayor(altura(b), altura(a->hIzq));
    b = a;
}
void Arbol::RDD(Nodo *&a)
{
    RSI(a->hDcho);
    RSD(a);
}
void Arbol::RDI(Nodo *&a)
{
    RSD(a->hIzq);
    RSI(a);
}
// INSERCION //
void Arbol::insertar(Nodo *&a, Cuac *ref)
{
    if (a == NULL)
    {
        a = new Nodo(ref);
    }
    //Inserción árbol izquierdo.
    else if (a->valor->es_anterior(*ref))
    {

        insertar(a->hIzq, ref);
        if ((altura(a->hIzq) - altura(a->hDcho)) > 1)
        {

            if (a->hIzq->valor->es_anterior(*ref))
            {
                RSI(a);
            }
            else
            {
                RDI(a);
            }
        }
        else
        {
            a->altura = 1 + mayor(altura(a->hIzq), altura(a->hDcho));
        }
    }
    //Insercion arbol derecho.
    else if (ref->es_anterior(*a->valor))
    {

        insertar(a->hDcho, ref);
        if ((altura(a->hDcho) - altura(a->hIzq)) > 1)
        {

            if (ref->es_anterior(*a->hDcho->valor))
            {
                RSD(a);
            }
            else
            {
                RDD(a);
            }
        }
        else
        {
            a->altura = 1 + mayor(altura(a->hIzq), altura(a->hDcho));
        }
    }
}
void Arbol::insertar(Cuac *ref)
{
    insertar(this->raiz, ref);
}
void Arbol::inorden(Nodo *a, int N, int &contador)
{
    if (a == NULL)
    {
        return;
    }
    inorden(a->hDcho, N, contador);
    if (contador == N)
    {
        return;
    }
    contador++;
    cout << contador << ". ";
    a->valor->escribir_cuac();
    inorden(a->hIzq, N, contador);
}
void Arbol::inorden_date(Nodo *a, Fecha f1, Fecha f2, int &contador)
{
    if (a == NULL)
    {
        return;
    }
    Fecha actual = a->valor->getFecha();
    if (actual.es_menor(f1))
    {
        inorden_date(a->hDcho, f1, f2, contador);
    }
    else if (!actual.es_menor(f2) && !actual.es_igual(f2))
    {
        inorden_date(a->hIzq, f1, f2, contador);
    }
    else
    {
        inorden_date(a->hDcho, f1, f2, contador);
        contador++;
        cout << contador << ". ";
        a->valor->escribir_cuac();
        inorden_date(a->hIzq, f1, f2, contador);
    }
}
void Arbol::last(int N)
{
    int aux = 0;
    inorden(this->raiz, N, aux);
    cout << "Total: " << aux << " cuac" << endl;
}
void Arbol::date(Fecha f1, Fecha f2)
{
    int aux = 0;
    inorden_date(this->raiz, f1, f2, aux);
    cout << "Total: " << aux << " cuac" << endl;
}

#include <iostream>
#include "cuac.h"
#include "funciones.h"

using namespace std;
//Métodos de consulta de la clase;
string Cuac::getNombre(){
    return nombre;
}
Fecha Cuac::getFecha(){
    return fecha;
}
string Cuac::getMensaje(){
    return mensaje;
}
void Cuac::leer_mcuac(){
    getline(cin,this->nombre);
    this->nombre = this->nombre.substr(1,nombre.length());
    fecha.leer();
    cin.ignore();
    getline(cin,this->mensaje);
}
void Cuac::leer_pcuac(){
    getline(cin,this->nombre);
    this->nombre = this->nombre.substr(1,nombre.length());
    fecha.leer();
    cin.ignore();
    int x;
    cin >> x;
    this->mensaje = devuelve_pcuac_texto(x);
}
void Cuac::escribir_cuac(){
    cout << nombre << " " ;
    this->fecha.escribir();
    cout << endl;
    cout << "   " << mensaje << endl;
}
bool Cuac::es_anterior(Cuac &otro){
    if (this->fecha==otro.fecha) {
		if (mensaje==otro.mensaje)
			return nombre < otro.nombre;
		else
			return mensaje < otro.mensaje;
	}
	else
		return otro.fecha < fecha;
}

 
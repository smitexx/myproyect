#include <iostream>
#include "interprete_c.h"

using namespace std;

    Interprete_c::Interprete_c(){
        this->dic = diccionarioCuacs();
    }
    void Interprete_c::procesar_mcuac(){
        Cuac nuevo ;
        nuevo.leer_mcuac();
        dic.insertar(nuevo);
        cout << dic.numElem() << " cuac" << endl;
    }
    void Interprete_c::procesar_pcuac(){
       Cuac nuevo ;
       nuevo.leer_pcuac();
       dic.insertar(nuevo);
       cout << dic.numElem() << " cuac" << endl;
        
    }
    void Interprete_c::procesar_last(){
        int last;
        cin >> last;
        cout << "last " << last << endl ;
        dic.last(last);
    }
    void Interprete_c::procesar_follow(){
        string follow;
        cin >> follow;
        cout << "follow " << follow << endl;
        dic.follow(follow);
    }
    void Interprete_c::procesar_date(){
        Fecha fmin, fmax;
        fmin.leer();
        fmax.leer();
        cout << "date " ;
        fmin.escribir(); 
        cout << " " ;
        fmax.escribir();
        cout << endl;
        dic.date(fmin, fmax);
    }
    void Interprete_c::interprete(string comando){
        if (comando == "pcuac") procesar_pcuac();
        else if (comando == "mcuac") procesar_mcuac();
        else if (comando == "last") procesar_last();
        else if (comando == "follow") procesar_follow();
        else if (comando == "date") procesar_date();
    }

int main(){
    
    Cuac actual;
    Interprete_c bash = Interprete_c();
    string comando;
    while (cin >> comando && comando!="exit")
        bash.interprete(comando);
    return 0;
}
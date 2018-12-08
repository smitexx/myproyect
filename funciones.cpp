#include <iostream>
#include "funciones.h"

using namespace std;

string CADENAS[30] = {

    "Afirmativo.",
    "Negativo.",
    "Estoy de viaje en el extranjero.",
    "Muchas gracias a todos mis seguidores por vuestro apoyo.",
    "Enhorabuena, campeones!",
    "Ver las novedades en mi pagina web.",
    "Estad atentos a la gran exclusiva del siglo.",
    "La inteligencia me persigue pero yo soy mas rapido.",
    "Si no puedes convencerlos, confundelos.",
    "La politica es el arte de crear problemas.",
    "Donde estan las llaves, matarile, rile, rile...",
    "Si no te gustan mis principios, puedo cambiarlos por otros.",
    "Un dia lei que fumar era malo y deje de fumar.",
    "Yo si se lo que es trabajar duro, de verdad, porque lo he visto por ahi.",
    "Hay que trabajar ocho horas y dormir ocho horas, pero no las mismas.",
    "Mi vida no es tan glamurosa como mi pagina web aparenta.",
    "Todo tiempo pasado fue anterior.",
    "El azucar no engorda... engorda el que se la toma.",
    "Solo los genios somos modestos.",
    "Nadie sabe escribir tambien como yo.",
    "Si le molesta el mas alla, pongase mas aca.",
    "Me gustaria ser valiente. Mi dentista asegura que no lo soy.",
    "Si el dinero pudiera hablar, me diria adios.",
    "Hoy me ha pasado una cosa tan increible que es mentira.",
    "Si no tienes nada que hacer, por favor no lo hagas en clase.",
    "Que nadie se vanaglorie de su justa y digna raza, que pudo ser un melon y salio una calabaza.",
    "Me despido hasta la proxima. Buen viaje!",
    "Cualquiera se puede equivocar, inclusivo yo.",
    "Estoy en Egipto. Nunca habia visto las piramides tan solas.",
    "El que quiera saber mas, que se vaya a Salamanca."};

int devuelve_pcuac_texto(string frase)
{
    if (frase.length() > 140){
        return 0;
    }
    for (int i = 0; i < 30; i++)
    {
        
        if (CADENAS[i] == frase)
        {
            return i + 1;
        }
    }
   
    return 0;
}

string devuelve_pcuac_texto(int indice){
    
        
            if (indice > 0 && indice <= 30){
               return CADENAS[ indice - 1 ]  ;
            }
        
        return "" ;
    }

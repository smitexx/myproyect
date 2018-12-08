# Un comentario de make
# Poner todas las dependencias directas o indirectas.

# Primera linea linka todos los ficheros objeto.
a.out: arbol.o nodo.o tablaHash.o diccionario_cuacs.o interprete_c.o cuac.o fecha.o funciones.o
	g++ arbol.o nodo.o tablaHash.o diccionario_cuacs.o interprete_c.o cuac.o fecha.o funciones.o 

# Demas ficheros objetos compilados de nuevo.
arbol.o: arbol.cpp arbol.h
	g++ -c arbol.cpp
nodo.o: nodo.cpp nodo.h
	g++ -c nodo.cpp
tablaHash.o: tablaHash.cpp tablaHash.h 
	g++ -c tablaHash.cpp
diccionario_cuacs.o: diccionario_cuacs.cpp diccionario_cuacs.h  
	g++ -c diccionario_cuacs.cpp
interprete_c.o: interprete_c.cpp interprete_c.h 
	g++ -c interprete_c.cpp
cuac.o: cuac.cpp cuac.h funciones.h
	g++ -c cuac.cpp
fecha.o: fecha.cpp fecha.h 
	g++ -c fecha.cpp
funciones.o: funciones.cpp funciones.h 
	g++ -c funciones.cpp
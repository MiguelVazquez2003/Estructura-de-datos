
#include <stdio.h>
#include "alumno.h"
typedef struct Nodo{
	Alumno alumno;
	struct Nodo* siguiente;
}Nodo;
typedef struct Lista{
	Nodo* cabeza;
	int cantidad;
}Lista;

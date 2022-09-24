#include <stdio.h>
#include <stdlib.h>
struct alumno{
	int matricula;
	char *nombre;
	float promedio;
};
typedef struct nodo{
	struct alumno alumno;
	struct nodo*siguiente;
	
}NODO;


NODO* CrearNodo(struct alumno alumno);
int InsertarInicio(NODO **cabeza,struct alumno alumno)
{
	NODO*nuevo=NULL;
	nuevo=CrearNodo(alumno);
	if(nuevo!=NULL){
		nuevo->siguiente=*cabeza;
		*cabeza=nuevo;
		return 1;
	}
	else{
	return 0;
}
}


main()
{
	NODO *cabeza=NULL;
	
	
	return 0;
}
NODO* CrearNodo(struct alumno alumno){
	NODO *nuevo=NULL;
	nuevo=(NODO*)malloc(sizeof(NODO));
	if(nuevo!=NULL){
		nuevo->alumno=alumno;
		nuevo->siguiente=NULL;
	}
	return nuevo;
}


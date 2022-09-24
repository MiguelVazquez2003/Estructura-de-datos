#include "lista.h"
#include <stdlib.h>
#include <string.h>
void PedirDatos(int,float,char);
void InsertarPrincipio(Lista* lista,Alumno *alumno);
int main()
{		int matricula;
float promedio;
char nombre[50];
	Nodo*lista=NULL;
	system("color f0");
	int opcion;
	int opcion2;


	do{
	system("cls");
	printf("a.Dar de alta a un alumno\nb. Editar datos del alumno\nc. Dar de baja al alumno\nd. Mostrar alumnos\n");
	printf("e. Mostrar alumnos por matricula\nf. Mostrar alumnos por promedio\ng.Calcular promedio por grupo\nh. Salir\n");
	printf("Ingrese la opcion que desea: ");
	scanf("%d",&opcion);
	
	switch(opcion){
		
		case 'a':
do{

	int opcion2;




	
	
	
}while(opcion2=='s');

			
			
			break;
			case 'b':
				break;
				case 'c':
					break;
					case 'd':
						break;
						case 'e':
							break;
							case 'f':
								break;
								case 'g':
									break;
									case 'h':
										break;
										default: 
										printf("Ingrese una opcion del a a la h");
	}
}while(opcion!='h');
	return 0;
	
}


Nodo* CrearNodo(Alumno* alumno)
{
	Nodo* nodo=(Nodo *)malloc(sizeof(Nodo));
	strncpy(nodo->alumno.nombre,alumno->nombre,50);
	nodo->alumno.matricula=alumno->matricula;
	nodo->alumno.promedio=alumno->promedio;
	nodo->siguiente=NULL;
	return nodo;
}
void DestruirNodo(Nodo* nodo)
{
	free(nodo);
}
void InsertarPrincipio(Lista *lista,Alumno *alumno)
{

	Nodo* nodo=CrearNodo(alumno);
	nodo->siguiente=lista->cabeza;
	lista->cabeza=nodo;
	lista->cantidad++;
		fflush(stdin);
	
}
void InsertarFinal(Lista* lista,Alumno* alumno)
{
	Nodo* nodo=CrearNodo(alumno);
	if(lista->cabeza==NULL){
		lista->cabeza=nodo;
	}
	else{
	
	Nodo* puntero=lista->cabeza;
	while(puntero->siguiente==NULL){
		puntero=puntero->siguiente;
	}
	puntero->siguiente=nodo;
}
	lista->cantidad++;
}
void Insertarluego(int n, Lista* lista,Alumno* alumno)
{
	Nodo *nodo=CrearNodo(alumno);
	if(lista->cabeza==NULL)
	{
		lista->cabeza=nodo;
	}
	else{
		Nodo* puntero=lista->cabeza;
		int posicion=0;
		while(posicion<n && puntero->siguiente){
			puntero=puntero->siguiente;
			posicion++;
		}
		nodo->siguiente=puntero->siguiente;
		puntero->siguiente=nodo;
	}
}
Alumno* Obtener(int n, Lista* lista)
{
	if(lista->cabeza==NULL)
	{
		return NULL;
	}
	else{
			Nodo* puntero=lista->cabeza;
		int posicion=0;
		while(posicion<n && puntero->siguiente){
			puntero=puntero->siguiente;
			posicion++;
		}
		if(posicion!=n)
		{
			return NULL;
		}
		else{
		
		return &puntero->alumno;
	}
	}
		lista->cantidad++;
}
int CantidadAlumnos(Lista* lista)
{
	return lista->cantidad;
}
void EliminarPrincipio(Lista* lista){
	if(lista->cabeza){
	
	Nodo* eliminar=lista->cabeza;
	lista->cabeza=lista->cabeza->siguiente;
	DestruirNodo(eliminar);
	lista->cantidad--;
}
}

void EliminarFinal(Lista* lista){
	if(lista->cabeza){
		if(lista->cabeza->siguiente){
		
		Nodo* puntero=lista->cabeza;
		while(puntero->siguiente->siguiente){
			puntero=puntero->siguiente;
		}
		Nodo* eliminar=puntero->siguiente;
			puntero->siguiente=NULL;
			DestruirNodo(eliminar);
			lista->cantidad--;
		}else{
			Nodo* eliminar=lista->cabeza;
			lista->cabeza=NULL;
			DestruirNodo(eliminar);
			lista->cantidad--;
		}
			}
	
	}


void Eliminaralumno(int n, Lista* lista){
	if(n==0){
		Nodo* eliminar=lista->cabeza;
		lista->cabeza=NULL;
		DestruirNodo(eliminar);
		lista->cantidad--;
	
	if(lista->cabeza){
		Nodo* puntero=lista->cabeza;
		int contador=0;
		while(contador<(n-1)){
			puntero=puntero->siguiente;
			contador++;
		}
		Nodo* eliminar=puntero->siguiente;
		puntero->siguiente=eliminar->siguiente;
		DestruirNodo(eliminar);
		lista->cantidad--;
	} else if(n<lista->cantidad){
		Nodo* eliminar=lista->cabeza;
		lista->cabeza=NULL;
		DestruirNodo(eliminar);
		lista->cantidad--;
	}
	}
}





#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{

char*nombre;
struct nodo*siguiente;


}Alumno;


Alumno *listaAlumno(Alumno*Lista){
	Lista=NULL;
	return Lista;
	
}
Alumno *agregarAlumno(Alumno *Lista,char *nombre)
{
	Alumno*nuevoAlumno,*aux;
	nuevoAlumno=(Alumno*)malloc(sizeof(Alumno));
	nuevoAlumno->nombre=nombre;
	nuevoAlumno->siguiente=NULL;
	if(Lista==NULL)
	{
		Lista=nuevoAlumno;
	}
	else{
		aux=Lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		
		}
			aux->siguiente=nuevoAlumno;
	}
	return Lista;
}
int main()
{
	Alumno*Lista=listaAlumno(Lista);

	Lista=agregarAlumno(Lista,"Cristina Diaz");	
	while(Lista!=NULL)
	{
		printf("%s",Lista->nombre);
		Lista=Lista->siguiente;
	}
	
	return 0;
}

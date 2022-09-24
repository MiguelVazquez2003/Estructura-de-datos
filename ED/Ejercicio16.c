#include <stdio.h>
#include <stdlib.h>
/*
Realizar un programa con las operaciones básicas de un árbol binario. El programa debe de permitir a partir de un menú:
Ingresar nuevos elementos de tipo entero al árbol.
Buscar si un elemento existe en el árbol.
Mostrar todos los elementos en el árbol.
Eliminar elementos de un árbol.
*/


struct nodo{
	int dato;
	struct nodo *izquierdo;
	struct nodo *derecho;
};
typedef struct nodo NODO;
typedef NODO *PTNODO;
void eliminar(PTNODO *arbol,int eliminar_dato);
void buscar(PTNODO arbol,int buscar);
void insertar(PTNODO *arbol,int dato);
void mostrar(PTNODO arbol);
PTNODO crear_nodo(int );
main()
{
	PTNODO raiz=NULL;
	int opcion,dato;
	printf("1.Ingresar elemento\n2.Buscar elemento\n3.Mostrar elementos\n4.Eliminar elementos\nIngrese una opcion: ");
	scanf("%d",&opcion);
do{
	
	switch(opcion)
	{
		case 1:
		printf("Ingrese el dato: ");
	scanf("%d",&dato);
	insertar(&raiz,dato);
			break;
			case 2:
				printf("Ingrese el dato a buscar: ");
				scanf("%d",&dato);
				buscar(raiz,dato);
				break;
				case 3:
					mostrar(raiz);
					break;
					case 4:
						printf("\nIngrese el dato a eliminar: ");
						scanf("%d",&dato);
						eliminar(&raiz,dato);
						break;
	}
}while(opcion!=4);
	return 0;
}
PTNODO crear_nodo(int dato)
{
	PTNODO nuevo_nodo=malloc(sizeof(NODO));
	nuevo_nodo->dato=dato;
	nuevo_nodo->izquierdo=NULL;
	nuevo_nodo->derecho=NULL;	//verificar que no tenga hijos a la izq o derecha
	return nuevo_nodo;			
}
void insertar(PTNODO *arbol,int dato)
{
	if(*arbol==NULL)
	{
	PTNODO nodo=crear_nodo(dato);
	*arbol=nodo;
	}
	else{
		if((*arbol)->dato>dato){
			insertar(&(*arbol)->izquierdo,dato);
		}
	else{
		insertar(&(*arbol)->derecho,dato);
	}
		
	}
}
void mostrar(PTNODO arbol)
{
	if(arbol->izquierdo!=NULL)
	{
		mostrar(arbol->izquierdo);
	}
	printf("%d ",arbol->dato);
	if(arbol->derecho!=NULL)
	{
		mostrar(arbol->derecho);
	}
}
//puede ser recursivo o no en este caso no lo hicimos recursivo
void buscar(PTNODO arbol,int buscar_dato)
{
	while(arbol!=NULL)
	{
		if(arbol->dato==buscar_dato)
		{
			break;
		}
		if(arbol->dato>buscar_dato){
			arbol=arbol->izquierdo;
		}
		else{
			arbol=arbol->derecho;
		}
	}
	if(arbol!=NULL){
	printf("\nSe encontro el dato %d",buscar_dato);
	}
	else{
		printf("\nNo se encontro el dato %d",buscar_dato);
	}
	
}
void eliminar(PTNODO *arbol,int eliminar_dato){
	if((*arbol)==NULL){
		printf("No se encontro el dato %d\n",eliminar_dato);
		return;
	}
	if((*arbol)->dato==eliminar_dato){
		PTNODO temporal=*arbol;
		if(temporal->izquierdo==NULL && temporal->derecho==NULL){
			*arbol=NULL;
	
		}
		else if(temporal->izquierdo!=NULL && temporal->derecho==NULL){
		*arbol=temporal->izquierdo;
		}
		else if (temporal->izquierdo==NULL && temporal->derecho!=NULL){
		*arbol=temporal->derecho;
	
		}
		else{
			*arbol=temporal->izquierdo;
			PTNODO max=temporal->izquierdo;
			while(max->derecho!=NULL){
				max=max->derecho;
			}
			max->derecho=temporal->derecho;
		}
		free(temporal);
		printf("Se elimino dato %d\n",eliminar_dato);
	}else{
		if((*arbol)->dato > eliminar_dato){
			eliminar(&(*arbol)->izquierdo,eliminar_dato);
		}
		else{
		eliminar(&(*arbol)->derecho,eliminar_dato);	
		}
	}
}




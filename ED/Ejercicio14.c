#include <stdio.h>
#include <stdlib.h>

struct nodo {
	int dato;
	struct nodo *siguiente;
};

typedef struct nodo NODO;
typedef NODO *PTNODO;
void calcularMayorMenor(PTNODO lista);
void insertar(PTNODO *lista, int dato);
void imprimir(PTNODO lista);
void buscar(PTNODO lista, int dato);
void eliminar(PTNODO *lista, int dato);
void BorrarLista(PTNODO *lista);

int main() {
	PTNODO lista = NULL;
	int dato,mayor,menor;
	int opcion;
	char dec;
			system("cls");
	printf("1.Agregar un nuevo elemento: \n");
	printf("2.Mostrar todos los elementos de la lista: \n");
	printf("3.Buscar un elemento especifico\n ");
	printf("4.Salir\n");
	do{
		
	printf("\nIngrese una opcion: \n");
	scanf("%d",&opcion);

	switch(opcion)
	{
	
		case 1:
		do{
	printf("Ingrese un nuevo valor: ");
	scanf("%d",&dato);
	insertar(&lista, dato);
	fflush(stdin);
	printf("\nDesea agregar otro nodo: ");
	scanf("%s",&dec);
		}while(dec=='s' || dec=='S');
			break;
			case 2:
			imprimir(lista);
				break;
				case 3:
					/*printf("Ingrese un elemento a buscar: ");
					scanf("%d",&dato);
					buscar(lista,dato);*/
					calcularMayorMenor(lista);
					break;
					case 4:

								default:
									printf("Ingrese una opcion del 1 al 6\n");
		}
			}while(opcion!=4);

	
	
	

	
	return 0;
}


void insertar(PTNODO *lista, int dato){
	PTNODO nuevo_nodo = malloc(sizeof(NODO));
	nuevo_nodo->dato = dato;
	PTNODO actual = *lista;
	PTNODO previo = NULL;
	
	while(actual != NULL /*&& actual->dato < dato*/ ) {
		previo = actual;
		actual = actual->siguiente;
	}
	
	if(previo == NULL) {
		*lista = nuevo_nodo;
		//nuevo_nodo->siguiente = actual;
	} else {
		previo->siguiente = nuevo_nodo;
	//	nuevo_nodo->siguiente = actual;
	}
		nuevo_nodo->siguiente = actual;
	printf("Se ingreso el valor de %d\n", dato);
}

void imprimir(PTNODO lista){
	PTNODO actual = lista;
	printf("lista -> ");
	while(actual != NULL) {
		printf("%d -> ", actual->dato);
		actual = actual->siguiente;
	}
	
	printf("NULL\n");
}

void buscar(PTNODO lista, int dato){
	PTNODO actual = lista;
	
	while(actual != NULL && actual->dato < dato) {
		actual = actual->siguiente;
	}
	
	if(actual != NULL && actual->dato == dato) {
		printf("Se encontr%c el elemento %d.\n", 162, dato);
	} else {
		printf("No se encontr%c el elemento %d.\n", 162, dato);
	}
}

void eliminar(PTNODO *lista, int dato){
	PTNODO actual = *lista;
	PTNODO previo = NULL;
	
	while(actual != NULL && actual->dato < dato) {
		previo = actual;
		actual = actual->siguiente;
	}
	
	if(actual != NULL && actual->dato == dato) {
		previo->siguiente = actual->siguiente;
		int dato_eliminado = actual->dato;
		free(actual);
		printf("Se elimin%c el valor de %d\n", 162, dato_eliminado);
	} else {
		printf("No se pudo eliminar el dato.\n");
	}
}
void BorrarLista(PTNODO *lista) {
   PTNODO nodo;

   while(*lista) {
      nodo = *lista;
      *lista = nodo->siguiente;
      free(nodo);
      
   }
   printf("Se ha eliminado la lista\n");
}

void calcularMayorMenor(PTNODO lista){
	int mayor=0,menor=99999;
		while(lista != NULL /*&& actual->dato < dato*/ ) {
		if((lista->dato)>mayor){
			mayor=lista->dato;
		}
		if((lista->dato)<menor){
			menor=lista->dato;
		}
		lista=lista->siguiente;
	}
	printf("El mayor es: %d y el menor es: %d\n",mayor,menor);
}


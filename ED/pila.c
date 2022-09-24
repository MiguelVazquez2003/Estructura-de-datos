#include <stdio.h>
#include "nodo.h"
#include "operaciones_pila.h"

int main () {
	PTNODO pila = NULL;
	
	int opcion;
	char letra;
		printf("\t\t1.Agregar un nodo\n\t\t2.Eliminar el ultimo nodo\n\t\t3.Imprimir la pila\n\t\t4.Salir");
		do{
		
	printf("\nIngrese una opcion: \n");
	scanf("%d",&opcion);

	switch(opcion)
	{
	
		case 1:
		fflush(stdin);
	printf("Ingrese una letra: ");
	scanf("%c",&letra);
	// Se ingresa un nuevo elemento a la pila.
	insertar(&pila,letra);
	printf("\n");

			break;
			case 2:
	// Se elimina el último elemento en la pila 
	eliminar(&pila);
				
				break;
				case 3:
				// Se muestran todos los elementos en la pila 
				imprimir(pila);
				// Se muestra el último elemento en la pila 
				mostrar(pila);
				
					break;
					case 4:
								default:
									printf("Ingrese una opcion del 1 al 4\n");
		}	}while(opcion!=4);

	

	
	

	
	

	
	// Se muestra el último elemento en la pila 
	mostrar(pila);
	return 0;
}

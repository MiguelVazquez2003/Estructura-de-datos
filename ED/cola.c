#include <stdio.h>
#include <stdio.h>
#include "nodo.h"
#include "operaciones_cola.h"

int main () {
	PTNODO frente = NULL;
	PTNODO fin = NULL;
	int opcion;
	char caracter;

	
	printf("\t\t1.Agregar un nodo\n\t\t2.Eliminar un nodo\n\t\t3.Imprimir la cola\n\t\t4.Salir");

	do{
		
	printf("\nIngrese una opcion: \n");
	scanf("%d",&opcion);

	switch(opcion)
	{
	
		case 1:
		fflush(stdin);
	printf("Ingrese el caracter: ");
	scanf("%c",&caracter);
	insertar(&frente,&fin,caracter);
	printf("\n");

			break;
			case 2:
				fflush(stdin);
				printf("Ingrese el caracter a eliminar: ");
					scanf("%c",&caracter);
				eliminar(&frente,&fin);
				break;
				case 3:
				imprimir(frente);
				mostrar_extremo(frente);
				mostrar_extremo(fin);
					break;
					case 4:
								default:
									printf("Ingrese una opcion del 1 al 4\n");
		}	}while(opcion!=4);
	
	// Se ingresa un nuevo elemento al fin de cola (7)
	/*insertar(&frente, &fin, 'd');
	
	// Se ingresa un nuevo elemento al fin de cola (10)
	insertar(&frente, &fin, 'e');
	
	// Se elimina el elemento al frente de la cola
	eliminar(&frente, &fin);
	*/	
	return 0;
}

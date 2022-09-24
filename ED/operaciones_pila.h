#include <stdio.h>
#include <stdlib.h>

void insertar(PTNODO *pila, char letra) {
	// Crear un nuevo nodo de informacion.
	PTNODO nuevo_nodo = malloc(sizeof(NODO));
	
	// Asignar el valor a insertar en el elemento creado.
	nuevo_nodo->letra = letra;
	
	// Ligar la pila con el nuevo nodo.
	nuevo_nodo->siguiente = *pila;
	
	// Actualizar el valor de la pila al elemento creado.
	*pila = nuevo_nodo;
	
	printf("Se ingres%c el valor %c a la pila.\n", 162, letra);
}

void eliminar(PTNODO *pila) {
	// Crear un nuevo nodo que apunte al valor de la pila actual.
	PTNODO temporal = *pila;
	
	// Verificar que la pila no se encuentre vacía.
	if (temporal != NULL) {
		// Actualizar el valor de la pila a su siguiente elemento en caso de que no se encuentre vacía.
		*pila = temporal->siguiente;
		
		// Liberar la memoria del nodo creado.
		free(temporal);
		
		printf("Se elimin%c el %cltimo elemento de la pila.\n", 162, 163);
	} else {
		printf("La pila se encuentra vac%ca.\n", 161);
	}
}

void mostrar(PTNODO pila) {
	if(pila != NULL) {
		printf("El %cltimo valor de la pila es: %c\n", 163, pila->letra);
	} else {
		printf("La pila se encuentra vac%ca.\n", 161);
	}
}

void imprimir(PTNODO pila) {
	printf("Los valores de la pila son:\nPILA -> ");
	
	// En un ciclo verificar que el nodo de la pila no se encuentre vacío.
	while(pila != NULL) {
		
		// Imprimir el valor del nodo de la pila.
		printf("%c -> ", pila->letra);
		
		// Recorrer la pila al siguiente elemento.
		pila = pila->siguiente;
	}
	printf("NULL\n");
}

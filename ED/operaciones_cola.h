#include <stdio.h>
#include <stdlib.h>
void insertar(PTNODO *frente, PTNODO *fin, char caracter) {
	// Se crea un nuevo nodo de información.
	PTNODO nuevo_nodo = malloc(sizeof(NODO));
	
	// Se asignan los datos a insertar en el nuevo nodo.
	nuevo_nodo->caracter = caracter;
	nuevo_nodo->siguiente = *fin;
	
	// Se verifica si el valor de inicio esta vacío.
	if (*frente == NULL) {
		// Si lo esta actualizar su valor con el nuevo nodo.
		*frente = nuevo_nodo;
	} else {
		// Si frente tiene valor, actualizar el siguiente valor de fin.
		(*fin)->siguiente = nuevo_nodo;
	}
	
	// Se actualiza el valor del fin.
	*fin = nuevo_nodo;
	
	printf("Se ingres%c el valor %c a la cola.\n", 162, caracter);
}

void eliminar(PTNODO *frente, PTNODO *fin) {
	// Crear un nuevo puntero que apunte al valor del fin.
	PTNODO temporal = *frente;
	
	// Se verifica si el frente y el fin están apuntando al mismo elemento.
	if(*frente == *fin) {
		// De ser verdadero igualar ambos a NULL.
		*frente = NULL;
		*fin = NULL;
	} else {
		// De ser falso recorrer el valor de frente.
		*frente = temporal->siguiente;
	}
	
	// Se libera de memoria el elemento en nuestro puntero temporal.
	free(temporal);
	
	printf("Se elimin%c el elmento al frente de la cola.\n", 162);
}

void mostrar_extremo(PTNODO extremo) {
	// Verificar si el extremo no esta vacío.
	if(extremo != NULL) {
		// De ser verdadero, mostrar el elemento del extremo
		printf("El valor en el extremo ingresado es: %c\n", extremo->caracter);
		printf("\n\n");
	} else {
		printf("La cola se encuentra vac%ca.\n", 161);
	}
}

void imprimir(PTNODO frente) {
	printf("Los valores de la cola son:\nFRENTE -> ");

	
	// Comprobar que el frente no se encuentre vacío.
	while(frente != NULL) {
		
		// Imprimir el valor del nodo.
		printf("%c -> ", frente->caracter);
		
		// Recorrer el frente.
		frente = frente->siguiente;
	}
	printf("NULL\n");
}

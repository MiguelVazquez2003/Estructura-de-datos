
#include <stdio.h>
#include <stdlib.h>
//manera dinamica
struct vertice{
	int valor;
	struct vertice *siguiente;
	
};

struct aristas{
	struct vertice *nodo;
	int peso;
	struct arista *siguiente;
};
typedef struct vertice Vertice;
typedef Vertice *PTVertice;
typedef struct aristas Arista;
typedef Arista *PTArista;

//eliminar vertice
void eliminarVertice(PTVertice *grafo, int valor);
//agregar vertice
void ingresarVertice(PTVertice *grafo, int valor);
// ingresar arco o arista
void ingresarArista(PTVertice *grafo, int origen, int destino,int peso);
//eliminar arco o arista
void eliminarArista(PTVertice *grafo, int origen, int destino, int peso);

main(){
	/*Vertice vertice;
	vertice.valor=0;
	
	PTVertice=ptvertice;
	ptvertice=&vertice;
	
	printf("%d\n",vertice->valor);
	printf("%d\n",ver)
	*/
	PTVertice grafo=NULL;
	ingresarVertice(&grafo,1);
	ingresarVertice(&grafo,2);
	
	printf("El valor del vertice 1 es: %d",)
	return 0;
}
voidingresarVertice(PTVertice *grafo, int valor){
	printf("Ingresando vertice\n.....");
//crear nodo
PTVertice nuevo_vertice=malloc(sizeof(PTVertice));
//asignar valores a nodo
nuevo_vertice->valor=valor;
nuevo_vertice->siguiente=NULL;
//insertar nodo alista enlazada
if(grafo==NULL){
	*grafo=nuevo_vertice;
}	
else{
	nuevo_vertice->siguiente=*grafo;
	*grafo=nuevo_vertice;
}
printf("Se ingreso el valor %d\n",valor);
}

void eliminarVertice(PTVertice *grafo, int valor){
	
}
void ingresarArista(PTVertice *grafo, int origen, int destino,int peso){
	
//recorrer a buscar origen
PTVertice vertice_origen=*grafo;
vertice_destino=*grafo;

while(vertice_origen->valor==NULL && vertice_origen->valor!=origen){
	vertice_origen=vertice_origen->siguiente;
}
//recorrer a buscar destino	
while(vertice_destino->valor==NULL && vertice_destino->valor!=destino){
	vertice_destino=vertice_destino->siguiente;
}


}
void eliminarArista(PTVertice *grafo, int origen, int destino, int peso){
	
}


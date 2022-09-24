#include <stdio.h>

int main()
{
	//recorridos de un arbol
	/*preorder
primero accion luego recorrer 
	inorder
	primero recorro a la izquierda luego imprimo depsues recorro a la derecha
	postorder*/
	printf("\n\nPreorden: ");
	
}

void preorder(PT NODO arbol)
{
	//verificar si esta vacio
	
	if(arbol==NULL)
	{
		return;
	}
	/*si no* imprimimos su valor*/
	//primero raiz, luego//
	printf("%d - ",arbol->dato );
	//primero izquierda luego derecha porque es arbol ordenado, menor izquierda mayor derecha//
	preorder(arbol->izquierda);
	
	preorder(arbol->derecha);
}
void inorder(PT NODO arbol)
{
	//verificar si esta vacio
	if(arbol==NULL)
	{
		return;
	}
	
	inorder(arbol->izquierda);
	printf("%d - ",arbol->dato);
	inorder(arbol->derecha);
}
void postorder(PT NODO arbol)
{
	if(arbol==NULL)
	{
		return;
	}
	postorder(arbol->izquierda);
	postorder(arbol->derecha);
	printf("%d - ",arbol->dato);
}


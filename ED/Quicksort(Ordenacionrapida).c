// divide y venceras
/*
es el mas pequeño de codigo, mas rapido de media, mas elegante, interesante y eficiente de los algoritmos de ordenacion
el mas eficiente en tiempo es quicksort pues es ordenacion rapida en español
divide los n elementos de una lista o un arreglo en dos partes o particiones
pasos:
1. seleccionar el elemento central del a[] como pivote
2. Dividir los restantes elementos en particiones izquierda y derecha 
 de modo que ningun izq>pivote derecha<pivote
3. Ordenar la particion izqiuerda utilizando quicksort recursivamente
4. Ordenar la particion derecha utilizando quicksort recursivamente
5.la solucion esparticion izquierda seguida por el pivote y la particion derecha
8 3 6 4 2 5 7 1   - 7 posiciones
central=(primero+ultimo)/2
central=(0+7)/2=3.5
central=3
pivote=a[central]
entonces mi pivote en la posicion 3 seria 
4
i=izquierda j=derecha
izq<pivote derecha>pivote
-8 3 6 -4 
8<4 no

-4 2 5 7 1
1>4 no
ninguno de los dos cumple, intercambiamos
1 -3 6 4 2 5 -7 8
3<4 si
6<4 no
7>4 si
5>4 si
2>4 no
no cumple 6 ni 2 

1.el i y el j señalan la misma casilla- primera vuelta
2. el y el j se crucen
vemos que ya se cumple la condicion
izq<pivote derecha>pivote
ahora dividemos el arreglo
1 3 2 -4- 6 5 7 8

 1 3 2 4                  6 5 7 8
 volveremos a hacer como si fuera uno mismo:
 central=(primero+ultimo)/2           central=(primero+ultimo)/2=(0+3)/2=1.5=1
 central=(0+3)/2=1.5=1					pivote=5
 pivote=3
 
 1<3 si								6<5 no
3<3 no 								8>si
4>3 si								7>5	
2>3 no								5>5 no
1 2 3 4 							5 6 7 8 
1 2 3 4 5 6 7 8  								
 
*/
#include <stdio.h>
#include <conio.h>
void quickSort(int a[],int primero,int ultimo);
int main(){
	int i;
	int a[10];
		for(i=0;i<10;i++){
printf("Ingrese el numero en la posicion %d: ",i);
scanf("%d",&a[i]);
}
quickSort(a,0,9);
printf("Arreglo ordenado en forma ascendente: \n");
for(i=0;i<10;i++){
	printf("%d|",a[i]);
}
printf("\nArreglo ordenado en forma descendente: \n");
for(i=9;i>=0;i--){
	printf("%d|",a[i]);
}
	getch();
	return 0;
}
void quickSort(int a[],int primero,int ultimo){
	int i,j,central,pivote,aux; //pivote del tipo de dato del arreglo
	central=(primero+ultimo)/2;
	pivote=a[central];
	i=primero;//izquierda
	j=ultimo;//derecha
	
	do{
		while(a[i]<pivote) i++;
		while(a[j]>pivote) j--;
		
		if(i<=j){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
	//	intercambio(a[i],a[j]);
		//a[j],a[k]
		i++;
		j--;	
		}
	}while(i<=j); //cuando i y j se crucen
	
	//segundo paso en el que izq<pivote derecha>pivote
	if(primero < j){
		quickSort(a,primero,j); //ordenamos la sublista izquierda
		
	}	
	if(i<ultimo){
		quickSort(a,i,ultimo); //ordenamos la sublista derecha
	}
}

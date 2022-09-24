#include <stdio.h>
#include <conio.h>
/*
a[5]={3,2,1,4,5}; dato=4;

no hace falta que este ordenada, a comparacion de la busqueda binaria que ocupan que este en orden ascendente

*/
int main(){
int a[5]={3,2,1,4,5};
char flag='F';
int i,dato;

//busqueda secuencial
printf("Ingrese el dato a buscar: \n");
scanf("%d",&dato);
i=0;
while((flag=='F')&&(i<5)){
	if(a[i]==dato){
		flag='V';
	}
i++;	
}
if(flag=='F'){
	printf("No se encontro el numero ");
}
else if(flag=='V'){
	printf("Se encontro el numero en la posicion %d ",i-1);
}

	
	getch();
	return 0;
}

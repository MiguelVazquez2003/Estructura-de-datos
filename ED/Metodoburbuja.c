#include <stdio.h>
#include <conio.h>
/*numero anterior>numero siguiente
cambio
4 5 2 1 3 
4 > 5 no
5>2 si intercambio
4 2 5 1 3
5>1 si intercambio
4 2 1 5 3
5>3 si intercambio
4 2 1 3 5
4>2 si intercambio
2 4 1 3 5
4>1 si intercambio
2 1 4 3 5
4>3 si intercambio
2 1 3 4 5
4>5 no
2>1 si intercambio
1 2 3 4 5 
no es muy eficiente con grandes cantidades de numeros 1000,2000 
solo es eficiente con 10, y pequeñas cantidades
peor de los casos
20 15 10 9 6 3 2
porque esta invertida

*/
int main(){

//	int a[5]={4,5,2,1,3};
int a[5];
	int i,j,aux;

	
	for(i=0;i<5;i++){
printf("Ingrese el numero en la posicion %d: ",i);
scanf("%d",&a[i]);
}
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++){
			if(a[j]>a[j+1]){ //numero anterior > numero siguiente
					aux=a[j];
			         a[j]=a[j+1];
			         a[j+1]=aux;
		}
	}
}
printf("ASCENDENTE: \n");
for(i=0;i<5;i++){
	printf("%d ",a[i]);
}	
printf("\nDESCENDENTE: \n");
for(i=4;i>=0;i--){
	printf("%d ",a[i]);
}

	getch();
	return 0;
}

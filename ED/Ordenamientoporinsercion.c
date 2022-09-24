#include <stdio.h>
#include <conio.h>

int main(){
	//int a[5]={3,4,5,1,2};
	int i,pos,aux;
int a[5];
	for(i=0;i<5;i++){
printf("Ingrese el numero en la posicion %d: ",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
	pos=i;
	aux=a[i];
	while((pos>0)&&(aux<a[pos-1])){
		a[pos]=a[pos-1];
		pos--;
	}
	a[pos]=aux;
}
	printf("Ascendente: \n");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
	printf("\nDescendente: \n");
	for(i=4;i>=0;i--){
		printf("%d ",a[i]);
	}
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
int main()
{
//	int a[]={3,4,1,5,2};
int a[5];
	
	int i,j,aux;
	int min;
		for(i=0;i<5;i++){
printf("Ingrese el numero en la posicion %d: ",i);
scanf("%d",&a[i]);
}
	for(i=0;i<5;i++){
		min=i;
		for(j=i+1;j<=5;j++){
			if(a[j]<a[min]){
				min=j;
				
			}
		}
		aux=a[i];
		a[i]=a[min];
		a[min]=aux;
	}
	printf("Ascendente\n");
	for(i=0;i<5;i++){
		printf("%d ",a[i+1]);
	}
	printf("\nDescendente\n");
	for(i=4;i>=0;i--){
		printf("%d ",a[i+1]);
	}
	getch();
	return 0;
}

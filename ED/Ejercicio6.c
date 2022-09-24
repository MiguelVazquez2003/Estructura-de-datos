#include <stdio.h>
int serie(int n);
int main(){
	int numero,i,j;
	
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	printf("Serie fibonacci: 0, ");
	for(i=1;i<=numero;i++){
		if(serie(i)<numero){
			printf("%d , ",serie(i));
			j++;
		}
		else{
			printf("\nEl numero %d esta entre:%d y  %d\n",numero,j-1,j);	
			return;
		
		}
	
	}

	return 0;
}
int serie(int n){
	int suma;
	if(n==0 || n==1){
	
	return n;
}
else{
	return (serie(n-1)+serie(n-2));
}
}


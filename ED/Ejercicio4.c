#include <stdio.h>
long factorial(int n);
int main(){
	long factorial(int n);
	int numero;
	printf("Digite un numero entero: ");
	scanf("%d",&numero);
	
	printf("\nEl resultado es: %li",factorial(numero));
	
	return 0;
}

long factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return(n*factorial(n-1));
	}
}

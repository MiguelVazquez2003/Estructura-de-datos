#include <stdio.h>
s//truct Persona{
	//
	//
	//
	//
	//
//};
int main(){
	char hash_table[12][50]={"cero","diez","veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa","cien","no encontrado"};
	int numero;
	printf("Ingrese un valor: ");
	scanf("%d",&numero);
	printf("valor: %s",hash_table[hash_function(numero)]);
}
int hash_function(numero){
	switch(numero){
	case	0: return 0;
		case 10: return 1;
		case 20: return 2;
		case 30: return 3;
		case 40: return 4;
		case 50: return 5;
		case 60: return 6;
		case 70: return 7;
		case 80: return 8;
		case 90: return 9;
		case 100: return 10;
		default: return 11;
		
	}
}
/*
key: value
100: "cien"
80: "ochenta"
70: "setenta"
*/

#include <stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>
int tam=20;
int prioridad(char simbolo);
int main(){
	//notacion infija a postfija
	char simbolo;
	int i;
	int tope=-1,pos=-1,tamexp;
	int pila[tam],epos[tam];
	char expinf[tam];
	// infija a+b
	// posfija ab+
	printf("Ingrese la expresion infija: ");
	scanf("%s",&expinf);
	tope=-1;
	pos=-1;
	tamexp=strlen(expinf);
	for(i=0;i<tamexp;i++){
		simbolo=expinf[i];
		if(simbolo=='('){
			tope=tope+1;
			pila[tope]=simbolo;
		}
		else if(simbolo==')'){
			while(pila[tope]!='('){
				pos=pos+1;
				epos[pos]=pila[tope];
				tope=tope-1;
			}
			tope=tope-1;
		}
		
		else if((simbolo>='a')&&(simbolo<='z')||(simbolo>='A')&&(simbolo<='Z')){
			pos=pos+1;
			epos[pos]=simbolo;
		}
		
		else{
			while(tope>-1 && (prioridad(simbolo<=prioridad(pila[tope])))){
				pos=pos+1;
				epos[pos]=pila[tope];
				tope=tope-1;
				
			}
			tope=tope+1;
			pila[tope]=simbolo;
		}
		
		}
		while(tope>-1){
			pos=pos+1;
			epos[pos]=pila[tope];
			tope=tope-1;
		}
		
		printf("\nLa notacion posfija es: ");
		for(i=0;i<=pos;i++){
			printf("%c",epos[i]);
		}	
		}
	
	
			
		
	


int prioridad(char simbolo){
	int priori;
	switch (simbolo){
		case '^':
			priori=3;
			break;
			case '/':
				priori=2;
				break;
				case '*':
					priori=2;
					 break;
					 case '-':
					 	priori=1;
					 	break;
					 	case '+':
					 		priori=1;
					 		break;
					 		case ')':
					 			priori=0;
					 			break;
					 			case '(':
					 				priori=0;
					 				break;
	}
	return priori;
}

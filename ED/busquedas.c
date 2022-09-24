#include <stdio.h>

//busqueda por funciones de hash//

void busqueda_secuencial(int arreglo[],int objetivo,int n);
void busqueda_binaria(int arreglo[],int objetivo,int n);

int main(){
	
	int arreglo[]={1,5,9,15,19,26,27,30,37};
	int tam=sizeof(arreglo)/sizeof(int);
	busqueda_secuencial(arreglo,2,tam);
	busqueda_binaria(arreglo,30,tam);

	return 0;
	

	
}
void busqueda_secuencial(int arreglo[],int objetivo,int n){
// puede ser while o for 	
int i;
int comparaciones=0;
for(i=0;i <n;i++){
	comparaciones++;
	if(arreglo[i]==objetivo)
	{
	
	printf("\nSe encontro\n");
	break;
}
}
printf("comparaciones secuenciales: %d",comparaciones);

}
void busqueda_binaria(int arreglo[],int objetivo,int n){
int inferior=0, superior=n-1, medio=-1,comparaciones=0;
while(inferior!=superior){
	comparaciones++;
	medio=(inferior+superior)/2;
	
	if(objetivo==arreglo[medio]){
		printf("\nSe encontro\n");
		break;
	}
	if(medio==superior || medio==inferior){
			printf("No se encontro\n");
	break;
	}

	if(objetivo<arreglo[medio]){
		superior=medio;
	}
	else{
		inferior=medio;
	}
}

printf("comparaciones binarias: %d\n",comparaciones);	
}

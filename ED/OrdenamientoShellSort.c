#include <stdio.h>
#include <conio.h>
/*
mejora del ordenamiento por insercion
6 1 5 2 3 4 0
iremos por posicion
6- a[j] primera posicion 6/2=3 de salto
6-1-5    y quedamos en 2 que seria a[k]

si a[j]<=a[k]
arreglo ordenado
sino
intercambio
6<=2

NO
por tanto intercambio
2 1 5 6 3 4 0
2=a[j] 6=a[k] salto de 3
1 5 6  por tanto
1a[j] 3[ak]
1<=3 si
5 6 3    4
a[j]=5 a[k]=4
5<=4 
no
intercambio
2 1 -4 6 3 -5 0
6 3 5    0
a[j]=6  a[k]=0
6<=0 no
2 1 4 -0 3 5 -6
volvemos a comenzar
2 1 4    0
a[j]=2  0=a[k]
2<=0 no
0 1 4 2 3 5 6
1 4 2    3
1=a[j]   3=a[k]

0 1 4 2 3 5 6

4 2 3    5
4=a[k]  5=a[j]
4<=5 si 
todo bien

2 3 5  6
2=a[j]  6=a[k]

2<=6
si
no podemos bajar el salto 3 hasta que todos digan si
 0 1 4 2 3 5 6 
 0 1 4    2
 
 0<=2
 si
 1 4 2   3
 
 1<=3
 si
 4 2 3   5
 
 4<=5
 si
 
 2<=6
 si 
 ya todos dio si
 ahora al salto dividimos entre 2... 3/2=1.5 pero como es entera, el salto es de 1 o de celdas continuas
  0 1 4 2 3 5 6 
  0<=1 si
  1<=4
  si
  4<=2
  no
  0 1 2 4 3 5 6 
  4<=3 no
  0 1 2 3 4 5 6 
  
 
 cuando dividimos el salto 1, ya termino porque no hay salto 0.
mientras salto>0 hay que seguir ordenando
*/

void ordenacionShell(int a[],int n);
//void intercambio(int &x, int &y);//
int main(){	
int i;
	int a[7];
for(i=0;i<7;i++){
printf("Ingrese el numero en la posicion %d: ",i);
scanf("%d",&a[i]);
}
ordenacionShell(a,7);
printf("Arreglo ordenado ascendentemente: \n");
for(i=0;i<7;i++){
	printf("%d| ",a[i]);
}
printf("\nArreglo ordenado descendente: \n");
for(i=6;i>=0;i--){
	printf("%d| ",a[i]);
}
	getch();
	return 0;
}
void ordenacionShell(int a[],int n){
	int salto,i,j,k,aux;
	salto=n/2; //numero de elementos entre 2 
	
	while(salto>0){
		for(i=salto;i<n;i++){
			j = i-salto;
			while(j>=0){
				k=j+salto;
				if(a[j]<=a[k]){// par de elementos estan ordenados
					j=-1; //para salir del while y que avancen j y k
				}
				else{// par de elementos estan desordenados
				//	intercambio(a[j],a[k]);
				aux=a[j];
				a[j]=a[k];
				a[k]=aux;
					j-=salto;
				}
			}
		}
		salto=salto/2;
	}
	
}

/*void intercambio(int &x,int &y){
	int aux;
	aux=x;
	x=y;
	y=aux;
}*/

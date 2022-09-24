#include <stdio.h>
#define SIZE 4
int main(){
	
	int matriz_adyacencia[SIZE][SIZE]={0};
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			
			printf("Existe una arista entre vertice: %d y vertice: %d ?1)Si \n 2)No\n",i+1,j+1);
			scanf("%d",&matriz_adyacencia[i][j]);
			system("cls");
		}
	}
	
		for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%d\t",matriz_adyacencia[i][j]);
		}
	}
}

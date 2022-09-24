#include <stdio.h>
void swap(int primero, int segundo) {
int	a[50];
int temp = a[primero];
a[primero] = a[segundo];
a[segundo] = temp;
}
int main(){
	int a[50];
	int out,in,n,cambios,comparaciones;
	printf("Ingrese n: ");
	scanf("%d",&n);
	for(out = n-1; out > 1; out--) {// outer backwards loop
for( in = 0; in < out; in++) { // inner forward loop
if(a[in] > a[in+1]) {
swap(in, in + 1);
cambios++;
comparaciones++;
}
}
}
printf("Cambios: %d \nComparaciones: %d",cambios,comparaciones);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct nodo{
	
	int matricula;
	char nombre[100];
	float promedio;
	struct nodo*izquierda;
	struct nodo*derecha;
};
typedef struct nodo NODO;
typedef NODO *PTNODO;

//insertar 
//creamos nuevo nodo primero
void insertar(PTNODO *arbol,int matricula,char nombre[100],float promedio);
PTNODO crear_nodo(int matricula,char nombre[100],float promedio);
void mostrar(PTNODO arbol);
void buscar(PTNODO arbol,int buscar_matricula);
void eliminar(PTNODO *arbol,int eliminar_matricula);

int main(){
	PTNODO raiz=NULL;

struct nodo{
int n;
struct nodo *sig;
}*ini,*fin;
int cont,i=0;
int j=0;
struct nodo *nuevo;
int n;
float pro;
int opc;


/*insertar(&raiz,10);
insertar(&raiz,15);
insertar(&raiz,7);
insertar(&raiz,9);
printf("%d\n",raiz->dato);
printf("%d\n",raiz->izquierda->dato);
printf("%d\n",raiz->derecha->dato);
printf("%d\n",raiz->izquierda->derecha->dato);
mostrar(raiz);
buscar(raiz,10);
buscar(raiz,15);
buscar(raiz,90);
eliminar(&raiz,10);
mostrar(raiz);
*/
int matricula;
float promedio;
	int opcion;
	char nombre[100];
	char dec;
	int contador;
	float promediogen;
	
			system("cls");
	printf("1.Dar de alta un alumno: \n");
	printf("2.Editar datos de un alumno: \n");
	printf("3.Dar de baja un alumno: \n ");
	printf("4.Mostrar alumnos: \n");
	printf("5.Calcular promedio de grupo: \n");
	printf("6.SALIR\n");
	
	do{
		
	printf("\nIngrese una opcion: \n");
	scanf("%d",&opcion);

	switch(opcion)
	{
	
		case 1:
		fflush(stdin);
	printf("Ingrese el nombre: ");
	gets(nombre);
	printf("Ingrese la matricula del alumno: ");
	scanf("%d",&matricula);
	printf("Ingrese el promedio: ");
	scanf("%f",&promedio);
	insertar(&raiz,matricula,nombre,promedio);
	printf("\n");

			break;
			case 2:
			//editar
				break;
				case 3:
					printf("Ingrese la matricula para dar de baja: ");
					scanf("%d",&matricula);
					eliminar(&raiz,matricula);
					break;
					case 4:
						mostrar(raiz);
						break;
						case 5:
						do{
								printf("1.- insertar promedio\n");
								printf("2.- mostrar  promedios registrados\n");
								printf("3.- mostrar promdedio\n");
								printf("4.- SALIR\n\n");
								scanf("%d",&opc);
								system("clear");
								switch(opc){
								case 1:
									nuevo=(struct nodo *)malloc(sizeof(struct nodo));
									printf("insertar promedio:\n");
									scanf("%d",&nuevo->n);
									j++;
									nuevo->sig=ini;
									cont= nuevo->n;
									i=i+cont;
									if(ini==NULL){
									ini=nuevo;
									fin=nuevo;
									} else{
									ini->sig=nuevo;
									ini=nuevo;
									}
								break;
								case 2:
									system("clear");
									printf("%d\n", i);
								break;
								case 3:
									system("clear");
									pro=(i/j);
									printf("pronmedio:\n %.2f\n", pro);
								break;
								case 4:
								break;
								default:
									printf("ingrese numero del 1 al 4");
								break;
								}
								}while(opc!=4);
								
							break;
							case 6:
								break;
								default:
									printf("Ingrese una opcion del 1 al 6\n");
		}
	
		}while(opcion!=6);
		
	return 0;
}



PTNODO crear_nodo(int matricula,char nombre[100],float promedio){
	PTNODO nuevo_nodo=malloc(sizeof(NODO));
	nuevo_nodo->matricula=matricula;
	strcpy(nuevo_nodo->nombre,nombre);
	nuevo_nodo->promedio=promedio;
	nuevo_nodo->izquierda=NULL;
	nuevo_nodo->derecha=NULL;
	return nuevo_nodo;
}
void insertar(PTNODO *arbol,int matricula,char nombre[100], float promedio){
	if(*arbol==NULL){
	PTNODO nodo=crear_nodo(matricula, nombre, promedio);
	*arbol=nodo;
	}else{
		if((*arbol)->promedio>promedio){
		insertar(&(*arbol)->izquierda,matricula,nombre,promedio);
		}
		else{
			insertar(&(*arbol)->derecha,matricula,nombre,promedio);
		}
	}
}
void mostrar(PTNODO arbol)
{
	if(arbol->izquierda!=NULL)
	{
		mostrar(arbol->izquierda);
	}
	printf("\nNombre: %s\n",arbol->nombre);
	printf("Matricula: %d\n",arbol->matricula);
	printf("Promedio: %f\n",arbol->promedio);

	if(arbol->derecha!=NULL)
	{
		mostrar(arbol->derecha);
	}
}
void buscar(PTNODO arbol,int buscar_matricula)
{
	while(arbol!=NULL)
	{
		if(arbol->matricula==buscar_matricula)
		{
			break;
		}
		if(arbol->matricula>buscar_matricula){
			arbol=arbol->izquierda;
		}
		else{
			arbol=arbol->derecha;
		}
	}
	if(arbol!=NULL){
	printf("\nSe encontro el alumno con matricula %d\n",buscar_matricula);
	}
	else{
		printf("\nNo se encontro el alumno con matricula %d\n",buscar_matricula);
	}
	
}

void eliminar(PTNODO *arbol,int eliminar_matricula){
	if((*arbol)==NULL){
		printf("No se encontro la matricula %d\n",eliminar_matricula);
		return;
	}
	if((*arbol)->matricula==eliminar_matricula){
		PTNODO temporal=*arbol;
		if(temporal->izquierda==NULL && temporal->derecha==NULL){
			*arbol=NULL;
	
		}
		else if(temporal->izquierda!=NULL && temporal->derecha==NULL){
		*arbol=temporal->izquierda;
		}
		else if (temporal->izquierda==NULL && temporal->derecha!=NULL){
		*arbol=temporal->derecha;
	
		}
		else{
			*arbol=temporal->izquierda;
			PTNODO max=temporal->izquierda;
			while(max->derecha!=NULL){
				max=max->derecha;
			}
			max->derecha=temporal->derecha;
		}
		free(temporal);
		printf("Se elimino el alumno con matricula %d\n",eliminar_matricula);
	}else{
		if((*arbol)->matricula > eliminar_matricula){
			eliminar(&(*arbol)->izquierda,eliminar_matricula);
		}
		else{
		eliminar(&(*arbol)->derecha,eliminar_matricula);	
		}
	}

}



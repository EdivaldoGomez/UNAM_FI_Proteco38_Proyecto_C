#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void CrearTablero (char *Apuntador, int colum, int renglo);

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	int colum=0,renglo=0;
	printf("\n\t\t\t********* El Juego de la Vida **********\n\n");
	printf("Ingrese el número de renglones\n");
	scanf("%d",&renglo);
	printf("Ingrese el número de columnas\n");
	scanf("%d",&colum);
	char Tablero[colum+1];
	char *Apuntador=Tablero;
	printf("Comienza el Juego...\n");
	CrearTablero (char *Apuntador, int colum, int renglo);
	return 0;
}

void CrearTablero (char *Apuntador, int colum, int renglo){
	int i,j;/*
	for(i=0;i<colum;i++){	//For que genera el juego aleatorio.
		for(j=0;j<renglo;j++){
			if (rand () % 2==1)
				*Apuntador='A';
			else
				*Apuntador='B';
		}
		Apuntador++;
	}*/
}
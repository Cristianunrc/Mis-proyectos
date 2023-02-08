// Programa que dada una matriz de 3 x 3, devuelve el numero de la fila con la mayor sumatoria
#include <stdio.h>
#define Fila 3
#define Columna 3

typedef struct{
	
	int a [Fila][Columna];
	
}TArreglo;

TArreglo arr;

void cargarMatriz(TArreglo * arre);
int sumaFila (TArreglo arre, int m, int n); // funcion que se utiliza dentro de filaConMasSuma(..)
void filaConMasSuma (TArreglo arre);

int main(){
	
	cargarMatriz(&arr);
	filaConMasSuma (arr);
	
	
	return 0;
}


void cargarMatriz(TArreglo * arre){
	
	int i, j;
	for (i = 0; i< Fila; i++){
		for (j = 0; j< Columna; j++){
			printf ("[%d] [%d]: ", i+1, j+1);
			scanf("%d",&arre->a[i][j]);
		}
	}
}


// devuelve la sumatoria de cada fila por separado
int sumaFila (TArreglo arre, int m, int n){
	
	int i, j, sum;
	
	for (i = m; i< Fila; i++){
		sum = 0;
		for (j = n; j< Columna; j++){
			sum = sum + arre.a[i][j];
		}
		return sum;
	}
	
}


// Dice cual es la fila con mayor sumatoria de numeros
void filaConMasSuma (TArreglo arre){
	
	int x = 0, y = 0;
	int fila1 = sumaFila (arre, x, y);
	
	x ++;
	int fila2 = sumaFila (arre, x, y);
	
	x ++;
	int fila3 = sumaFila (arre, x, y);
	
	if (fila1 > fila2 && fila1 > fila3){
		printf("Fila 1.");
	}else{
		if (fila2 > fila1 && fila2 > fila3){
			printf("Fila 2.");
		}else{
			if (fila3 > fila1 && fila3 > fila2){
				printf("Fila 3.");
			}else{
				printf ("Las tres filas son iguales.");
			}
		}
	}
	
}

#include <stdio.h>
#define Fila 10
#define Columna 10

typedef struct{
	int array [Fila][Columna];
	int cantFila, cantCol;
}TArray;

TArray a;

void cargarArreglo (TArray *p);
void mostrarMatriz (TArray p);
void contarParesImpares (TArray p);

int main(){
	
	printf("### Programa donde se carga una matriz, se imprime y luego se cuentan la cantidad de numeros pares e impares. ###\n");
	
	cargarArreglo (&a);
	mostrarMatriz (a);
	contarParesImpares(a);

	return 0;
}

void cargarArreglo (TArray *p){
	int i,j;
	
	printf("\nIndique cantidad de filas de la matriz: ");
	scanf("%d",&p->cantFila);
	printf("Indique la cantidad de columnas de la matriz: ");
	scanf("%d",&p->cantCol);
	
	for (i = 0; i<p->cantFila; i++){
		for (j = 0; j<p->cantCol; j++){
			printf("Posicion %d %d: ", i + 1, j + 1);
			scanf("%d",&p->array[i][j]);
		}
	}
}

void mostrarMatriz (TArray p){
	int i, j;
	for (i = 0; i<p.cantFila; i++){
		for (j = 0; j<p.cantCol; j++){
			printf("| %d ", p.array[i][j]);
		}
		printf("|\n");
	}
}


void contarParesImpares (TArray p){
	int contP = 0, contI = 0 , i, j;
	
	i = 0;
	while (i<p.cantFila){
		j = 0;
		while (j<p.cantCol){
			
			if (p.array[i][j] % 2 == 0){
				contP ++;
			}else{
				contI++;
			}
			
			j++;
		}
		
		i++;
	}
	
	printf("Cantidad de pares: %d\n", contP);
	printf("Cantidad de impares: %d", contI);
}

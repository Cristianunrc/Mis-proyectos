// Programa que calcula el factorial de un numero usando recursion a la cola
// Soporta hasta numero de entrada 30, despues del 30 se rompe.
#include<stdio.h>


int Factorial (int n, int r);

int main (){

	int n1, r1;
	printf ("Ingrese un numero: ");
	scanf ("%d",&n1);
	
	r1 = Factorial (n1, 1);

	printf ("El factorial de %d es %d.", n1, r1);

return 0;
}


int Factorial (int n, int r){
	if (n == 0){
		return r;
	}else{
		if (n > 0){
			return Factorial (n - 1, r * n); // llamada recursiva a la cola
		}else{
			return -1; // si la entrada es negativa se retorna -1.
		}
	} 
}

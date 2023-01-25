#include <stdio.h>
#include <math.h>

float suma (float x, float y);
float resta (float x, float y);
float producto (float x, float y);
float division (float x, float y);
float raiz (float x);
float exponente (float x, float y);

int main(){
	
	int exp = 1; // seteo a exp en 1 para que ingrese al ciclo
	float a, b;
	
	printf ("# # # CALCULADORA# # #");
	
	while (exp != 10){
		
		printf ("\n\n--MENU-- \n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n 5. Raiz cuadrada \n 6. Exponente \n 10. Salir \n Escoja una opcion: ");
		scanf("%d",&exp);
	
		switch (exp){
			
			case 1 : printf("Primer numero: ");
				 	scanf("%f",&a);
				 	printf("Segundo numero: ");
				 	scanf("%f",&b);
				 	printf ("%.2f",suma(a,b));
				 	break;
				 
			case 2 : printf("Primer numero: ");
				 	scanf("%f",&a);
				 	printf("Segundo numero: ");
				 	scanf("%f",&b);
				 	printf ("%.2f",resta(a,b));
				 	break;
		
			case 3 : printf("Primer numero: ");
				 	scanf("%f",&a);
				 	printf("Segundo numero: ");
				 	scanf("%f",&b);
				 	printf ("%.2f",producto(a,b));
				 	break;
				 	
			case 4 : printf("Ingrese dividendo: ");
				 	scanf("%f",&a);
				 	printf("Ingrese divisor: ");
				 	scanf("%f",&b);
				 	printf ("%.2f",division(a,b));
				 	break;
				 	
			case 5 : printf("Ingrese la raiz: ");
					 scanf("%f",&a);	
					 printf ("%.2f",raiz(a));
					 break;
					 
			case 6 : printf("Ingrese el numero: ");
					 scanf ("%f",&a);
					 printf("Ingrese el exponente: ");
					 scanf ("%f",&b);
					 printf ("%.2f",exponente(a,b));
					 break;
					 		 
					 
			case 10: printf ("Adios.");
					 break;	 
		}
	}
	
	return 0;
}


float suma (float x, float y){
	return x + y;
}

float resta (float x, float y){
	return x - y;
}

float producto (float x, float y){
	return x * y;
}

float division (float x, float y){
	if (y == 0){
		return -1; // indeterminado 0/0
	}else{
		return x / y;
	}	
}

float raiz (float x){
	return sqrt(x);
}

float exponente (float x, float y){
	if (x == 0 && y == 0){
		return -1; // indeterminado 0^0
	}else{
		if (y == 0){
			return 1; // todo numero elevado a la 0 es 1, osea n^0 = 1
		}else{
			int i, aux = x;
		
			for (i = 1; i< y; i++){
				x = x * aux;
			}
			return x;
		}
	}
}

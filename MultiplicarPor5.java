// Ejemplo de un programa con uso de try and catch

//incluir paquete

import java.util.Scanner;
import java.util.InputMismatchException;

public class MultiplicarPor5 {
	
	public static void main (String [] args) {
			
		Scanner entrada = new Scanner (System.in);
		int numIn, numM; // En numIn almaceno lo que ingreso por teclado.
						// En numM almaceno numIn * 5
		
		try {
			System.out.println("Ingrese un numero entero: ");
			numIn = entrada.nextInt();
			numM = numIn * 5;
			System.out.println("El resultado es: " + numM);
		
		}catch (InputMismatchException e) {
			System.out.println("Debe ingresar un numero entero.");
		}	
	}
}
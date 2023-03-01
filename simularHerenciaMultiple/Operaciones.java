package simularHerenciaMultiple;

/**
 * La clase Operaciones implementa la interface Operaciones3.
 * Donde Operaciones3 hereda de Operaciones2 y ésta hereda de Operaciones1. 
 */  

public class Operaciones implements Operaciones3 {
	
	public int suma (int x, int y) {
		return x + y;
	}
	
	public int resta (int x, int y) {
		return x - y;
	}
	
	public int inc (int x) {
		return x++;
	}
	
	public int dec (int y) {
		return y--;
	}
	
	public int prod (int x, int y) {
		return x * y;
	}
	
	public int cuad (int z) {
		return z * z;
	}

}

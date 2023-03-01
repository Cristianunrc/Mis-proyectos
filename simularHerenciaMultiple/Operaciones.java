package simularHerenciaMultiple;

// La clase Operaciones implementa la interface Operaciones2 y a su vez Operaciones2 hereda Operaciones1.
// Se van a implementar los metodos las dos interfaces.
public class Operaciones implements Operaciones2 {
	
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

}

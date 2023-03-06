package claseAbstracta;

/**
 * Clase abstracta donde se define el perfil de metodos abstractos, no se permite la implementacion de los mismos.
 * Se pueden definir metodos no abstractos y atributos (no abstractos tambien). Realiza una implementacion parcial.
 * Una clase abstracta no permite tener instancias de ella (objetos de tipo de la clase abstracta).
 * @author Cristian
 */
public abstract class Operaciones {
	
	// Metodo abstracto suma que no se implementa.
	public abstract int suma (int a, int b);
	
	// Metodo abstracto resta que no se implementa.
	public abstract int resta (int a, int b);
	
	// Metodo no abstracto cuadrado implementado. 
	public int cuadrado (int x) {
		return x * x;
	}

}

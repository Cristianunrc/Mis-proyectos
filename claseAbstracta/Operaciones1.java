package claseAbstracta;

/**
 * Clase Operaciones1 que extiende (hereda) la clase Operaciones e implementa sus metodos abstractos.
 * La clase abstracta Operaciones es una superclase de Operaciones1 y a su vez ésta es una subclase.
 * @author pc
 *
 */
public class Operaciones1 extends Operaciones{

	// Implementacion de suma.
	public int suma (int a, int b) {
		return a + b;
	}
	
	// Implementacion de resta.
	public int resta (int a, int b) {
		return a - b;
	}
	
}

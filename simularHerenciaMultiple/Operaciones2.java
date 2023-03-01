package simularHerenciaMultiple;

/**
 * La interface Operaciones2 extiende (hereda) la interface Operaciones1,
 * define el perfil de incremento y decremento.
 */
public interface Operaciones2 extends Operaciones1 {

	/**
	 * @param x entero
	 * @return suma 1 al entero
	 */
	public int inc (int x);
	
	/**
	 * @param y entero
	 * @return decrementa 1 el entero
	 */
	public int dec (int y);
	
}

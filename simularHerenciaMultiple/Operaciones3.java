package simularHerenciaMultiple;

/**
 * Interface Operaciones3 que extiende la interface Operaciones2 y
 * define el perfil de producto y cuadrado.
 */
public interface Operaciones3 extends Operaciones2{

	/**
	 * @param x entero
	 * @param y entero
	 * @return el producto de ambos
	 */
	public int prod (int x, int y);
	
	/**
	 * @param z entero
	 * @return el cuadrado
	 */
	public int cuad (int z);
	
}

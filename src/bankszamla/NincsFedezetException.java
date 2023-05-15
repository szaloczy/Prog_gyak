package bankszamla;

public class NincsFedezetException extends Exception{
	
	private int hiany;

	
	public NincsFedezetException(int hiany) {
		super();
		this.hiany = hiany;
	}


	public int getHiany() {
		return hiany;
	}


	
	
	
	
}

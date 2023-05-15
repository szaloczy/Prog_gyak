package bankszamla;

import javax.naming.InsufficientResourcesException;

import org.omg.PortableServer.ThreadPolicyOperations;

public class Bankszamla {
	private int bankszamlaSzam;
	private int egyenleg;
	
	
	public Bankszamla(int bankszamlaSzam) {
		super();
		this.bankszamlaSzam = bankszamlaSzam;
		this.egyenleg = 0;
	}


	public int getBankszamlaSzam() {
		return bankszamlaSzam;
	}


	public int getEgyenleg() {
		return egyenleg;
	}
	
	
	
	@Override
	public String toString() {
		return "Bankszamla [bankszamlaSzam=" + bankszamlaSzam + ", egyenleg=" + egyenleg + "]";
	}


	public void penzbetet(int value){
		egyenleg += value;
	}

	public void kivetel(int value)throws NincsFedezetException{
		if (egyenleg >= value) {
			egyenleg -= value;
			
		}else {
			throw new NincsFedezetException(value - egyenleg);
		}
		
	}
}

package bankszamla;

public class BankszamlaFuttat {

	public static void main(String[] args) {
		Bankszamla szamla = new Bankszamla(1111111);
		szamla.penzbetet(100000);
		
		try {
			szamla.kivetel(10000);
			System.out.println("1. Egyenleg: " + szamla.getEgyenleg());
			szamla.kivetel(100000);
			System.out.println("2. Egyenleg: " + szamla.getEgyenleg());
			szamla.kivetel(10000);
			System.out.println("3. Egyenleg: " + szamla.getEgyenleg());
			
		} catch (NincsFedezetException e) {
			//e.printStackTrace();
			System.out.println("Nincs elég pénzed! Hiányzik: " + e.getHiany());
		
		
		}
	}

}

package homero;

public class Homerseklet {
	
	private double homersekelet;
	private Mertekegyseg mertekegyseg;
	
	
	public Homerseklet(double homersekelet, Mertekegyseg mertekegyseg) {
		super();
		this.homersekelet = homersekelet;
		this.mertekegyseg = mertekegyseg;
	}


	public Homerseklet(double homersekelet) {
		this.homersekelet = homersekelet;
		mertekegyseg = Mertekegyseg.CELSIUS;
	}


	@Override
	public String toString() {
		return "Homerseklet [homersekelet=" + homersekelet + ", mertekegyseg=" + mertekegyseg + "]";
	}


	public double getHomersekelet() {
		return homersekelet;
	}


	public void setHomersekelet(double homersekelet) {
		this.homersekelet = homersekelet;
	}


	public Mertekegyseg getMertekegyseg() {
		return mertekegyseg;
	}


	public void setMertekegyseg(Mertekegyseg mertekegyseg) {
		this.mertekegyseg = mertekegyseg;
	}
	
	public static double konvHomerseklet(Homerseklet ertek, Mertekegyseg mertek){
		if (ertek.mertekegyseg == mertek) {
			return ertek.homersekelet;
		}
		if (ertek.mertekegyseg == Mertekegyseg.CELSIUS && mertek == Mertekegyseg.KELVIN) {
			return ertek.homersekelet += 273.15;
		} else {
			return ertek.homersekelet -= 273.15;
		}
			
	}
	
	
	
	

}

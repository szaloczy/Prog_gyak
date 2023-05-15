package homero;

import java.util.Scanner;

public class Hoproba {

	public static void main(String[] args) {
		Homerseklet[] hom = new Homerseklet[4];
		hom[0] = new Homerseklet(doubleBeolv());
		hom[1] = new Homerseklet(doubleBeolv(), egysegBeolv());
		
		listaz(hom);
	}
	
	public static double doubleBeolv(){
		Scanner sc = new Scanner(System.in);
		double n;
		System.out.println("Homerseklet? ");
		while (!sc.hasNextDouble()) {
			System.out.println("Hibás adat!");
			sc.nextLine();
		}
		return sc.nextDouble();
	}
	
	public static  Mertekegyseg egysegBeolv(){
		
		boolean ok;
		Scanner sc = new Scanner(System.in);
		String line;
		Mertekegyseg m;
		
		
		do {
			ok = true;
			System.out.println("Mértekegység?");
			line = sc.nextLine();
			m = Mertekegyseg.valueOf(line);
			
			if (m != Mertekegyseg.CELSIUS && m != Mertekegyseg.KELVIN) {
				ok = false;
				System.out.println("Hibás mértékegység! ");
			}
			
		} while (!ok);
		
		return m;
	}

	public static void listaz(Homerseklet[] h){
		for (int i = 0; i < h.length; i++) {
			System.out.println(h[i]); 
			
			
		}
	}
}

import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.

	Scanner sc = new Scanner(System.in);
	System.out.println("Get ready... Choose a name for your fighter");
	String name = sc.nextLine();
	System.out.println("Choose a title for your fighter");
	String title = sc.nextLine();
	System.out.println("Choose a clan for your fighter, wizard, warrior, rogue");
	String prof = sc.nextLine();
	
	System.out.println();
	System.out.println("Hello " + name + " the " + title + ", You can pick from 5 traits, and you can dispense up to 10 points into each trait");
	System.out.println("Choose wisely, you only have 25 points to spend in total. Your options are-");
	System.out.println();
	System.out.println("Strength - Buff and able to carry larger items");
	System.out.println("Dexterity - Agile and moves quick");
	System.out.println("Intelligence - Better at magic spells");
	System.out.println("Constitution - How much health");
	System.out.println("Charisma - How personable");
	System.out.println(); 
	
	System.out.println("How many strength points would you like?");
	int stre = sc.nextInt();
	if(stre > 25){
		System.out.println("OH NO! You've ran out of points");
	}
	if(stre > 10){
		System.out.println("You've put too many points into strength");
	}
	else
	{int stre1 = (25 - stre);
		System.out.println("You have " + stre1 + " points left. How many dexterity points would you like?");
	int dexty = sc.nextInt();
	if(stre + dexty > 25){
		System.out.println("OH NO! You've ran out of points");
	}
	if(dexty > 10){
		System.out.println("You've put too many points into dexterity");
	}
	else
	{int dexty1 = (stre1 - dexty);
		System.out.println("You have " + dexty1 + " points left. How many intelligence points would you like?");
	int intel = sc.nextInt();
	if(stre + dexty + intel > 25){
		System.out.println("OH NO! You've ran out of points");
	}
	if(intel > 10){
		System.out.println("You've put too many points into intelligence");
	}
	else
	{int intel1 = (dexty1 - intel);
		System.out.println("You have " + intel1 + " points left. How many constitution points would you like?");
	int cons = sc.nextInt();
	if(stre + dexty + intel + cons> 25){
		System.out.println("OH NO! You've ran out of points");
	}
	if(cons > 10){
		System.out.println("You've put too many points into constitution");
	}
	else
	{int cons1 = (intel1 - cons);
		System.out.println("You have " + cons1 + " points left. How many charisma points would you like?");
	int cha = sc.nextInt();
	if(stre + dexty + intel + cons + cha > 25){
		System.out.println("OH NO! You've ran out of points");
	}
	if(cha>10){
		System.out.println("You've put too many points into charisma");
	}
	else
	{int remai = (cons1 - cha);
		System.out.println("You have " + remai + " unused points");
		System.out.println();
		
			System.out.println("Hello again, "+name+" the "+title+". Welcome to the "+prof+" clan.");
			System.out.println("You have invested "+stre+ " points into strength");
			System.out.println("You have invested "+dexty+ " points into dexterity");
			System.out.println("You have invested "+intel+ " points into intelligence");
			System.out.println("You have invested "+cons+ " points into constitution");
			System.out.println("You have invested "+cha+ " points into charisma");
	}}}}}}
	
	
}


import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Welcome to the dungeon... Choose to be a Wizard, Warrior, or Rogue");
		String role = sc.nextLine();
		
		if (role.equals("wizard")){
			System.out.println("You are a wizard");
		}
		if (role.equals("warrior")){
			System.out.println("You are a warrior");
		}
		if (role.equals("rogue")){
			System.out.println("You are a rogue");
		}
	}
}

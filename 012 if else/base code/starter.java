import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Please think of a number");
		int num1 = sc.nextInt();
		
		if (num1 == 159) {
			System.out.println("Your number matches mine!");
		}
		else {
			System.out.println("We were thinking of different numbers!");
		}
		
	
		
	}
}

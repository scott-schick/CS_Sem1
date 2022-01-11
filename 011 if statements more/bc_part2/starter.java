import java.util.Scanner;


class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		//	System.out.print("I love to learn coding remotely."); 
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter an integer");
		int varOne = sc.nextInt();
		System.out.println("Please enter a second integer");
		int varTwo = sc.nextInt();
		System.out.println("Please enter a third integer");
		int varThree = sc.nextInt();
		
		System.out.println();
		
		if ((varOne > varTwo) && (varOne > varThree)) {
			System.out.println(varOne + " is the largest integer");
		}
		
		if ((varTwo > varOne) && (varTwo > varThree)) {
			System.out.println(varTwo + " is the largest integer");
		}
		
		if ((varThree > varTwo) && (varThree > varOne)) {
			System.out.println(varThree + " is the largest integer");
		}
		
		System.out.println();
		
		if ((varOne < varTwo) && (varOne < varThree)) {
			System.out.println(varOne + " is the smallest integer");
		}
		
		if ((varTwo < varOne) && (varTwo < varThree)) {
			System.out.println(varTwo + " is the smallest integer");
		}
		
		if ((varThree < varTwo) && (varThree < varOne)) {
			System.out.println(varThree + " is the smallest integer");
		}
	}
}

import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	System.out.println("MAIN METHODS LAB");
	System.out.println();
		double oneY = (13-6*11);
		double oneX = (30%7*(-2));
		
		double oneSoln = (Math.max(oneY,oneX));
		System.out.println(oneSoln);
		
		
		double twoY = (3*8+31%7);
		
		double twoSoln = (Math.sqrt(twoY));
		System.out.println(twoSoln);
		
	
		double threeY = (37/3);
		double threeX = (35%21);
		
		double threeSoln = (Math.pow(threeY,threeX));
		System.out.println(threeSoln);
		
		
		double fourY = (2);
		double fourX = (14%3);
		
		double fourSolnA = (Math.pow(fourY,fourX));
		double fourSolnB = (Math.sqrt(2*6));
		
		double fourSoln = (Math.max(fourSolnA,fourSolnB));
		System.out.println(fourSoln);
		System.out.println();
		
		System.out.println("MAIN METHODS LAB EXTRA");
		System.out.println();
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter an x value below");
		double x = sc.nextDouble();
		System.out.println("Enter a y value below");
		double y = sc.nextDouble();
		
		System.out.println();
		
		System.out.println("The max of the two values are " + Math.max(x,y));
		System.out.println("The square root of y is " + Math.sqrt(y));
		System.out.println("The value of x to the y power is " + Math.pow(x,y));
		
	}
}

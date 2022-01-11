import java.util.Scanner;


class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter an integer");
		int varOne = sc.nextInt();
		System.out.println("Please enter a second integer");
		int varTwo = sc.nextInt();
		
		boolean check = (varOne == varTwo);
		if(check)
	
		{
			System.out.println("the integers are the same");
		}

		boolean falsecheck = (varOne != varTwo);
		if(falsecheck)
		
		{
			System.out.println("the integers are not the same");
		}

	}
}

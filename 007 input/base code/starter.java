import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your name?");
		String name = sc.nextLine();
		System.out.println("What is your age?");
		int age = sc.nextInt();
		System.out.println("What month were you born?");
		int month = sc.nextInt();
		System.out.println("What day were you born?");
		int day = sc.nextInt();
		System.out.println("What year were you born?");
		int year = sc.nextInt();
		System.out.println("If I had a dollar and two quarters, how much money do I have?");
		double money = sc.nextDouble();
		
		System.out.println("Your name is " + name + "! You are " + age + " years old. You were born on " + month + "/" + day + "/" + year + " and you have " + money + " dollars in your wallet!!!");
	}
}

import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here

Scanner sc = new Scanner(System.in);
Random rand = new Random();

int secret = rand.nextInt(1000);


System.out.println("Welcome to my guessing game! I am thinking of a number between 1 and 1000. Can you guess it?");
System.out.println("Enter a number");

int c = secret;
while(true)
	{
		int guess = sc.nextInt();
		if(guess == secret)
		{
			System.out.println("Congratulations! You picked the right number!");
			break;
		}
		else if(guess == 1000)
		{
			System.out.println("The number is "+secret);
			break;
		}
		if(guess > secret)
		{
			System.out.println("That's not the right number. My number is smaller");
		}
		if (guess < secret)
		{
			System.out.println("That's not the right number. My number is bigger");
		}
	}
	}
}
import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Enter an integer");
	int num = sc.nextInt();
	int c = 0;
	
	while(true)
	{
		System.out.println(num);
	if(c == 4)
	{
		break;
	}
	c=c+1;
	num=num+1;
	}
}
}

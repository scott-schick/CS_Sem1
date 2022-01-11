import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static double pow(double s, double t){
		int c = 1;
		double num = s;
		
		while(c<t)
		{
			num = num * s;
			c+=1;
		}
			
		return num;
}
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter a number");
	double numb = sc.nextDouble();
	System.out.println("To what power should we multiply the number");
	double powee = sc.nextDouble();
	
	double answer = pow(numb,powee);	
	System.out.println(answer);
		
	}
}
	
	

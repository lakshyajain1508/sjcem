//Write a program to calculate the sum of digits of a number using a while loop.
package eu1242066;

public class TwoNumSum {

	public static void main(String[] args) {
		
		int n = 256;
		int sum = 0;
		
		while(n!=0)
			
		{
			sum = sum + n % 10;
			n = n / 10;
		}
		
		System.out.println(sum);

	}

}

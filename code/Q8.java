package eu1242086;

public class Q8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
/*Sum of Digits of a Number:
Write a program to calculate the sum of digits of a number using a while loop.*/
		
		
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

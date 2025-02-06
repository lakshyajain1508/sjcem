package eu1242086;

public class Q10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		/*Count Digits in a Number:
Write a program to count the number of digits in a given number.*/
		
		int n = 256;
		int count = 0;
		int i = 0;
		
		while(n!=0)
			
		{
			count = count + n % 10;
			i++;
			n = n / 10;
		}
		
		System.out.println(i);
		
		
		
	}

}

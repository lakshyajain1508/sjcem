package eu1242086;

public class Q9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*Reverse a Number:
Write a program to reverse a given number using a while loop.*/
		
		int n = 345;
		int rem ;
		int rev = 0;
		
		
		
		while (n > 0) { 
            rem = n % 10; 
            rev = (rev * 10) + rem; 
            n = n / 10; 
		}
		
		System.out.println(rev);

	}

}

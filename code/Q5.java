package eu1242086;

public class Q5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
/* Leap Year Checker:
Write a %Leap Year Checker:
Write a program to check whether a given year is a leap year or not.Leap Year Checker:
*/
		int n = 2016;
		
		
		
		if(n % 4 == 0 && n%100 != 0)
		{
			System.out.println("leap year");
		}
		else if ( n % 400 == 0)
		{
			System.out.println("leap year");
		}
		else
		{
			System.out.println("not ");
		}
	}

}

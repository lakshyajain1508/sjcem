/* Leap Year Checker:
		Write a %Leap Year Checker:
		Write a program to check whether a given year is a leap year or not.Leap Year Checker:
		*/
package eu1242066;

public class LeapYear {

	public static void main(String[] args) {
		
		
				int Year = 2017;
				
				
				if(Year % 4 == 0 && Year%100 != 0)
				{
					System.out.println("leap year");
				}
				else if ( Year % 400 == 0)
				{
					System.out.println("leap year");
				}
				else
				{
					System.out.println("Not A Leap Year");
				}
			}

		

	}



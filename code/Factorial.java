/*Write a program to calculate the factorial of a number using a while loop.*/
package eu1242066;
public class Factorial {

	public static void main(String[] args) {
		

		        int number = 5;
		        
		      
		        if (number < 0) {
		            System.out.println("Factorial is not defined for negative numbers.");
		        } else {
		            int factorial = 1; 
		            int i = 1; 
		            
		            
		            while (i <= number) {
		                factorial *= i; 
		                i++;
		            }
		            
		            System.out.println("Factorial of " + number + " is: " + factorial);
		        }
		        
		    }
	

}

/*Reverse a Number:
		Write a program to reverse a given number using a while loop.*/
package eu1242066;

public class ReverseNum {

	public static void main(String[] args) {
		
				
				int num = 532;
				int remainder ;
				int reverse = 0;
				
				
				
				while (num > 0) { 
		            remainder = num % 10; 
		            reverse = (reverse * 10) + remainder; 
		            num = num / 10; 
				}
				
				System.out.println(reverse);

			}

}

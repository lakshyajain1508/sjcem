/*Count Digits in a Number:
		Write a program to count the number of digits in a given number.*/
				
package eu1242066;

public class CountDigitNum {

	public static void main(String[] args) {
		
				
				int num = 256;
				int count = 0;
				int i = 0;
				
				while(num!=0)
					
				{
					count = count + num % 10;
					i++;
					num = num / 10;
				}
				
				System.out.println(i);
				
				
				
			}

}

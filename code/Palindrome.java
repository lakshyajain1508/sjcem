package eu1242066;

public class Palindrome {

	public static void main(String[] args) {
		
		int num = 121;
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

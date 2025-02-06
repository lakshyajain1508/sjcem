package eu1242086;

public class Q6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
/*Voting Eligibility:
Write a program to check if a person is eligible to vote (age >= 18).*/
		
		
		int age = 19;
		if(age >= 18)
		{
			System.out.println("eligible");
		}
		else if(age <= 18)
		{
			System.out.println("not eligible");
		}
		else
		{
			System.out.println("not invalid");
		}
		
		
	}

}

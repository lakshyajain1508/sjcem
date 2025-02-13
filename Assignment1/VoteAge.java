/*Voting Eligibility:
		Write a program to check if a person is eligible to vote (age >= 18).*/
				
package eu1242066;

public class VoteAge {

	public static void main(String[] args) {
		
				
				int age = 19;
				if(age >= 18)
				{
					System.out.println("Eligible To Vote");
				}
				else if(age <= 18)
				{
					System.out.println("Not Eligible");
				}
				else
				{
					System.out.println("Invalid");
				}
				
				
			}

}

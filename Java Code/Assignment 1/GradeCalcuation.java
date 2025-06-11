/*Given a student’s marks, print the grade:
        ◦ 90-100: A
        ◦ 80-89: B
        ◦ 70-79: C
        ◦ Below 70: Fail*/
package eu1242066;

public class GradeCalcuation {

	public static void main(String[] args) {
		
				
				int m = 96;
				if(m>=90 && m <=100)
				{
					System.out.println("Grade A");
				}
				
				else if(m >= 80 && m<=89)
				{
					System.out.println("Grade B");
				}
				else if(m>= 70 && m<79)
				{
					System.out.println("Grade C");
				}
				else
				{
					System.out.println("Fail");
				}
				
				
				
			}

		

	}



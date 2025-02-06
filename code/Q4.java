package eu1242086;

public class Q4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      //    4. Grade Calculation:
		/*Given a student’s marks, print the grade:
	        ◦ 90-100: A
	        ◦ 80-89: B
	        ◦ 70-79: C
	        ◦ Below 70: Fail*/
		
		int m = 96;
		if(m>=90 && m <=100)
		{
			System.out.println("grade A");
		}
		
		else if(m >= 80 && m<=89)
		{
			System.out.println("grade b");
		}
		else if(m>= 70 && m<79)
		{
			System.out.println("grade c");
		}
		else
		{
			System.out.println("fail");
		}
		
		
		
	}

}

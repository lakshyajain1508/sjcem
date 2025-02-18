
import java.util.*; 
public class Constructor02 {

		
		  void name(String name) 
		  { 
		 	  System.out.println("Your name is "+name); 
		  } 
		  public Constructor02() 
		  { 
		 	 System.out.println("Good Morning"); 
		 	 
		  } 
		 	public static void main(String[] args) { 
		 		 
	
		 		Constructor02 obj2 = new Constructor02(); 
		 		Scanner s = new Scanner(System.in); 
		 		System.out.println("Enter your name :"); 
		 		String name = s.next(); 
		 		obj2.name(name); 
		  

	}

}

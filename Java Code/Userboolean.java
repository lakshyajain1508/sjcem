package EU1242066;
import java.util.*;

public class Userboolean{

	public static void main(String[] args) {
			Scanner scn = new Scanner(System.in);
			System.out.print("Are u above 18 -> ");
			boolean res = scn.nextBoolean();
			System.out.println("Are u above 18 -> "+(res==true?"Yes":"No"));
			
		
	}

}
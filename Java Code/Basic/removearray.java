
import java.util.*; 
public class removearray { 
 
	public static void main(String[] args) { 
		String[] data = {"Batch A" , "Batch B" , "Batch C" , "Batch D" , "Batch E" , "Batch F"}; 
		Scanner sc = new Scanner(System.in); 
		System.out.print("Enter the position to be Deleted : "); 
		int a = sc.nextInt(); 
		for(int i = 0 ; i<7 ; i++) { 
			if(i==(a-1)) { 
				continue; 
			} 
			System.out.println(data[i]); 
		} 
	} 
}
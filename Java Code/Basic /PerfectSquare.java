package EU1242066;

public class PerfectSquare {

	public static void main(String[] args) {
		int arr[] = {2,4,6,8,9,12,16}; 
 		for(int i = 0 ; i<arr.length; i++) { 
 			int a = arr[i]; 
 			for(int j=0 ; j<a ; j++) { 
 				if(j*j == a) { 
 					System.out.println(a); 
 				} 
 			} 
 		} 
    }  
 }
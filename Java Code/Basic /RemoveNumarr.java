import java.util.*; 
 public class RemoveNumarr { 
   public static void main(String[] args) { 
 		int[] arr = {10,20,30,40,50}; 
 		int removenum = 30; 
 		int[] newarr = new int[arr.length-1]; 
 		 
 		for(int i =0, j=0; i<arr.length;i++) { 
 			if(arr[i] != removenum) { 
 				newarr[j++] = arr[i]; 
 			} 
 		} 
 		 
 		System.out.println("New Arrays -> " + Arrays.toString(newarr)); 
  
 	} 
 }
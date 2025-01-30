
import java.util.*;
public class Addelementarr {

	public static void main(String[] args) {
		
		int[] arr = {10,20,30,40,50};
		
		int newelement = 60;
		
		int[] newarr = new int[arr.length + 1];
		
		for(int i=0;i<arr.length;i++) {
			newarr[i] = arr[i];
		}
		
		newarr[arr.length] = newelement;
		
		System.out.println("Old array -> "+ Arrays.toString(arr));
		
		System.out.println("New array -> "+ Arrays.toString(newarr));
	}

}

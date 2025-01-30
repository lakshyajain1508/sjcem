import java.util.*;
public class RemoveArrElement{
    public static void main(String[] args) {

        int[] arr = {10,20,30,40,50};
        int removeIndex = 2;
        int newarr[] = new int[arr.length-1];
        for(int i=0 , j=0;i<arr.length;i++){
            if(i!=removeIndex){
                newarr[j++] = arr[i];
                }
                
                }
               System.out.println(Arrays.toString(newarr));


    }
}
public class Question4
{

    public static void main(String[] args) {

        int b[] = { 2,4,5,6,7};
        int smallest = b[0];
        for (int i = 1; i < b.length; i++) {
            if (b[i] < smallest) {
                smallest = b[i];

            }
          
        }  
        System.out.println("The smallest number is: " + smallest);
    }

}

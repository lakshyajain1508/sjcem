public class min {

    public static void main(String[] args) {
        
        int num1 = 10;
        int num2 = 20;
        int num3 = 30;

        int min = Math.min(Math.min(num1, num2) , (num3));
        System.out.println("The minimum number is: " + min);

    }
    
}

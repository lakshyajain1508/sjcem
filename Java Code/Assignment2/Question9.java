public class Question9 {
    public static void main(String[] args) {
        int[] numbers = { 1, 3, 9, 7, 49, 77, 81 };
        System.out.println("squares in the array:");
        for (int i = 0; i <= numbers.length; i++) {
            int sqrt = (int) Math.sqrt(numbers[i]);
            if (sqrt * sqrt == numbers[i]) {
                System.out.println(numbers[i]);
            }
        }
    }
}

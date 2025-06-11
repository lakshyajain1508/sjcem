public class Question5 {

    public static void main(String[] args) {

        int[] arr = { 2, 4, 8, 16, 9, 36, 6, 7 };
        for (int i = 0; i < arr.length; i++) {
            int sqrt = (int) Math.sqrt(arr[i]);
            if (sqrt * sqrt == arr[i]) {
                System.out.println("Perfect square root:" + (int) Math.sqrt(arr[i]));
            }
        }
    }
}

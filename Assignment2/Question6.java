public class Question6 {

    public static void main(String[] args) {

        String arr[] = { "e", "i", "o", "s", "p", "u", "g" };
        for (int i = 0; i <= arr.length - 1; i++) {
            if ((arr[i] == "a") || (arr[i] == "e") || (arr[i] == "i") || (arr[i] == "o") || (arr[i] == "u")) {
                System.out.println("the vowel from the given array is : " + arr[i]);
            }
        }
    }

}

public class Question2 {

    public static void main(String[] args) {

        String s = ("Hello MY Name Is Lakshya. ");
        String st[] = s.split(" ");
        for (int i = 0; i < st.length; i++) {
            String b = st[i];
            if (b.length() % 2  == 0) {
                System.out.println(b + " : " + b.length());
            }

        }
    }
}

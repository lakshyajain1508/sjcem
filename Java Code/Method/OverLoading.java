

public class OverLoading {

	static void mymethod(int a,int b) {
		System.out.println(a);
		System.out.println(b);
	}
	
	static void mymethod(double a,int b,int c) {
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
		
	}
	public static void main(String[] args) {
		
		mymethod(10,20);
		mymethod(30.4,20,10);
		
	}
	
}

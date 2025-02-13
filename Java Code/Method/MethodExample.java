

public class MethodExample {
	
	public static void add(int num1,int num2) {
		System.out.println("Addition = "+(num1+num2));
	}
	
	public static int sub(int num1,int num2) {
		return (num1-num2);
	}
	
	public void mul(int num1,int num2) {
		System.out.println("Multiplication = "+(num1*num2));
	}
	public static void main(String[] args) {
		
		add(10,4);
		int ans = sub(10,6);
		System.out.println(ans);
		MethodExample obj = new MethodExample();
		obj.mul(8, 8);
		
		
	}

}

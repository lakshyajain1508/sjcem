

public class ConstructorExample {
	
	String name;
	String lname;
	int age;
	
	public ConstructorExample (String name,String lname,int age) {
		this.name = name;
		this.lname = lname;
		this.age = age;
		;
	}

	public static void main(String[] args) {
		
		ConstructorExample obj1 = new ConstructorExample("Avaneet","Singh",28);
		System.out.println(obj1.name);
		
		ConstructorExample obj2 = new ConstructorExample("Mayank","Tiwari",30);
		System.out.println(obj2.name);
		

		
	}

}

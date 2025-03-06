


class Employee{
	
	String name;
	double salary;
	Employee(String name, double salary){
		
		this.name = name;
		this.salary = salary;
		System.out.println("emp");
		
	}
	
	void sample(){
		System.out.println("samplezzzzzz");
	}
}

class Manager extends Employee{ 
 	String dept; 
 	Manager(String name, double salary, String dept){ 
 		super(name, salary); 
 		this.dept = dept; 
 		System.out.println(dept); 
 	} 
 	void test() { 
 		System.out.println(super.name); 
 		System.out.println(super.salary);  
 	} 
 } 
 
public class SuperClass {

	public static void main(String[] args) { 
 		Manager mgr = new Manager("Lakshya",100000,"Comp"); 
 		mgr.test(); 
 	} 

}

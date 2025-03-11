class Person {
    private String name;
    private int age;

    void setName(String name) {
        this.name = name;
    }
    void setAge(int age) {
        this.age = age;
    }

    String getName() {
        return name;
    }
    int getAge() {
    	return age;
    }
}

public class EncapsulationExample {

	public static void main(String[] args) {
        Person person = new Person();
        person.setName("Lakshya Jain");
        person.setAge(19);
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());
    }
	
}

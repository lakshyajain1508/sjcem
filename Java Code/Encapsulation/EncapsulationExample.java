package eu1242066;

class Person {
    private String name;

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}

public class EncapsulationExample {

	public static void main(String[] args) {
        Person person = new Person();
        person.setName("Lakshya Jain");
        System.out.println("Person's Name: " + person.getName());
    }
	
}


class Animal{
	
	public void animalSound() {
		System.out.println("Animal Sound");
	}
	
}
class Dog extends Animal{
	
	public void animalSound() {
		System.out.println("Dog Sound");
	}
	
}

class Cat extends Animal{
	
	public void animalSound() {
		System.out.println("Cat Sound");
	}
	
}

class Rabbit extends Animal{
	
	public void animalSound() {
		System.out.println("Rabbit Sound");
	}
	
}


public class polyclass {

	public static void main(String[] args) {
		
		Animal objAnimal = new Animal();
		Animal objDog = new Dog();
		Animal objCat = new Cat();
		Animal objRabbit = new Rabbit();
		
		objAnimal.animalSound();
		objDog.animalSound();
		objCat.animalSound();
		objRabbit.animalSound();
		
		

	}

}

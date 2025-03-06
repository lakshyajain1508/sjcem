

abstract class Vehicle{ 
 	String brand; 
 	Vehicle(String brand){ 
 		this.brand = brand; 
 	} 
 	abstract void start(); 
 	void stop() { 
 		System.out.println(brand +" Vehicle is stopping"); 
 	} 
 } 
 class Car extends Vehicle{ 
 	Car(String brand){ 
 		super(brand); 
 	} 
 	void start() { 
 		System.out.println(brand+" car is starting with a key..."); 
 	} 
 } 
 class Bus extends Vehicle{ 
 	Bus(String brand){ 
 		super(brand); 
 	} 
 	void start() { 
 		System.out.println(brand+ " bus is starting automatically..."); 
 	} 
 } 
  
 class Bike extends Vehicle{ 
 	Bike(String brand){ 
 		super(brand); 
 	} 
 	void start() { 
 		System.out.println(brand+" bike is starting kick"); 
 	} 
 } 

public class Abstraction {

		public static void main(String[] args) { 
	 		Vehicle myCar =new Car("BMW"); 
	 		Vehicle myBus = new Bus("Volvo");
	 		Vehicle myBike = new Bike("Yahama");
	 		
	 		myCar.start();
	 		myCar.stop();
	 		myBus.start();
	 		myBus.stop();
	 		myBike.start();
	 		myBike.stop();
	 		

	}

}

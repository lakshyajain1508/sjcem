

abstract class Payment{
	abstract void make_payment(double amount);
}

class SastaCreditCard extends Payment{
	void make_payment(double amount) {
		System.out.println("Paid rs. "+amount+" using credit card");
	}
}
class Upipayment extends Payment{
	void make_payment(double amount) {
		System.out.println("Paid rs. "+amount+" using upi card");
	}
}
class Netbanking extends Payment{
	void make_payment(double amount) {
		System.out.println("Paid rs. "+amount+" using netbanking card");
	}
}
public class SastaPaymentSystem {

	public static void main(String[] args) {
		
		Payment objCredit = new SastaCreditCard();
		Payment objupi = new Upipayment();
		Payment objnet = new Netbanking();
		
		objCredit.make_payment(100.5);
		objupi.make_payment(1006.3);
		objnet.make_payment(56.1);

	}

}

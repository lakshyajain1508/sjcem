

class BankAccount{
	
	private String AccountName;
	private double Balance;
	
	public BankAccount(String AccountName, double Balance){
		this.AccountName = AccountName;
		this.Balance = Balance;
	}
	String get_AccountName() {
		return this.AccountName;
	}
	double get_balance() {
		return this.Balance;
	}
	void deposit(double amount) {
		if(amount>0) {
			amount = amount + this.Balance;
			System.out.println("Deposited : "+amount);
		}
		else {
			System.out.println("Garib");
		}
	}
}


public class RealEncapsulation {

	public static void main(String[] args) {
		
		BankAccount obj = new BankAccount("Lakshya Jain",2000);
		System.out.println("Account Name : "+ obj.get_AccountName());
		System.out.println("Balance : "+ obj.get_balance());
		obj.deposit(2000);
		System.out.println("Amount : "+ obj.get_balance());
	}

}

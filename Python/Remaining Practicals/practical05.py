class BankAccount:
    def __init__(self, name, balance=0):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
        else:
            print("Insufficient balance")

    def display(self):
        print(f"{self.name}'s Balance: ₹{self.balance}")

# Example
acc = BankAccount("Amit", 1000)
acc.deposit(500)
acc.withdraw(300)
acc.display()

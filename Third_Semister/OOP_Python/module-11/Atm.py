class Atm:
    def __init__(self) -> None:
        self.balance = 0
        self.pin = ''

        self.menu()

    def menu(self):
        while(True):
            print("""
                           Choose your option: 
                           1. Enter 1 to create pin: 
                           2. Enter 2 to deposit balance: 
                           3. Enter 3 to withdraw balance: 
                           4. Enter 4 to check balance: 
                           5. Enter 5 to exit: 
                           """)
            user_input = input("Enter your option: ")
            if user_input == '1':
                self.create_pin()
                print("Pin set successfully done!")
            elif user_input == '2':
                self.deposit()
            elif user_input == '3':
                self.withdraw()
            elif user_input == '4':
                self.check_balance()
            elif user_input == '5':
                break
            else:
                print("Invalid input")

    def create_pin(self):
        pin = input("Create your pin: ")
        self.pin = pin
    
    def deposit(self):
        pin = input("enter your pin: ")
        if pin == self.pin:
            amount = int(input("Enter your amount you want to deposit: "))
            self.balance += amount
            print("Your balance successfully Deposit!")
        else:
            print("Invalid pin")
    def withdraw(self):
        pin = input("enter your pin: ")
        if pin == self.pin:
            amount = int(input("Enter your amount you want to withdraw: "))
            if self.balance > amount:
                self.balance -= amount
                print("your amount successfully withdraw done!")
            else:
                print("Insufficient balance")
        else:
            print("Invalid pin")
    
    def check_balance(self):
        print(f'Your Current Balance is {self.balance}')

dbbl = Atm()
dbbl.check_balance()
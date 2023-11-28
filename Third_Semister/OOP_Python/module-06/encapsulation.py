class Bank:
    def __init__(self, holder_name, initial_deposit, branch) -> None:
        self.holder_name = holder_name
        self.__balance = initial_deposit
        self._branch = branch

    def getBalance(self):
        return self.__balance

    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance -= amount
            return (f"You withdraw {amount} tk. Your current Balance is {self.__balance} tk")
        else:
            return "Your Balance is Too Low!!!"

    def deposit(self, amount):
        self.__balance = self.__balance + amount
        return self.__balance


rafsan = Bank('Rafsan', 20000, 'Banani 11')
print(rafsan._branch)
rafsan._branch = "Mirpur 11"
print(rafsan._branch)
rafsan.deposit(20000)
print(rafsan.withdraw(55000))

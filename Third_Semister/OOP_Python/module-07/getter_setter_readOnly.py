class Person:
    def __init__(self,name,age,salary) -> None:
        self.name = name
        self._age = age
        self.__balance = salary

    @property
    def balance(self):
        return self.__balance
    
    @balance.setter
    def balance(self,value):
        if value <= 0:
            return 'You can not add Negative Value in your balance.'
        
        self.__balance += value

rana = Person('rana',32,50000)

# print(rana.balance)

rana.balance = 5000

print(rana.balance)

rana.balance = 8500

print(rana.balance)


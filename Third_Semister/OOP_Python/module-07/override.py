class Person:
    def __init__(self,name,age,weight,height) -> None:
        self.name = name
        self.age = age
        self.weight = weight
        self.height = height

    def eat(self):
        print("Person Eats all types of Halal Foods.")

    #when use raise NotImplementedError you have to override this function in it's child class must. otherwise throw error
    def exercise(self):
        raise NotImplementedError

class Cricketer(Person):
    def __init__(self, name, age, weight, height,team) -> None:
        self.team = team
        super().__init__(name, age, weight, height)

    #override function from parent class
    def eat(self):
        print("If you are a crickter than you have to maintain food menu properly.")

    #override
    def exercise(self):
        print("Cricketers Must have go to Gym.")

    #overloading
    #python dunder function
    def __add__(self,other):
        return self.age + other.age
    
    def __mul__(self,other):
        return self.height * other.height

    def __gt__(self,other):
        return self.age > other.age


sakib = Cricketer('Shakib',52,68,5.8,'Bangladesh')
mushi = Cricketer('Shakib',36,62,5.2,'Bangladesh')
# sakib.eat()
# sakib.exercise()

#overloading
print(sakib+mushi)
print(sakib*mushi)
print(sakib > mushi)
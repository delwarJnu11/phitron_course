# Find out which of these players is older using the operator overloading.
class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)

    def __gt__(self,other):
        return self.age > other.age

shakib = Cricketer('Sakib', 48, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)

older_player = shakib

if(musfiq > older_player):
    print("Musfiq is Older")
elif(kamal > older_player):
    print("Kamal is Older")
elif(jack > older_player):
    print("Jack is Older")
elif(kalam > older_player):
    print("kalam is Older")
else:
    print("shakib is Older")

# older_player = shakib

# if(musfiq > older_player):
#     older_player = musfiq
# elif(kamal > older_player):
#     older_player = kamal
# elif(jack > older_player):
#     older_player = jack
# elif(kalam > older_player):
#     older_player = kalam
    

# print(older_player.age)



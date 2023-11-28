class Gadget:
    def __init__(self,brand,color,price,origin) -> None:
        self.brand = brand
        self.color = color
        self.price = price
        self.origin = origin
    
    def __repr__(self) -> str:
        return(f"your product Brand is {self.brand} and your product price is {self.price}")

class Phone(Gadget):
    def __init__(self, brand, color, price, origin,camera,dual_sim) -> None:
        self.camera = camera
        self.dual_sim = dual_sim
        super().__init__(brand, color, price, origin)

    def call(self,number):
        self.number = number
        return f'Calling to {self.number}'

    def __repr__(self) -> str:
        return (f"your phone brand is {self.brand} and price is {self.price}")

class Laptop(Gadget):
    def __init__(self, brand, color, price, origin,ssd,display_size,gen,processor) -> None:
        self.ssd = ssd
        self.display = display_size
        self.gen = gen
        self.processor = processor
        super().__init__(brand, color, price, origin)

    def __repr__(self) -> str:
        return super().__repr__()
    
my_phone = Phone("Xiaomi","Black",12000,"China",3,True)

my_laptop = Laptop("Hp","silver",65000,"USA",256,1080,"11th","core i5")
print(my_laptop)


print(my_phone.call("01749497676"))
print(my_phone)

    
    
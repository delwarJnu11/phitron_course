class Vehicle:
    def __init__(self, brand, color, seat, price) -> None:
        self.brand = brand
        self.color = color
        self.seat = seat
        self.price = price

    def __repr__(self) -> str:
        return f"You vehicle's  name {self.brand} color {self.color} total seats {self.seat} and price is {self.price}"


class Bus(Vehicle):
    def __init__(self, brand, color, seat, price, isAc, fare) -> None:
        self.isAc = isAc
        self.fare = fare
        super().__init__(brand, color, seat, price)


class Truck(Vehicle):
    def __init__(self, brand, color, seat, price, weight, wheel) -> None:
        self.weight = weight
        self.wheel = wheel
        super().__init__(brand, color, seat, price)


class PickUp(Truck):
    def __init__(self, brand, color, seat, price, weight, wheel) -> None:
        super().__init__(brand, color, seat, price, weight, wheel)


my_bus = Bus("Hino", "Green", 40, 100000, False, 700)
print(my_bus)

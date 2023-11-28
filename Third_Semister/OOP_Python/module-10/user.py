from abc import ABC, abstractmethod


class User(ABC):
    def __init__(self, name, age, nid, email, phone, address) -> None:
        self.name = name
        self.age = age
        self.nid = nid
        self.email = email
        self.phone = phone
        self.address = address
        super().__init__()


class Customer(User):
    def __init__(self, name, age, nid, email, phone, address, money) -> None:
        self.wallet = money
        self.__order = None
        self.due_amount = 0
        super().__init__(name, age, nid, email, phone, address)

    @property
    def order(self):
        return self.__order

    @order.setter
    def order(self, order):
        self.__order = order

    def place_order(self, order):
        self.order = order
        self.due_amount += order.bill
        print(f'{self.name} placed an order with bill {order.bill}')

    def eat_items(self, order):
        print(f'{self.name} eating {order.items}')

    def pay_for_food(self, amount):
        pass

    def give_tips(self, tips_amount):
        pass

    def write_review(self, comment):
        pass


class Employee(User):
    def __init__(self, name, age, nid, email, phone, address, salary, department) -> None:
        self.salary = salary
        self.due = salary
        self.department = department
        super().__init__(name, age, nid, email, phone, address)

    def receive_salary(self):
        self.due = 0


class Chef(Employee):
    def __init__(self, name, age, nid, email, phone, address, salary, department, cooking_items) -> None:
        self.cooking_items = cooking_items
        super().__init__(name, age, nid, email, phone, address, salary, department)


class Manager(Employee):
    def __init__(self, name, age, nid, email, phone, address, salary, department) -> None:
        super().__init__(name, age, nid, email, phone, address, salary, department)


class Server(Employee):
    def __init__(self, name, age, nid, email, phone, address, salary, department) -> None:
        super().__init__(name, age, nid, email, phone, address, salary, department)

    def take_oder(self, order):
        pass

    def transfer_order(self, order):
        pass

    def serve_food(self, order):
        pass

    def earn_tips(self, amount):
        self.earing_tips += amount

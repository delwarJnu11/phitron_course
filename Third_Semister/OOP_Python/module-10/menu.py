class Food:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price


class Burger(Food):
    def __init__(self, name, price, burger_type, ingredients) -> None:
        self.type = burger_type
        self.ingredients = ingredients
        super().__init__(name, price)


class Pizza(Food):
    def __init__(self, name, price, size, toppings) -> None:
        self.size = size
        self.toppings = toppings
        super().__init__(name, price)


class Drinks(Food):
    def __init__(self, name, price, isCold=True) -> None:
        self.isCold = isCold
        super().__init__(name, price)


# composition
class Menu:
    def __init__(self) -> None:
        self.pizzas = []
        self.burgers = []
        self.drinks = []

    def add_food_items(self, item_type, item):
        if item_type == 'pizza':
            self.pizzas.append(item)
        elif item_type == 'burger':
            self.burgers.append(item)
        elif item_type == 'drinks':
            self.drinks.append(item)

    def remove_pizza(self, pizza):
        if pizza in self.pizzas:
            self.pizzas.remove(pizza)

    def show_menu(self):
        print('Available Foods in our restaurant.')
        print('Pizza items: ')
        for pizza in self.pizzas:
            print(f'Pizza Name-> {pizza.name} and Price-> {pizza.price}')

        print('Burger items: ')
        for burger in self.burgers:
            print(f'Burger Name-> {burger.name} and Price-> {burger.price}')

        print('Drinks & Coffee items: ')
        for drink in self.drinks:
            print(f'Drinks Name-> {drink.name} and Price-> {drink.price}')

from menu import Pizza, Burger, Drinks, Menu
from restaurant import Restaurant
from user import Chef, Server, Manager, Customer
from order import Order


def main():
    menu = Menu()
    # create Pizza
    pizza_1 = Pizza('Tomato Pizza', 500, 'large', ['tomato', 'onion', 'oil'])
    pizza_2 = Pizza('chicken Pizza', 1000, 'large',
                    ['chicken', 'onion', 'oil'])
    pizza_3 = Pizza('Beef Pizza', 1500, 'large', ['beef', 'onion', 'oil'])

    # add pizzas to the menu
    menu.add_food_items('pizza', pizza_1)
    menu.add_food_items('pizza', pizza_2)
    menu.add_food_items('pizza', pizza_3)

    # create burger
    chicken_burger = Burger('Chicken Burger', 150, 'chicken', [
                            'chicken', 'onion', 'oil', 'letus', 'sos'])
    beef_burger = Burger('Beef Burger', 150, 'beef', [
                         'beef', 'onion', 'oil', 'letus', 'sos'])

    # add burger to the menu
    menu.add_food_items('burger', chicken_burger)
    menu.add_food_items('burger', beef_burger)

    # create drinks
    cocacola = Drinks('Cocacola', 50, True)
    cold_coffee = Drinks('Cold Coffee', 50, True)
    hot_coffee = Drinks('Hot Coffee', 50, False)

    # add coffee to the menu
    menu.add_food_items('drinks', cocacola)
    menu.add_food_items('drinks', cold_coffee)
    menu.add_food_items('drinks', hot_coffee)

    menu.show_menu()

    # create Restaurant class's instance
    restaurant = Restaurant("kHAI DAI", 2000, menu)

    # create manager
    manager = Manager('Mr. Manager Saheb', 45, 12345678,
                      'mr@manager.com', 12, 'dhaka', 2500, 'manager')

    # add manager to the restaurant
    restaurant.add_employee(manager, 'manager')

    # create chef
    chef_1 = Chef("Kashem", 45, 123456, 'abul@kashem.com',
                  12, 'dhaka', 3500, 'chef', 'rice')
    chef_2 = Chef("kalam", 65, 1234, 'abul@kalam.com',
                  12, 'dhaka', 4500, 'chef', 'roast')
    chef_3 = Chef("Abul", 35, 12, 'abul@kashem.com', 12,
                  'dhaka', 5500, 'chef', 'everything')

    # add chef to the restaurant
    restaurant.add_employee(chef_1, 'chef')
    restaurant.add_employee(chef_2, 'chef')
    restaurant.add_employee(chef_3, 'chef')

    # create server
    server_1 = Server('Chotu server', 22, 12345678,
                      'naiserver.com', 12, 'restaurant', 200, 'server')
    server_2 = Server('Medium server', 22, 12345678,
                      'naiserver.com', 12, 'restaurant', 200, 'server')
    server_3 = Server('Boro server', 22, 12345678,
                      'naiserver.com', 12, 'restaurant', 200, 'server')

    # add server to the restaurant
    restaurant.add_employee(server_1, 'server')
    restaurant.add_employee(server_2, 'server')
    restaurant.add_employee(server_3, 'server')

    restaurant.show_employee()

    # create customer
    customer_1 = Customer('Shakib Khan', 40, 123,
                          'shakib@khan.com', 555, 'Dhaka', 50000)
    order_1 = Order(customer_1, [beef_burger, cocacola])
    customer_1.place_order(order_1)
    restaurant.add_order(order_1)

    # bill pay for order 1
    customer_1_return_money = restaurant.receive_payment(
        order_1, 1000, customer_1)
    print(f"Customer Get back {customer_1_return_money} tk.")


if __name__ == '__main__':
    main()

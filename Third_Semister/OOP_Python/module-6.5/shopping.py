class Product:
    def __init__(self, id, product_name, price, quantity) -> None:
        self.id = id
        self.product_name = product_name
        self.price = price
        self.quantity = quantity


class Shop:
    def __init__(self) -> None:
        self.products = []

    def add_product(self, product):
        self.products.append({'id': len(
            self.products)+101, 'product_name': product.product_name, 'price': product.price, 'quantity': product.quantity})

    def display_products(self):
        for product in self.products:
            print(product)

    def buy_product(self, product_name, quantity):
        for product in self.products:
            if product['product_name'] == product_name and product['quantity'] >= quantity:
                product['quantity'] -= quantity
                print(
                    f"Congratulations! You have successfully bought {quantity} {product_name}.")
                return

        print(f"Sorry! {product_name} not in our shop.")


product1 = Product(1, "Dell Laptop", 30000, 20)
product2 = Product(2, "HP Laptop", 50000, 30)
product3 = Product(3, "Asus Laptop", 60000, 10)

shop = Shop()

shop.add_product(product1)
shop.add_product(product2)
shop.add_product(product3)
shop.display_products()

shop.buy_product('Dell Laptop', 5)
shop.buy_product('HP Laptop', 4)
shop.buy_product('Asus Laptop', 2)

shop.display_products()

shop.buy_product('Asus Laptop', 3)

shop.display_products()

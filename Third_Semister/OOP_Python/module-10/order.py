class Order:
    def __init__(self, customer, items) -> None:
        self.customer = customer
        self.items = items
        self.total = 0

        for item in items:
            self.total += item.price

        self.bill = self.total

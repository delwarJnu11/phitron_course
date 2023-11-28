class Restaurant:
    def __init__(self, name, rent, menu=[]) -> None:
        self.name = name
        self.rent = rent
        self.chefs = []
        self.servers = []
        self.managers = []
        self.balance = 0
        self.expense = 0
        self.revenue = 0
        self.menu = menu
        self.orders = []

    def add_employee(self, employee, employee_type):
        if employee_type == 'chef':
            self.chefs.append(employee)
        elif employee_type == 'manager':
            self.managers.append(employee)
        elif employee_type == 'server':
            self.servers.append(employee)

    def add_order(self, order):
        self.orders.append(order)

    def receive_payment(self, order, amount, customer):
        if amount >= order.bill:
            self.revenue += order.bill
            self.balance += order.bill
            customer.due_amount = 0
            return amount - order.bill
        else:
            print('Not enough money.Please pay complete bill.')

    def pay_expense(self, amount, description):
        if amount < self.balance:
            self.expense += amount
            self.balance - + amount
            print(f'Expense for {description} amount is {amount} tk.')
        else:
            print(f'Not enough money for paying expense bill {amount} tk.')

    def pay_salary(self, employee):
        if employee.salary < self.balance:
            self.balance -= employee.salary
            self.expense += employee.salary
            employee.receive_salary()

    def show_employee(self):
        print('---------Show Employees--------')

        print('Our Chefs:')
        for chef in self.chefs:
            print(f'Chef Name -> {chef.name} Salary -> {chef.salary}')

        print('Our Managers:')
        for manager in self.managers:
            print(f'Manager Name -> {manager.name} Salary -> {manager.salary}')

        print('Our Servers:')
        for server in self.servers:
            print(f'Server Name -> {server.name} Salary -> {server.salary}')

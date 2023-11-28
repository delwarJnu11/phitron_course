# Write down 4 differences between the class method and static method with proper examples.

class Employee:
    def __init__(self,name,location, salary) -> None:
        self.name = name
        self.location = location
        self.salary = salary
    @staticmethod
    def anual_income(salary):
        return salary * 12
    
    @classmethod
    def emp_of_the_year(self,name,location):
        return 
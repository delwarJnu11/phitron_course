class my_calculator:
    brand = "Casio"
    model = "MS 990"

    def add(self, num1, num2):
        sum = num1 + num2
        return sum

    def sub(self, num1, num2):
        sub = num1 - num2
        return sub

    def multiply(self, num1, num2):
        times = num1 * num2
        return times

    def divide(self, num1, num2):
        divided = num1 / num2
        return divided


my_calculator = my_calculator()

sum = my_calculator.add(15, 10)
sub = my_calculator.sub(15, 10)
times = my_calculator.multiply(15, 10)
div = my_calculator.divide(15, 10)

print(my_calculator.brand, my_calculator.model)
print("sum ->", sum)
print("sub ->", sub)
print("Multiply ->", times)
print("divide ->", div)

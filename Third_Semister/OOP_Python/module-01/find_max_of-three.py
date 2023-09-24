num1 = input("Please Provide your Number: ")
num2 = input("Please Provide your Number: ")
num3 = input("Please Provide your Number: ")

num1 = int(num1)
num2 = int(num2)
num3 = int(num3)

if (num1 >= num2 and num1 >= num3):
    print("Max Number is -> ", num1)
elif (num2 >= num1 and num2 >= num3):
    print("Max Number is -> ", num2)
else:
    print("Max Number is -> ", num3)

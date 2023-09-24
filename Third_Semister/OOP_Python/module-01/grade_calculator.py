number = input('Please Provide your number: ')

number = int(number)

if number >= 80:
    print("Congrats!! You got A+ Grade!!!")
elif number <= 79 and number >= 70:
    print("Congrats!! You got A Grade!!!")
elif number <= 69 and number >= 60:
    print("Congrats!! You got A- Grade!!!")
elif number <= 59 and number >= 50:
    print("Congrats!! You got B Grade!!!")
elif number <= 49 and number >= 40:
    print("Congrats!! You got C Grade!!!")
elif number <= 39 and number >= 33:
    print("Congrats!! You Achieve D Grade!!!")
else:
    print("You Failed!, Try Again!")

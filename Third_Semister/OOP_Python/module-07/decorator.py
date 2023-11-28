import math

def timer(decorated):
    print('outer function Calling')
    def inner(*args, **kwargs):
        print('Inner Function Started')
        decorated(*args, **kwargs)
        print('Inner Function Ended')
    return inner

@timer
def factorial(n):
    print(math.factorial(n))

factorial(5)
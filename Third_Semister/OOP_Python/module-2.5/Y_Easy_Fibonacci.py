n = int(input())

first, second = 0, 1
for _i in range(n):
    print(first, end=" ")
    first, second = second, first + second

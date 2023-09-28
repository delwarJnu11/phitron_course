t = int(input())

while t > 0:
    x, y = input().split()
    x = int(x)
    y = int(y)

    sum = 0
    if x > y:
        for val in range(x - 1, y, -1):
            if val % 2 == 1:
                sum += val
    else:
        for val in range(x + 1, y):
            if val % 2 == 1:
                sum += val
    print(sum)
    t -= 1

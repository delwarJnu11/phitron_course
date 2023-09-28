x, n = input().split()

x = int(x)
n = int(n)
result = 0
for i in range(0, n, 2):
    if i >= 2 and i < n:
        result += abs(pow(x, i))

print(result)

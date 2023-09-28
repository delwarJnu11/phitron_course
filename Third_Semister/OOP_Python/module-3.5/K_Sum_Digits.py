n = int(input())

nm = ""
if len(nm) <= n:
    nm = input()

sum = 0
for i in nm:
    sum += int(i)

print(sum)

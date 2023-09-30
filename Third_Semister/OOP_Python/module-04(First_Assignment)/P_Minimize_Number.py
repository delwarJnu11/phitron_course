n = int(input())

lst = list(map(int, input().split()))

cnt = 0

while all(num % 2 == 0 for num in lst):
    for i in range(len(lst)):
        lst[i] = lst[i] // 2
    cnt += 1

print(cnt)

# while all(num % 2 == 0 for num in A):
#     A = [num // 2 for num in A]


N = int(input())

lst = []

if len(lst) <= N:
    lst = list(map(int, input().split()))


if lst == lst[:: -1]:
    print("YES")
else:
    print("NO")

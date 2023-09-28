n = int(input())

lst = []

if len(lst) <= n:
    lst = list(map(int, input().split()))


mn = min(lst)
mx = max(lst)

for indx, val in enumerate(lst):
    if val == mn:
        lst[indx] = mx
    elif val == mx:
        lst[indx] = mn

print(*lst)

from collections import Counter

n = int(input())
lst = list(map(int, input().split()))

cnt = Counter(lst)

res = 0

for val in cnt:
    if cnt[val] > val:
        res += cnt[val] - val
    elif cnt[val] < val:
        res += cnt[val]

print(res)
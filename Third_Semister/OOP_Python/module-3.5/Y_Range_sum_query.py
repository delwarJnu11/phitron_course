n, q = input().split()

n = int(n)
q = int(q)

lst = []

if len(lst) <= n:
    lst = list(map(int, input().split()))

pre = [0] * (n + 1)
pre[0] = lst[0]

for i in range(1, n):
    pre[i] = lst[i] + pre[i-1]

while q > 0:
    l, r = input().split()

    l = int(l)
    r = int(r)

    l -= 1
    r -= 1

    sum = 0
    if (l == 0):
        sum = pre[r]
    else:
        sum = pre[r] - pre[l - 1]
    print(sum)
    q -= 1

t = int(input())
while t > 0:
    nums = input()
    output = ' '.join(map(str, nums))
    print(output[:: -1])
    t -= 1

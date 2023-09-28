text = input()

txt = list(text.split(" "))
for index, word in enumerate(txt):
    # print(len(txt), index+1, word)
    if index+1 != len(txt):
        print(word[::-1], end=" ")
    else:
        print(word[::-1])

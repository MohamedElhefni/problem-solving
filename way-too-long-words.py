words = [input() for word in range(int(input()))]
for word in words:
    if len(word) > 10:
        print(word[0] + str(len(word) - 2 ) + word[-1])
    else: 
        print(word)

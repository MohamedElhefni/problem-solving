
letters = "abcdefghijklmnopqrstuvwxyz"
n, k = list(map(int, input().split()))
output = ""
current = 0
for i in range(n):
    if current == k :
        current = 0
    output += letters[current]
    current += 1

print(output)
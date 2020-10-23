n = int(input())
s = list(map(int, input().split()))
result = 0
s.sort()
for i in s:
    if s[0] < i and s[n - 1] > i:
        result+=1

print(result)
events = int(input())
crimes = list(map(int, input().split()))
untreated = 0 
hired = 0
for i in range(events):
    currnetCrime = crimes[i]
    if currnetCrime == abs(currnetCrime):
        hired += currnetCrime
        continue
    if hired > 0 and currnetCrime != abs(currnetCrime):
        hired -= 1
        continue
    if hired == 0 and currnetCrime != abs(currnetCrime):
        untreated += 1
   

print(untreated)
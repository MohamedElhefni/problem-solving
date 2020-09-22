numberOfStones = int(input())
stonesColor =input()
operatoins = 0

for i in range(numberOfStones - 1):
    if stonesColor[i] == stonesColor[i + 1]:
        operatoins +=1

print(operatoins)

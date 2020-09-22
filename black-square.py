caloriesVal = list(map(int, input().split()))
pattern = list(map(int, list(input())))
result = 0 
for move in pattern:
    result += caloriesVal[move - 1]

print(result)
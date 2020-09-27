#link http://codeforces.com/contest/9/problem/A
points = list(map(int, input().split()))
yakkoPoints = points[0]
wakkoPoints = points[1]

probabilities = ["1/6","1/3","1/2","2/3","5/6","1/1"]

dotMaxPoints = max(yakkoPoints, wakkoPoints)

print(probabilities[6-dotMaxPoints])
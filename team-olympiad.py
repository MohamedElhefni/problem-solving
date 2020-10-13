def column(teams, i):
    return [row[i] for row in teams]

n = int(input())
childrens = list(map(int, input().split()))
teams = [
    [],
    [],
    []
    ]

for i in range(n):
     
    if childrens[i] == 1:
        teams[0].append(i)
    if childrens[i] == 2:
        teams[1].append(i)
    if childrens[i] == 3:
        teams[2].append(i)

teamsNumber = min(map(len, teams))

newTeams = [[x+1 for x in teams[i]] for i in range(len(teams))]
print(teamsNumber)
for i in range(teamsNumber):
    for index in column(newTeams, i):
        print(index, end=" ")
    print(' ')

#link http://codeforces.com/contest/294/problem/A

numberOfWires = int(input())
birdsOnWire = list(map(int, input().split()))
numberOfShots = int(input())
shots = []
for _ in range(numberOfShots):
    shots.append(list(map(int, input().split())))

for shot in range(numberOfShots):
    shotedWire = shots[shot][0]
    shotedWire -= 1
    shotedBird = shots[shot][1] 
    birdsOnShotedWire = birdsOnWire[shotedWire - 1] 
    if shotedWire != 0:
        birdsOnWire[shotedWire - 1] += shotedBird -1 

    if shotedWire != (numberOfWires - 1):
        birdsOnWire[shotedWire + 1] += birdsOnWire[shotedWire] - shotedBird
    
    birdsOnWire[shotedWire] = 0
    
    
for birds in birdsOnWire:
    print(birds)


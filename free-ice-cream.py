n, numberOfIceCream = input().split()
queue = [int(str(input()).replace(' ', '')) for _ in range(int(n))]
result = int(numberOfIceCream) 
distressedKids = 0
for obj in queue:
    if obj < 0 :
        if abs(obj) > result:
            distressedKids +=1
        else:
            result += obj
    else:
        result += obj    

    # if result < 0:
    #     distressedKids += 1 

print(result, distressedKids)
#link : http://codeforces.com/contest/709/problem/A
n,b,d = map(int, input().split())
oranges = list(map(int, input().split()))
overflows = 0 
theSum = 0 
for orange in oranges:
    if orange <= b:
        theSum += orange
        if theSum > d:
            overflows += 1
            theSum  = 0



print(overflows)
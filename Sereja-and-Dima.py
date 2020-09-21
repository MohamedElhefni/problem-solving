numberOfCards = int(input())
numberOnCard = list(map(int, input().split()))

serejaResult = 0
dimaResult = 0

serejaTurn = True

for i in range(numberOfCards):
    lastNum = numberOnCard[len(numberOnCard) - 1]
    firstNum = numberOnCard[0]
    if lastNum > firstNum:
        chosen = lastNum
    else:
        chosen = firstNum

    if serejaTurn:
        serejaResult += chosen
    else:
        dimaResult += chosen
    numberOnCard.remove(chosen)
    serejaTurn = not serejaTurn


print(serejaResult, dimaResult)
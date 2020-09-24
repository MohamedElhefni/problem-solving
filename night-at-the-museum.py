letters = "abcdefghijklmnopqrstuvwxyz"
word =  list(input())
currentLetter = 'a'
result = 0
for letter in word:
    withClock = len(letters[letters.find(currentLetter):letters.find(letter)])
    if withClock == 0:
        reveresdLetters = letters[::-1]
        withClock = len(reveresdLetters[reveresdLetters.find(currentLetter):reveresdLetters.find(letter)])
    againstClock = 26 - withClock
    if withClock > againstClock:
        result += againstClock
    else:
        result += withClock
    currentLetter = letter

print(result)
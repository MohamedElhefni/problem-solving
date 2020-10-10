letters_input = input().strip("{}").split(',')
letters = len(set(letter.strip() for letter in letters_input if len(letter) > 0))

print(letters)
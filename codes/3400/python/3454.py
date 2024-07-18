def gameResult(game):
    count_O = 0
    count_X = 0
    for i in game:
        if i == 'O':
            count_O += 1
        else:
            count_X += 1
    if count_O >= 2 or count_X == 3:
            return '?'
    for i in range(0, len(game) - 1):
        if game[i] == game[i + 1] and game[i] == 'X':
            return 'Alice'
    return '*'
        
game = input()
print(gameResult(game))
